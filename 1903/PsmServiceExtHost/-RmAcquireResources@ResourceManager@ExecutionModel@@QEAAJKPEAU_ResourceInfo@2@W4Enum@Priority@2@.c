/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800069CC
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180006720 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180006DFC (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18000701C (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000998C (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000A7D0 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
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
  struct _RM_SERVICE_GLOBALS **v12; // r14
  _QWORD *v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rsi
  struct _RM_ACTIVITY_HOST *v17; // r13
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  char v20; // di
  __int64 v21; // r14
  unsigned int *v22; // r15
  __int64 v23; // r9
  unsigned int v24; // r14d
  _DWORD *v25; // r8
  int v26; // r12d
  int v27; // eax
  void *v28; // rax
  int v29; // r8d
  void *v30; // rdi
  const struct _TlgProvider_t *v31; // rcx
  unsigned __int8 v32; // r9
  int v33; // r10d
  DWORD v34; // edi
  char v36; // [rsp+38h] [rbp-C8h]
  char v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceManager *v42; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  struct _RM_ACTIVITY_HOST *v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v47[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v48[560]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF
  int *v50; // [rsp+3A0h] [rbp+2A0h]
  int v51; // [rsp+3A8h] [rbp+2A8h]
  int v52; // [rsp+3ACh] [rbp+2ACh]
  int *v53; // [rsp+3B0h] [rbp+2B0h]
  int v54; // [rsp+3B8h] [rbp+2B8h]
  int v55; // [rsp+3BCh] [rbp+2BCh]
  unsigned int *v56; // [rsp+3C0h] [rbp+2C0h]
  int v57; // [rsp+3C8h] [rbp+2C8h]
  int v58; // [rsp+3CCh] [rbp+2CCh]
  unsigned int *v59; // [rsp+3D0h] [rbp+2D0h]
  int v60; // [rsp+3D8h] [rbp+2D8h]
  int v61; // [rsp+3DCh] [rbp+2DCh]
  __int64 *v62; // [rsp+3E0h] [rbp+2E0h]
  int v63; // [rsp+3E8h] [rbp+2E8h]
  int v64; // [rsp+3ECh] [rbp+2ECh]
  struct _RM_ACTIVITY_HOST **v65; // [rsp+3F0h] [rbp+2F0h]
  int v66; // [rsp+3F8h] [rbp+2F8h]
  int v67; // [rsp+3FCh] [rbp+2FCh]
  __int64 *v68; // [rsp+400h] [rbp+300h]
  int v69; // [rsp+408h] [rbp+308h]
  int v70; // [rsp+40Ch] [rbp+30Ch]
  ExecutionModel::ResourceManager **v71; // [rsp+410h] [rbp+310h]
  int v72; // [rsp+418h] [rbp+318h]
  int v73; // [rsp+41Ch] [rbp+31Ch]
  _QWORD *v74; // [rsp+420h] [rbp+320h]
  int v75; // [rsp+428h] [rbp+328h]
  int v76; // [rsp+42Ch] [rbp+32Ch]

  v12 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v14 = a12;
  v15 = a2;
  v38 = 0;
  v44 = a11;
  v43 = a12;
  v42 = g_pResourceManager;
  v40 = a4;
  v39 = a2;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v47);
  v16 = 0LL;
  v17 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  if ( !v15 || !a3 || !a12 || !a7 )
  {
    v24 = v40;
    v38 = -2147024809;
    goto LABEL_24;
  }
  v18 = 0;
  v37 = 1;
  v19 = a3;
  while ( (unsigned int)(*v19 - 22) <= 4 )
  {
    ++v18;
    v19 += 6;
    if ( v18 >= v15 )
      goto LABEL_9;
  }
  v37 = 0;
LABEL_9:
  RmpAcquireGlobalLock();
  v38 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*v12 + 5))(v12, a5, v48);
  if ( v38 >= 0 )
  {
    RmpActivityHostFindByPsmId(v12[16], (struct _RM_PSM_HOST_INFO *)v48, &v45);
    v17 = v45;
  }
  v20 = 0;
  v21 = 0LL;
  if ( v39 )
  {
    v22 = a3;
    while ( 1 )
    {
      v38 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v42, *v22, a5, 0LL);
      if ( v38 < 0 )
        break;
      v21 = (unsigned int)(v21 + 1);
      v22 += 6;
      if ( (unsigned int)v21 >= v39 )
        goto LABEL_15;
    }
    if ( (a8 & 1) != 0 )
    {
      if ( !v37
        || (LOBYTE(v23) = 1,
            v38 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v42, (unsigned int)a3[6 * v21], a5, v23),
            v38 >= 0) )
      {
        v20 = 1;
LABEL_15:
        v14 = v43;
        goto LABEL_16;
      }
    }
    v24 = v40;
  }
  else
  {
LABEL_16:
    v24 = v40;
    v25 = a3;
    v26 = (int)v42;
    v36 = v20;
    v15 = v39;
    v27 = ExecutionModel::ExternalResourceSet::CreateInstance(
            *((_QWORD *)v42 + 3),
            v39,
            v25,
            v40,
            a5,
            a6,
            a7,
            v36,
            a8,
            a9,
            a10,
            v17,
            v44,
            &v41);
    v16 = v41;
    v38 = v27;
    if ( v27 < 0 )
      goto LABEL_22;
    *v14 = v41;
    v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v30 = v28;
    if ( v28 )
    {
      *((_QWORD *)v28 + 3) = *v14;
      *((_QWORD *)v28 + 4) = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    else
    {
      v30 = 0LL;
    }
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
      v26 + 88,
      (int)v46,
      v29,
      0,
      v30);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v15 = v39;
LABEL_22:
  RmpReleaseGlobalLock();
  if ( v17 )
    RmpObjectRelease(v17);
LABEL_24:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v52 = 0;
    v55 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v70 = 0;
    v73 = 0;
    v76 = 0;
    v50 = &v38;
    v53 = v46;
    v56 = &v40;
    v59 = &v39;
    LODWORD(v44) = a5;
    v62 = &v44;
    LODWORD(v45) = a8;
    v65 = &v45;
    LODWORD(v41) = a9;
    v68 = &v41;
    LODWORD(v42) = a10;
    v71 = &v42;
    LODWORD(v43) = v32;
    v74 = &v43;
    v51 = v33;
    *(_QWORD *)v46 = v16;
    v54 = 8;
    v40 = v15;
    v57 = v33;
    v39 = v24;
    v60 = v33;
    v63 = v33;
    v66 = v33;
    v69 = v33;
    v72 = v33;
    v75 = v33;
    TlgWrite(v31, &unk_180092D0D, 0LL, 0LL, 0xBu, &pData);
  }
  v34 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v34, 0LL);
  }
  return (unsigned int)v38;
}
