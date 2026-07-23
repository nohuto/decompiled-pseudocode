/*
 * XREFs of PopSetupMixedRealitytNotification @ 0x14078C1CC
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     ExSubscribeWnfStateChange @ 0x140652D70 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMixedRealitytNotification()
{
  unsigned __int64 Buffer; // [rsp+50h] [rbp+8h] BYREF
  char v2; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 0xFFFFFFFF00000001uLL;
  ZwUpdateWnfStateData(&WNF_SEB_MIXED_REALITY, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return ExSubscribeWnfStateChange(
           (int)&v2,
           (int)&WNF_SEB_MIXED_REALITY,
           1,
           0,
           (__int64)PopWnfMixedRealityCallback,
           0LL);
}
