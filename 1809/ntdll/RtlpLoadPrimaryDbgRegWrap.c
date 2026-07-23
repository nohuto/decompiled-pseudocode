/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A50D0
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A5046 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010C030 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
