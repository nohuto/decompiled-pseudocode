/*
 * XREFs of PsWow64GetProcessMachine @ 0x1405E8D00
 * Callers:
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     KeVerifyContextRecord @ 0x14001B950 (KeVerifyContextRecord.c)
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1064);
  if ( !v1 )
    return 34404LL;
  result = *(unsigned __int16 *)(v1 + 8);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
