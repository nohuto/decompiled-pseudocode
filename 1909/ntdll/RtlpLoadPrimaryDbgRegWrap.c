/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A1D80
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A1CF6 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010A250 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
