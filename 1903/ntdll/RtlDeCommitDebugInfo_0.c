/*
 * XREFs of RtlDeCommitDebugInfo_0 @ 0x1800D7EFC
 * Callers:
 *     sub_18007533C @ 0x18007533C (sub_18007533C.c)
 *     RtlDeCommitDebugInfo @ 0x1800D72F0 (RtlDeCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7300 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800DA48C @ 0x1800DA48C (sub_1800DA48C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeCommitDebugInfo_0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( a3 <= 0xFFFFFFF8 )
  {
    v3 = *(_QWORD *)(a1 + 72) - ((a3 + 7) & 0xFFFFFFF8);
    result = v3 + a1;
    if ( a2 == v3 + a1 )
      *(_QWORD *)(a1 + 72) = v3;
  }
  return result;
}
