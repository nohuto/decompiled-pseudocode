/*
 * XREFs of ACPIVectorDisconnect @ 0x1C0060980
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1C0060AA0 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C00AE2D8 (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0022134 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C00224E8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0023C40 (ACPIGpeInstallRemoveIndex.c)
 */

__int64 __fastcall ACPIVectorDisconnect(char *P)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xDu,
      (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids);
  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v3);
  v4 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)P) + GpeMap);
  if ( v4 < GpeVectorTableSize )
  {
    v5 = 2LL * v4;
    *((_QWORD *)GpeVectorTable + v5 + 1) = 0LL;
    *((_BYTE *)GpeVectorTable + 8 * v5) = GpeVectorFree;
    GpeVectorFree = v4;
  }
  v6 = 0;
  if ( !ACPIGpeInstallRemoveIndex(*(unsigned int *)P, 2, 0, P + 25) )
    v6 = -1073741823;
  ACPIGpeEnableDisableEvents(1, 3221225473LL);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( !v6 )
    ExFreePoolWithTag(P, 0);
  return v6;
}
