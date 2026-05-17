/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18005CC20
 * Callers:
 *     RtlCreateEnvironment @ 0x18005C310 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18005CA28 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpAllocateEnvBlock @ 0x18005D81C (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18005D848 (RtlpGetBlockSizeEx.c)
 *     RtlMultiByteToUnicodeN @ 0x18005D8B0 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061FA0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rbx
  int v6; // r15d
  BOOL v7; // ebp
  int v8; // r12d
  size_t BlockSize; // rdi
  void *EnvBlock; // rsi
  int v11; // eax
  int v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  if ( Src )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_6;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
LABEL_6:
  if ( (a3 & 4) != 0 )
    goto LABEL_23;
  if ( Src )
  {
    v7 = !(a3 & 1);
    v8 = 0;
    BlockSize = RtlpGetBlockSizeEx(Src, !(a3 & 1));
    goto LABEL_9;
  }
  v7 = 1;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_23;
  while ( 1 )
  {
LABEL_9:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( v8 != 1 )
      goto LABEL_11;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_11:
      if ( v7 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v8 == 1 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_19:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v12 = -2147483643;
      }
      else
      {
        v16 = BlockSize >> 1;
        if ( v6 )
          v11 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v16);
        else
          v11 = RtlMultiByteToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v16);
        v12 = v11;
      }
      if ( v12 >= 0 )
        goto LABEL_19;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
      return (unsigned int)v12;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
LABEL_23:
  v14 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v14 )
    return 3221225626LL;
  *v14 = 0;
  *a2 = v14;
  return 0LL;
}
