/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000331C
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800021F0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003284 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180058E70 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003540 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003113C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        DWORD a3,
        char a4)
{
  struct _RM_ACTIVITY_HOST *v4; // rsi
  int v5; // r14d
  int v6; // r15d
  unsigned int v9; // edi
  struct ExecutionModel::ResourceManager *v11; // rcx
  int v12; // edi
  const struct _TlgProvider_t *v13; // rcx
  int v14; // r9d
  void *v16; // rbx
  HANDLE v17; // rax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_ACTIVITY_HOST *v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-B0h]
  __int16 v24; // [rsp+54h] [rbp-ACh]
  _BYTE v25[560]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+290h] [rbp+190h] BYREF
  int *v27; // [rsp+2B0h] [rbp+1B0h]
  int v28; // [rsp+2B8h] [rbp+1B8h]
  int v29; // [rsp+2BCh] [rbp+1BCh]
  unsigned int *v30; // [rsp+2C0h] [rbp+1C0h]
  int v31; // [rsp+2C8h] [rbp+1C8h]
  int v32; // [rsp+2CCh] [rbp+1CCh]
  struct _RM_ACTIVITY_HOST **v33; // [rsp+2D0h] [rbp+1D0h]
  int v34; // [rsp+2D8h] [rbp+1D8h]
  int v35; // [rsp+2DCh] [rbp+1DCh]

  v4 = 0LL;
  v19 = a2;
  v5 = 0;
  v20 = 0LL;
  v6 = -2147024891;
  v18 = -2147024891;
  v9 = a2;
  if ( a2 > 0x31 )
  {
    v18 = -2147024809;
  }
  else
  {
    v18 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v25);
    if ( v18 >= 0 && (RmpActivityHostFindByPsmId(a1[19], (struct _RM_PSM_HOST_INFO *)v25, &v20), (v4 = v20) != 0LL) )
    {
      v21 = v9;
      v23 = 101;
      v22 = 1LL;
      v24 = 256;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v11,
        (a4 != 0) + 2,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v21,
        v20);
      LOBYTE(v5) = v23 != 101;
      v12 = 0;
    }
    else
    {
      v16 = 0LL;
      v17 = OpenProcess(0x100000u, 0, a3);
      v12 = 1;
      if ( v17 )
      {
        v16 = v17;
        if ( WaitForSingleObject(v17, 0) == 258 )
          v5 = 1;
      }
      if ( v16 )
        CloseHandle(v16);
    }
    if ( v5 )
      v6 = v12;
    v18 = v6;
    if ( v4 )
      RmpObjectRelease(v4);
    v9 = v19;
  }
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v18;
    v30 = &v19;
    v33 = &v20;
    v28 = v14;
    v19 = a3;
    v31 = v14;
    LODWORD(v20) = v9;
    v34 = v14;
    TlgWrite(v13, &unk_180084E2F, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)v18;
}
