/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020B700
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D09E8 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025F244 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C029CDC8 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // r8
  DXGADAPTER *v12; // [rsp+38h] [rbp+10h]

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v5 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
LABEL_3:
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v5;
  }
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v9, v8, v11);
    v5 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(v12);
  DXGADAPTER::ReleaseCoreSync((__int64)v12, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, v12);
  *((_QWORD *)Current + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
