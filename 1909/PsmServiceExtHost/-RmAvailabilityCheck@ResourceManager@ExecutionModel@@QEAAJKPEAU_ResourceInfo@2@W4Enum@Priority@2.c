/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180065A40
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x180061360 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000A7D0 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18006FBA0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        DWORD a5)
{
  ExecutionModel::ResourceManager *v5; // r15
  unsigned int v9; // ebx
  unsigned int *v10; // rdi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // r9
  DWORD v14; // ebx
  char v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h]
  DWORD *v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  int *v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+138h] [rbp+38h]
  int *v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]

  v5 = g_pResourceManager;
  v16[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( a3 )
  {
    RmpAcquireGlobalLock();
    v9 = 0;
    if ( a2 )
    {
      v10 = a3;
      while ( 1 )
      {
        v17 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld((struct _RM_SERVICE_GLOBALS **)v5, *v10, a5, 1);
        if ( v17 < 0 )
          break;
        ++v9;
        v10 += 6;
        if ( v9 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v11 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v5, *((_QWORD *)v5 + 3), a2, a3, a4, a5, v16);
      v17 = v11;
      if ( v11 >= 0 )
      {
        if ( !v16[0] )
          v11 = -2147467259;
        v17 = v11;
      }
    }
  }
  else
  {
    v17 = -2147024882;
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v24 = v13;
    v23 = &v17;
    v25 = &v18;
    v27 = (int *)&v19;
    v29 = &v20;
    v18 = a5;
    v26 = v13;
    v19 = a2;
    v28 = v13;
    v20 = a4;
    v30 = v13;
    TlgWrite(v12, &unk_180092CB8, 0LL, 0LL, 6u, &pData);
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v14, 0LL);
  }
  return (unsigned int)v17;
}
