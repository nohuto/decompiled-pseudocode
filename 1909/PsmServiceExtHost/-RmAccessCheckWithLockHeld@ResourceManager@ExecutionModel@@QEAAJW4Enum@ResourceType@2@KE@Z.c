/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000A7D0
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800069CC (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000A738 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180065A40 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000998C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000AF78 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        DWORD a3,
        char a4)
{
  struct _RM_ACTIVITY_HOST *v4; // rsi
  int v5; // r14d
  void *v10; // rbx
  HANDLE v11; // rax
  int v12; // edi
  int v13; // eax
  const struct _TlgProvider_t *v14; // rcx
  int v15; // r9d
  struct ExecutionModel::ResourceManager *v17; // rcx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST *v19; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+58h] [rbp-A8h]
  __int16 v24; // [rsp+5Ch] [rbp-A4h]
  _BYTE v25[560]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+290h] [rbp+190h] BYREF
  int *v27; // [rsp+2B0h] [rbp+1B0h]
  int v28; // [rsp+2B8h] [rbp+1B8h]
  int v29; // [rsp+2BCh] [rbp+1BCh]
  DWORD *v30; // [rsp+2C0h] [rbp+1C0h]
  int v31; // [rsp+2C8h] [rbp+1C8h]
  int v32; // [rsp+2CCh] [rbp+1CCh]
  struct _RM_ACTIVITY_HOST **v33; // [rsp+2D0h] [rbp+1D0h]
  int v34; // [rsp+2D8h] [rbp+1D8h]
  int v35; // [rsp+2DCh] [rbp+1DCh]

  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  if ( a2 > 0x31 )
  {
    v18 = -2147024809;
  }
  else
  {
    v18 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v25);
    if ( v18 >= 0 && (RmpActivityHostFindByPsmId(a1[16], (struct _RM_PSM_HOST_INFO *)v25, &v19), (v4 = v19) != 0LL) )
    {
      v21 = a2;
      v22 = 1LL;
      v23 = 101;
      v24 = 256;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v17,
        (a4 != 0) + 2,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v21,
        v19);
      LOBYTE(v5) = v23 != 101;
      v12 = 0;
    }
    else
    {
      v10 = 0LL;
      v11 = OpenProcess(0x100000u, 0, a3);
      v12 = 1;
      if ( v11 )
      {
        v10 = v11;
        if ( WaitForSingleObject(v11, 0) == 258 )
          v5 = 1;
      }
      if ( v10 )
        CloseHandle(v10);
    }
    v13 = -2147024891;
    if ( v5 )
      v13 = v12;
    v18 = v13;
    if ( v4 )
      RmpObjectRelease(v4);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v18;
    v30 = &v20;
    v33 = &v19;
    v28 = v15;
    v20 = a3;
    v31 = v15;
    LODWORD(v19) = a2;
    v34 = v15;
    TlgWrite(v14, &unk_180092C73, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)v18;
}
