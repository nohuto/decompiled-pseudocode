/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020B630
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D1B00 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025D780 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C029CDC8 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGPROCESS *v12; // rdi
  char *v13; // rbx
  struct DXGADAPTER *v14; // [rsp+38h] [rbp+10h]

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
  v12 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v10, v9, v11);
    v5 = -1073741811LL;
    goto LABEL_3;
  }
  v13 = (char *)Current + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v12, v14);
  DXGADAPTER::AcquireCoreSync((__int64)v14, 1);
  DXGADAPTER::AcquireDdiSync((__int64)v14, 1);
  return 0LL;
}
