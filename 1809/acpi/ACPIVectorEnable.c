/*
 * XREFs of ACPIVectorEnable @ 0x1C005EBD0
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x1C0051ABC (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable2 @ 0x1C005EC90 (ACPIVectorEnable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019D20 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0025D3C (ACPIGpeEnableDisableEvents.c)
 */

__int64 __fastcall ACPIVectorEnable(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rdx
  int v6; // r8d
  void *v7; // rdx
  int v9; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v5);
  v6 = 1 << (v2 & 7);
  *((_BYTE *)GpeEnable + v3) |= v6;
  v7 = GpeCurEnable;
  *((_BYTE *)GpeCurEnable + v3) |= v6;
  ACPIGpeEnableDisableEvents(1, (__int64)v7);
  KeReleaseSpinLock(&GpeTableLock, v4);
  v9 = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xEu,
    0xEu,
    (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids,
    v9);
  return 0LL;
}
