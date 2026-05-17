/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180055450
 * Callers:
 *     RtlCreateEnvironment @ 0x180054C80 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18005539C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpAllocateEnvBlock @ 0x180057FB8 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x180057FE4 (RtlpGetBlockSizeEx.c)
 *     RtlMultiByteToUnicodeN @ 0x180058120 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x18006A3C0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rsi
  int v6; // r15d
  int v7; // ebp
  int v8; // r8d
  unsigned int v9; // ebp
  int v10; // r12d
  size_t BlockSize; // rbx
  void *EnvBlock; // rdi
  _DWORD *v14; // rax
  bool v15; // cc
  int v16; // eax
  int v17; // ebx
  int v18; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    v7 = a3 & 1;
    goto LABEL_5;
  }
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    return 3221225713LL;
LABEL_5:
  if ( !Src )
  {
    v7 = a3 & 1;
    if ( (a3 & 1) == 0 )
    {
      v8 = a3 & 4;
      goto LABEL_7;
    }
    return 3221225520LL;
  }
  v8 = a3 & 4;
  if ( v8 )
    return 3221225520LL;
LABEL_7:
  if ( v8 )
    goto LABEL_20;
  if ( Src )
  {
    v9 = v7 ^ 1;
    v10 = 0;
    BlockSize = RtlpGetBlockSizeEx(Src, v9);
    goto LABEL_10;
  }
  v9 = 1;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_20;
  while ( 1 )
  {
LABEL_10:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( v10 != 1 )
      goto LABEL_12;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_12:
      if ( v9 == 1 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v10 == 1 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_15:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        v18 = BlockSize >> 1;
        if ( v6 )
          v16 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v18);
        else
          v16 = RtlMultiByteToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v18);
        v17 = v16;
      }
      if ( v17 >= 0 )
        goto LABEL_15;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)EnvBlock);
      return (unsigned int)v17;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)EnvBlock);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)EnvBlock);
LABEL_20:
  v14 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v14 )
    return 3221225626LL;
  *v14 = 0;
  *a2 = v14;
  return 0LL;
}
