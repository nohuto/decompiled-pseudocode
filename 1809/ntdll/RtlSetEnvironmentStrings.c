/*
 * XREFs of RtlSetEnvironmentStrings @ 0x180085E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpAllocateEnvBlock @ 0x180057FB8 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  void *EnvBlock; // rax
  void *v8; // rsi
  void *v9; // [rsp+50h] [rbp+18h]
  unsigned __int64 v10; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v10 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Environment);
  if ( v10 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( v10 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v8 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v9 = ProcessParameters->Environment;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
    return 0LL;
  }
  return 3221225626LL;
}
