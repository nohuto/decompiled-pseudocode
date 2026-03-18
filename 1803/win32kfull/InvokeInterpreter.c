/*
 * XREFs of InvokeInterpreter @ 0x1C02C52B4
 * Callers:
 *     itrp_CALL @ 0x1C02C60B0 (itrp_CALL.c)
 *     itrp_CALL_helper @ 0x1C02C6440 (itrp_CALL_helper.c)
 *     itrp_Execute @ 0x1C02C7028 (itrp_Execute.c)
 *     itrp_IDefPatch @ 0x1C02C8610 (itrp_IDefPatch.c)
 *     itrp_LOOPCALL @ 0x1C02CA5F0 (itrp_LOOPCALL.c)
 * Callees:
 *     itrp_InnerExecute @ 0x1C02CA1BC (itrp_InnerExecute.c)
 *     itrp_InnerTraceExecute @ 0x1C02CA218 (itrp_InnerTraceExecute.c)
 */

void __fastcall InvokeInterpreter(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      itrp_InnerExecute(a2, a3);
    else
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  }
  else
  {
    itrp_InnerTraceExecute(a2, a3);
  }
}
