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

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  PVOID v5; // rbx
  ULONG v6; // r15d
  BOOL v7; // ebp
  int v8; // r12d
  unsigned __int64 BlockSize; // rdi
  void *EnvBlock; // rsi
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  _DWORD *v14; // rax
  bool v15; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    if ( (Flags & 4) == 0 )
      goto LABEL_6;
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
LABEL_6:
  if ( (Flags & 4) != 0 )
    goto LABEL_23;
  if ( SourceEnvironment )
  {
    v7 = !(Flags & 1);
    v8 = 0;
    BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, !(Flags & 1));
    goto LABEL_9;
  }
  v7 = 1;
  v8 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_23;
  while ( 1 )
  {
LABEL_9:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( v8 != 1 )
      goto LABEL_11;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_11:
      if ( v7 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v8 == 1 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_19:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v12 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = BlockSize >> 1;
        if ( v6 )
          v11 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v11 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v12 = v11;
      }
      if ( v12 >= 0 )
        goto LABEL_19;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
      return v12;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
LABEL_23:
  v14 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v14 )
    return -1073741670;
  *v14 = 0;
  *Environment = v14;
  return 0;
}
