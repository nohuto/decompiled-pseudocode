/*
 * XREFs of CmpArmDelayDerefKCBWorker @ 0x14068B2E8
 * Callers:
 *     CmpDelayDerefKCBWorker @ 0x1405B20B0 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 */

_BOOL8 CmpArmDelayDerefKCBWorker()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2((__int64)&CmpDelayDerefKCBTimer, -10000000LL, 0LL, (__int64)v1);
}
