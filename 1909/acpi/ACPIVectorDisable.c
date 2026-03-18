/*
 * XREFs of ACPIVectorDisable @ 0x1C0060890
 * Callers:
 *     ACPIEcMaskInterrupt @ 0x1C0053418 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable2 @ 0x1C0060960 (ACPIVectorDisable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0022134 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0023E28 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorDisable(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v8; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v5);
  v6 = (unsigned __int8)~(1 << (v2 & 7));
  *((_BYTE *)GpeEnable + v3) &= v6;
  *((_BYTE *)GpeCurEnable + v3) &= v6;
  ACPIGpeEnableDisableEvents(1, v6);
  KeReleaseSpinLock(&GpeTableLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids,
      v8);
  }
  return 0LL;
}
