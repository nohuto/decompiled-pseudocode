/*
 * XREFs of PopInitVideoWnfState @ 0x140A221A0
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopInitVideoWnfState()
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  ZwUpdateWnfStateData(&WNF_PO_VIDEO_INITIALIALIZED, &PopVideoInitialized, 1u, 0LL, 0LL, 0, 0);
  ZwUpdateWnfStateData(
    &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
    &PopVideoHighPrecisionBrightnessEnabled,
    1u,
    0LL,
    0LL,
    0,
    0);
  Buffer = 100;
  return ZwUpdateWnfStateData(&WNF_PO_BRIGHTNESS_ALS_OFFSET, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
