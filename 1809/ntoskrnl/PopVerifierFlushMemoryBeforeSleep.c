/*
 * XREFs of PopVerifierFlushMemoryBeforeSleep @ 0x1405662FC
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x14056FA20 (MmPerformMemoryListCommand.c)
 *     MmIsVerifierEnabled @ 0x140922490 (MmIsVerifierEnabled.c)
 */

__int64 PopVerifierFlushMemoryBeforeSleep()
{
  __int64 result; // rax
  __int64 v1; // rbx
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  MmIsVerifierEnabled(&VerifierFlags);
  result = (VerifierFlags & 2) != 0;
  if ( (PopSimulate & 0x80u) != 0 )
    result = 1LL;
  if ( (_BYTE)result )
  {
    v1 = 2LL;
    do
    {
      MmPerformMemoryListCommand(2LL);
      MmPerformMemoryListCommand(3LL);
      MmPerformMemoryListCommand(3LL);
      --v1;
    }
    while ( v1 );
    return MmPerformMemoryListCommand(4LL);
  }
  return result;
}
