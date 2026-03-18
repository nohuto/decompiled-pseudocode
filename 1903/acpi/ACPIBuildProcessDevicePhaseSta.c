/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C000F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     ACPIDetectDuplicateHID @ 0x1C00120AC (ACPIDetectDuplicateHID.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     LinkNodeAddLinkNode @ 0x1C0030608 (LinkNodeAddLinkNode.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C005C234 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  ULONG_PTR v1; // rbx
  void *v3; // rax
  __int64 v4; // rcx
  void *v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  *(_DWORD *)(a1 + 32) = 14;
  v3 = &unk_1C006FE7D;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006FE7D;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (__int64)v5;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      6,
      48,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      0,
      v1,
      (__int64)v3,
      v8);
  }
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  v6 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v6);
  return 0LL;
}
