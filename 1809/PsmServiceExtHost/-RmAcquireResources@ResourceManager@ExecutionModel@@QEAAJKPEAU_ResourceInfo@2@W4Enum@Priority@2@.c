/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800021F0
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180001F40 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x180002614 (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800028D0 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000331C (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003113C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  struct _RM_SERVICE_GLOBALS **v12; // rbx
  unsigned int v13; // edi
  __int64 v16; // r12
  struct _RM_ACTIVITY_HOST *v17; // r15
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  char v20; // bl
  __int64 v21; // rdi
  unsigned int *v22; // rsi
  __int64 v23; // r9
  _QWORD *v24; // rsi
  int v25; // ebx
  int v26; // eax
  const struct _TlgProvider_t *v27; // rcx
  unsigned __int8 v28; // r9
  DWORD v29; // ebx
  char v31; // [rsp+38h] [rbp-C8h]
  char v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceManager *v36; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  struct _RM_ACTIVITY_HOST *v39; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp-58h] BYREF
  int v41[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v42[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v43[560]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF
  int *v45; // [rsp+3A0h] [rbp+2A0h]
  __int64 v46; // [rsp+3A8h] [rbp+2A8h]
  int *v47; // [rsp+3B0h] [rbp+2B0h]
  __int64 v48; // [rsp+3B8h] [rbp+2B8h]
  unsigned int *v49; // [rsp+3C0h] [rbp+2C0h]
  __int64 v50; // [rsp+3C8h] [rbp+2C8h]
  unsigned int *v51; // [rsp+3D0h] [rbp+2D0h]
  __int64 v52; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v53; // [rsp+3E0h] [rbp+2E0h]
  __int64 v54; // [rsp+3E8h] [rbp+2E8h]
  struct _RM_ACTIVITY_HOST **v55; // [rsp+3F0h] [rbp+2F0h]
  __int64 v56; // [rsp+3F8h] [rbp+2F8h]
  ExecutionModel::ResourceManager **v57; // [rsp+400h] [rbp+300h]
  __int64 v58; // [rsp+408h] [rbp+308h]
  _QWORD *v59; // [rsp+410h] [rbp+310h]
  __int64 v60; // [rsp+418h] [rbp+318h]
  __int64 *v61; // [rsp+420h] [rbp+320h]
  __int64 v62; // [rsp+428h] [rbp+328h]

  v12 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v13 = a4;
  v38 = a11;
  v37 = a12;
  v36 = g_pResourceManager;
  v34 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v42);
  v35 = 0LL;
  v16 = 0LL;
  v39 = 0LL;
  v17 = 0LL;
  if ( a2 < 0x32 && a2 && a3 && a12 && a7 )
  {
    v32 = 1;
    v18 = 0;
    v19 = a3;
    while ( (unsigned int)(*v19 - 22) <= 4 )
    {
      ++v18;
      v19 += 6;
      if ( v18 >= a2 )
        goto LABEL_11;
    }
    v32 = 0;
LABEL_11:
    RmpAcquireGlobalLock();
    v33 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*v12 + 5))(v12, a5, v43);
    if ( v33 >= 0 )
    {
      RmpActivityHostFindByPsmId(v12[19], (struct _RM_PSM_HOST_INFO *)v43, &v39);
      v17 = v39;
    }
    v20 = 0;
    v21 = 0LL;
    v22 = a3;
    while ( 1 )
    {
      v33 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v36, *v22, a5, 0LL);
      if ( v33 < 0 )
        break;
      v21 = (unsigned int)(v21 + 1);
      v22 += 6;
      if ( (unsigned int)v21 >= a2 )
        goto LABEL_21;
    }
    if ( (a8 & 1) == 0
      || v32
      && (LOBYTE(v23) = 1,
          v33 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v36, (unsigned int)a3[6 * v21], a5, v23),
          v33 < 0) )
    {
      v13 = v34;
      goto LABEL_24;
    }
    v20 = 1;
LABEL_21:
    v24 = v37;
    v13 = v34;
    v31 = v20;
    v25 = (int)v36;
    v26 = ExecutionModel::ExternalResourceSet::CreateInstance(
            *((_QWORD *)v36 + 5),
            a2,
            a3,
            v34,
            a5,
            a6,
            a7,
            v31,
            a8,
            a9,
            a10,
            v17,
            v38,
            &v35);
    v16 = v35;
    v33 = v26;
    if ( v26 >= 0 )
    {
      *v24 = v35;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
        v25 + 112,
        (int)v41);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v33 = 0;
    }
LABEL_24:
    RmpReleaseGlobalLock();
    if ( v17 )
      RmpObjectRelease(v17);
  }
  else
  {
    v33 = -2147024809;
  }
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v46 = 4LL;
    v45 = &v33;
    v47 = v41;
    v49 = &v34;
    v51 = &v40;
    LODWORD(v38) = a5;
    v53 = &v38;
    LODWORD(v39) = a8;
    v55 = &v39;
    LODWORD(v36) = a9;
    v57 = &v36;
    LODWORD(v37) = a10;
    v59 = &v37;
    LODWORD(v35) = v28;
    v61 = &v35;
    *(_QWORD *)v41 = v16;
    v48 = 8LL;
    v34 = a2;
    v50 = 4LL;
    v40 = v13;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    TlgWrite(v27, &unk_180085015, 0LL, 0LL, 0xBu, &pData);
  }
  v29 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v29, 0LL);
  }
  return (unsigned int)v33;
}
