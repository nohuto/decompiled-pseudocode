/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x1C0019F80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A9C8 (ACPIDetectDuplicateHID.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     LinkNodeAddLinkNode @ 0x1C002F894 (LinkNodeAddLinkNode.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C005A4E4 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
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
  v3 = &unk_1C006E28A;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006E28A;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v3 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(void **)(v1 + 568);
  }
  v8 = (__int64)v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v5,
    6,
    48,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v1,
    (__int64)v3,
    v8);
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  v6 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v6);
  return 0LL;
}
