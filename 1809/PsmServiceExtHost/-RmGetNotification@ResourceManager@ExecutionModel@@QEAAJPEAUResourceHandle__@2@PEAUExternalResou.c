/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180006050
 * Callers:
 *     RmgrSrv_RmGetNotification @ 0x180005F10 (RmgrSrv_RmGetNotification.c)
 * Callees:
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x1800061B8 (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180006598 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  ExecutionModel::ResourceManager *v3; // rbx
  int ResourceSetFromHandle; // eax
  ExecutionModel::ExternalResourceSet *v7; // rbx
  int NextMessage; // eax
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // r9
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  ExecutionModel::ExternalResourceSet *v14; // [rsp+38h] [rbp-C8h] BYREF
  struct ExecutionModel::ResourceHandle__ *v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  struct ExecutionModel::ResourceHandle__ **v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]
  ExecutionModel::ExternalResourceSet **v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]

  v3 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v14 = 0LL;
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v3, a2, &v14);
  v7 = v14;
  v13 = ResourceSetFromHandle;
  if ( ResourceSetFromHandle >= 0 )
  {
    NextMessage = ExecutionModel::ExternalResourceSet::GetNextMessage(v14, a3);
    if ( NextMessage >= 0 )
      NextMessage = 0;
    v13 = NextMessage;
  }
  RmpReleaseGlobalLock();
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v19 = v10;
    v18 = &v13;
    v20 = &v15;
    LODWORD(v14) = *(_DWORD *)a3;
    v22 = &v14;
    v15 = a2;
    v21 = 8LL;
    v23 = v10;
    TlgWrite(v9, &unk_180084D71, 0LL, 0LL, 5u, &pData);
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  return v13;
}
