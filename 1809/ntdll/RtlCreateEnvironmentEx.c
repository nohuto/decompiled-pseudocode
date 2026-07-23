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

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  PVOID v5; // rsi
  ULONG v6; // r15d
  ULONG v7; // ebp
  ULONG v8; // r8d
  unsigned int v9; // ebp
  int v10; // r12d
  unsigned __int64 BlockSize; // rbx
  void *EnvBlock; // rdi
  _DWORD *v14; // rax
  bool v15; // cc
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 2;
  if ( (Flags & 2) == 0 )
  {
    v7 = Flags & 1;
    goto LABEL_5;
  }
  v7 = Flags & 1;
  if ( (Flags & 1) == 0 )
    return -1073741583;
LABEL_5:
  if ( !SourceEnvironment )
  {
    v7 = Flags & 1;
    if ( (Flags & 1) == 0 )
    {
      v8 = Flags & 4;
      goto LABEL_7;
    }
    return -1073741776;
  }
  v8 = Flags & 4;
  if ( v8 )
    return -1073741776;
LABEL_7:
  if ( v8 )
    goto LABEL_20;
  if ( SourceEnvironment )
  {
    v9 = v7 ^ 1;
    v10 = 0;
    BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, v9);
    goto LABEL_10;
  }
  v9 = 1;
  v10 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_20;
  while ( 1 )
  {
LABEL_10:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( v10 != 1 )
      goto LABEL_12;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_12:
      if ( v9 == 1 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v10 == 1 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_15:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = BlockSize >> 1;
        if ( v6 )
          v16 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v16 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v17 = v16;
      }
      if ( v17 >= 0 )
        goto LABEL_15;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
LABEL_20:
  v14 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v14 )
    return -1073741670;
  *v14 = 0;
  *Environment = v14;
  return 0;
}
