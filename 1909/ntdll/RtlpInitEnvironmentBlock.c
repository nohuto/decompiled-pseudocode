/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18005CA28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005CADC (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlCreateEnvironmentEx @ 0x18005CC20 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x18005D81C (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18005D848 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

NTSTATUS RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *v1; // rbp
  size_t BlockSize; // rdi
  void *EnvBlock; // rax
  PVOID v4; // rsi
  NTSTATUS result; // eax
  PVOID Environment; // [rsp+30h] [rbp+8h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  if ( v1 )
  {
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    memmove(EnvBlock, v1, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4LL;
  result = RtlCreateEnvironmentEx(0LL, &Environment, 4u);
  if ( result >= 0 )
  {
    v4 = Environment;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    RtlpWow64ThunkEnvironment32To64();
    return 0;
  }
  return result;
}
