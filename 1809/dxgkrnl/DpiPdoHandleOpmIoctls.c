/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C027196C
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C002FFF8 (McTemplateK0pqqqq.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C004A5B4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     McTemplateK0ptpjq @ 0x1C004AB34 (McTemplateK0ptpjq.c)
 *     McTemplateK0ptpjqq @ 0x1C004ABE4 (McTemplateK0ptpjqq.c)
 *     McTemplateK0ptpq @ 0x1C004ACA4 (McTemplateK0ptpq.c)
 *     McTemplateK0ptpqq @ 0x1C004AD3C (McTemplateK0ptpqq.c)
 *     McTemplateK0ptpqqq @ 0x1C004ADE4 (McTemplateK0ptpqqq.c)
 *     McTemplateK0ptqppq @ 0x1C004AE9C (McTemplateK0ptqppq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C0141A68 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01C7C30 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkOpmCreateHandle @ 0x1C01C7E40 (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C01C81BC (DxgkOpmTranslateAndDestroyHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C01C82EC (DxgkOpmTranslateHandle.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01C8474 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C0272A50 (DpiPdoVerifyOpmParameters.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctls(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // r12d
  void **v9; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r15d
  int v14; // eax
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  int v21; // r15d
  int v22; // r15d
  void *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v27; // r15
  int v28; // eax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 v30; // rax
  void *v31; // r15
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  const GUID *v35; // r8
  _QWORD *v36; // r13
  int v37; // eax
  __int64 (__fastcall *v38)(__int64, void *, _QWORD *, _QWORD, void **); // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  void *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  _QWORD *v47; // r13
  int v48; // eax
  __int64 (__fastcall *v49)(__int64, void *, _QWORD *, void **); // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  void *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  const GUID *v55; // r8
  _QWORD *v56; // r15
  __int64 (__fastcall *v57)(__int64, void *, _QWORD *, void **); // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  const EVENT_DESCRIPTOR *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // r13
  int v64; // eax
  void *v65; // r15
  __int64 v66; // rdx
  __int64 v67; // rcx
  const GUID *v68; // r8
  _QWORD *v69; // r15
  int v70; // eax
  _QWORD *v71; // rax
  void **v72; // r15
  const GUID *v73; // r8
  unsigned int v74; // r13d
  _QWORD *v75; // rax
  unsigned int v76; // r14d
  unsigned int v77; // r15d
  __int64 v78; // rdx
  __int64 v79; // rcx
  const GUID *v80; // r8
  const EVENT_DESCRIPTOR *v81; // rdx
  unsigned int v82; // r13d
  __int64 v83; // rax
  __int64 v84; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void **v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+28h] [rbp-D8h]
  int v89; // [rsp+30h] [rbp-D0h]
  __int64 v90; // [rsp+38h] [rbp-C8h]
  int v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  unsigned int v93; // [rsp+50h] [rbp-B0h]
  int v94; // [rsp+54h] [rbp-ACh]
  unsigned int v95; // [rsp+54h] [rbp-ACh]
  unsigned int v96; // [rsp+54h] [rbp-ACh]
  unsigned int v97; // [rsp+54h] [rbp-ACh]
  unsigned int v98; // [rsp+58h] [rbp-A8h]
  unsigned int v99; // [rsp+58h] [rbp-A8h]
  void **v100; // [rsp+60h] [rbp-A0h]
  void **v101; // [rsp+60h] [rbp-A0h]
  _QWORD **v102; // [rsp+68h] [rbp-98h]
  void *v103; // [rsp+70h] [rbp-90h] BYREF
  int v104; // [rsp+78h] [rbp-88h]
  void *v105; // [rsp+80h] [rbp-80h] BYREF
  __int64 v106; // [rsp+88h] [rbp-78h]
  void *v107; // [rsp+90h] [rbp-70h] BYREF
  void *v108; // [rsp+98h] [rbp-68h] BYREF
  void *v109; // [rsp+A0h] [rbp-60h] BYREF
  void *v110; // [rsp+A8h] [rbp-58h] BYREF
  void *v111; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-48h]
  struct _FDO_CONTEXT *v113; // [rsp+C0h] [rbp-40h]
  __int128 v114; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v115; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v116; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v106 = a2;
  LODWORD(v5) = -1073741637;
  v104 = 0;
  v6 = 0LL;
  v94 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  v8 = 0;
  v9 = *(void ***)(a2 + 112);
  v112 = v3;
  v100 = v9;
  RenderAdapterForSession = *(_QWORD *)(v7 + 64);
  v11 = *(_QWORD *)(a2 + 184);
  v113 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(_DWORD *)(v11 + 24);
  v102 = *(_QWORD ***)(v11 + 32);
  v98 = *(_DWORD *)(v11 + 8);
  if ( *(_BYTE *)(RenderAdapterForSession + 1151) )
  {
    v14 = *(_DWORD *)(RenderAdapterForSession + 1156);
    if ( v14 == 2 )
    {
      v3 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_166:
        _InterlockedExchange64(&qword_1C008E788, 0LL);
        KeReleaseMutex(Mutex, 0);
        goto LABEL_167;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(RenderAdapterForSession + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
      v8 = 1;
      if ( v13 == 2303115 )
      {
        v104 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C008E788, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v12 = v98;
      v4 = v106;
    }
    else
    {
      if ( v14 != 1 )
      {
        v30 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v30 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v30);
        goto LABEL_167;
      }
      v94 = 0;
    }
  }
  if ( !*(_QWORD *)(RenderAdapterForSession + 2984) )
    goto LABEL_162;
  v15 = v13 - 2303107;
  if ( !v15 )
  {
    v93 = 4;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    v82 = *(_DWORD *)v102;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 2984))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v82,
           v100);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_157;
    v81 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificateSize;
    v91 = v5;
    v89 = *(_DWORD *)v100;
    v88 = v82;
LABEL_156:
    LODWORD(Timeout) = v8;
    McTemplateK0pqqqq(v79, v81, v80, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v88, v89, v91);
LABEL_157:
    v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v79, v78);
    v51[3] = v5;
    goto LABEL_158;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    v93 = v12;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, (unsigned int)v12);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    v77 = *(_DWORD *)v102;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2992))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v77,
           v98,
           v100);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_157;
    v91 = v5;
    v81 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificate;
    v89 = v98;
    v88 = v77;
    goto LABEL_156;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    v105 = 0LL;
    v93 = 8;
    v72 = 0LL;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
    if ( (int)v5 < 0 )
    {
      v76 = -1;
    }
    else
    {
      v74 = *(_DWORD *)v102;
      if ( v94 && v74 == 2 )
      {
        LODWORD(v5) = -1073741198;
        v75 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v44);
        v75[3] = -1073741198LL;
        v75[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v75[5] = v8;
        v75[6] = 0LL;
        WdLogEvent5_WdEvent(v75);
        goto LABEL_161;
      }
      v72 = v100;
      if ( v8 )
      {
        v76 = *(_DWORD *)(v112 + 504);
        LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                        (struct _FDO_CONTEXT *)RenderAdapterForSession,
                        v113,
                        v74,
                        v76,
                        v100,
                        &v105);
      }
      else
      {
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
        v97 = *(_DWORD *)(v3 + 504);
        LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 3000))(
                        *(_QWORD *)(RenderAdapterForSession + 48),
                        v97,
                        v74,
                        &v105);
        if ( (int)v5 >= 0 )
        {
          LODWORD(v5) = DxgkOpmCreateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), v105, v100);
          if ( (int)v5 < 0 )
          {
            (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 3048))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v105);
            if ( (_DWORD)v5 == -1073741198 )
              LODWORD(v5) = -1073741637;
          }
        }
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        v76 = v97;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v87) = v76;
      LODWORD(Timeout) = v8;
      McTemplateK0ptqppq(v45, v44, v73, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v87, v105, *v72, v5);
    }
LABEL_64:
    v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v44);
    v51[3] = (int)v5;
LABEL_158:
    v51[4] = *(_QWORD *)(RenderAdapterForSession + 48);
    v51[5] = v8;
    v51[6] = 0LL;
    goto LABEL_159;
  }
  v18 = v17 - 4;
  if ( v18 )
  {
    v19 = v18 - 4;
    if ( !v19 )
    {
      v110 = 0LL;
      v23 = 0LL;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 0LL);
      if ( (int)v5 >= 0 )
      {
        v63 = v102[1];
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
        v64 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), *v102, &v110);
        v23 = v110;
        LODWORD(v5) = v64;
        if ( v64 >= 0 )
          LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD *))(RenderAdapterForSession + 3016))(
                          *(_QWORD *)(RenderAdapterForSession + 48),
                          v110,
                          v63);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
        if ( v3 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v29 = (const EVENT_DESCRIPTOR *)&EventOPMSetSigningKeyAndSequenceNumbers;
        goto LABEL_108;
      }
LABEL_109:
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
      v42[3] = (int)v5;
      v42[4] = *(_QWORD *)(RenderAdapterForSession + 48);
      v42[5] = v8;
      v42[6] = 0LL;
LABEL_110:
      WdLogEvent5_WdEvent(v42);
      v6 = 0LL;
      goto LABEL_160;
    }
    v20 = v19 - 4;
    if ( v20 )
    {
      v21 = v20 - 4;
      if ( v21 )
      {
        v22 = v21 - 4;
        if ( v22 )
        {
          if ( v22 == 4 )
          {
            v107 = 0LL;
            v23 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
            if ( (int)v5 < 0 )
              goto LABEL_29;
            v27 = *v102;
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 >= 0 )
            {
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
              v28 = DxgkOpmTranslateAndDestroyHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), v27, &v107);
              v23 = v107;
              LODWORD(v5) = v28;
              if ( v28 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 3048))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v107);
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
LABEL_29:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v29 = (const EVENT_DESCRIPTOR *)&EventOPMDestroyProtectedOutput;
LABEL_108:
                LODWORD(Timeout) = v8;
                McTemplateK0ptpq(v25, v29, v26, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v23, v5);
                goto LABEL_109;
              }
              goto LABEL_109;
            }
          }
LABEL_161:
          v83 = WdLogNewEntry5_WdWarning(v9, v12, a3);
          *(_QWORD *)(v83 + 24) = (int)v5;
          WdLogEvent5_WdWarning(v83);
          v6 = 0LL;
          goto LABEL_162;
        }
        v108 = 0LL;
        v99 = 0;
        v114 = 0uLL;
        v31 = 0LL;
        v32 = -1;
        LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
        if ( (int)v5 >= 0 )
        {
          v36 = v102[1];
          v99 = *((_DWORD *)v102 + 4);
          v101 = (void **)v102[3];
          LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          if ( (int)v5 < 0 )
            goto LABEL_161;
          v95 = *((_DWORD *)v36 + 4);
          DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
          if ( v3 )
            KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
          v37 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), *v102, &v108);
          v31 = v108;
          LODWORD(v5) = v37;
          if ( v37 >= 0 )
          {
            v38 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, _QWORD, void **))(RenderAdapterForSession + 3040);
            v39 = *(_QWORD *)(RenderAdapterForSession + 48);
            v114 = *((_OWORD *)v36 + 1);
            LODWORD(v5) = v38(v39, v108, v36, v99, v101);
          }
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
          if ( v3 )
            KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          v40 = v36[2] - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
          if ( !v40 )
            v40 = v36[3] - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
          if ( !v40 && *((_DWORD *)v36 + 9) >= 0x10u )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              McTemplateK0ptpqqq(
                v34,
                &EventOPMSetProtectionLevel,
                v35,
                *(_QWORD *)(RenderAdapterForSession + 48),
                Timeout,
                v31,
                *((_DWORD *)v36 + 10),
                *((_DWORD *)v36 + 11),
                v5);
            }
            v41 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33);
            v41[3] = (int)v5;
            v41[4] = *(_QWORD *)(RenderAdapterForSession + 48);
            v41[5] = v8;
            v41[6] = *((unsigned int *)v36 + 10);
            WdLogEvent5_WdEvent(v41);
          }
          v32 = v95;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v92) = v5;
          LODWORD(v90) = v99;
          LODWORD(Timeout) = v8;
          McTemplateK0ptpjqq(v34, v33, v35, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v31, &v114, v90, v92);
        }
        v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33);
        v42[3] = (int)v5;
        v42[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v42[5] = v8;
        v42[6] = v32;
        goto LABEL_110;
      }
      v109 = 0LL;
      v115 = 0uLL;
      v43 = 0LL;
      v93 = 4096;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
      if ( (int)v5 >= 0 )
      {
        v47 = v102[1];
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 < 0 )
          goto LABEL_161;
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        if ( v3 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
        v48 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), *v102, &v109);
        v43 = v109;
        LODWORD(v5) = v48;
        if ( v48 >= 0 )
        {
          v49 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, void **))(RenderAdapterForSession + 3032);
          v50 = *(_QWORD *)(RenderAdapterForSession + 48);
          v115 = *((_OWORD *)v47 + 1);
          LODWORD(v5) = v49(v50, v109, v47, v100);
        }
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
        if ( v3 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = v8;
        McTemplateK0ptpjq(v45, v44, v46, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v43, &v115, v5);
      }
      goto LABEL_64;
    }
    v96 = -1;
    v103 = 0LL;
    v116 = 0uLL;
    v52 = 0LL;
    v93 = 4096;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
    if ( (int)v5 >= 0 )
    {
      v56 = v102[1];
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_161;
      v96 = *((_DWORD *)v56 + 8);
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
      LODWORD(v5) = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), *v102, &v103);
      if ( (int)v5 >= 0 )
      {
        v57 = *(__int64 (__fastcall **)(__int64, void *, _QWORD *, void **))(RenderAdapterForSession + 3024);
        v58 = *(_QWORD *)(RenderAdapterForSession + 48);
        v116 = *((_OWORD *)v56 + 2);
        LODWORD(v5) = v57(v58, v103, v56, v100);
      }
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      v59 = v56[4] - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
      if ( !v59 )
        v59 = v56[5] - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
      v54 = (__int64)v100;
      if ( !v59 && *((_DWORD *)v100 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_96:
          v51 = (_QWORD *)WdLogNewEntry5_WdEvent(v54, v53);
          v51[3] = (int)v5;
          v51[4] = *(_QWORD *)(RenderAdapterForSession + 48);
          v51[5] = v8;
          v51[6] = v96;
LABEL_159:
          WdLogEvent5_WdEvent(v51);
          v6 = v93;
          goto LABEL_160;
        }
        v60 = (const EVENT_DESCRIPTOR *)&EventOPMGetConnectorType;
LABEL_79:
        LODWORD(Timeout) = v8;
        McTemplateK0ptpqq(
          (__int64)v100,
          v60,
          v55,
          *(_QWORD *)(RenderAdapterForSession + 48),
          Timeout,
          v103,
          *((_DWORD *)v100 + 10),
          v5);
        goto LABEL_96;
      }
      v61 = v56[4] - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
      if ( !v61 )
        v61 = v56[5] - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
      if ( !v61 && *((_DWORD *)v100 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_96;
        v60 = (const EVENT_DESCRIPTOR *)&EventOPMGetSupportedProtectionTypes;
        goto LABEL_79;
      }
      v62 = v56[4] - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
      if ( !v62 )
        v62 = v56[5] - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
      if ( !v62 && *((_DWORD *)v56 + 13) >= 4u && *((_DWORD *)v100 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(Timeout) = v8;
          McTemplateK0ptpqqq(
            (__int64)v100,
            &EventOPMGetActualProtectionLevel,
            v55,
            *(_QWORD *)(RenderAdapterForSession + 48),
            Timeout,
            v103,
            *((_DWORD *)v56 + 14),
            *((_DWORD *)v100 + 10),
            v5);
        }
        goto LABEL_96;
      }
      v52 = v103;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = v8;
      McTemplateK0ptpjq(v54, v53, v55, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v52, &v116, v5);
    }
    goto LABEL_96;
  }
  v111 = 0LL;
  v6 = 16LL;
  v65 = 0LL;
  LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
  if ( (int)v5 >= 0 )
  {
    v69 = *v102;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_161;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3792), 1);
    v70 = DxgkOpmTranslateHandle(*(DXGADAPTER ****)(RenderAdapterForSession + 3792), v69, &v111);
    v65 = v111;
    LODWORD(v5) = v70;
    if ( v70 >= 0 )
      LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 3008))(
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      v111,
                      v100);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(RenderAdapterForSession + 3792));
    if ( v3 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3792));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Timeout) = v8;
    McTemplateK0ptpq(v67, &EventOPMGetRandomNumber, v68, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v65, v5);
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v67, v66);
  v71[3] = (int)v5;
  v71[4] = *(_QWORD *)(RenderAdapterForSession + 48);
  v71[5] = v8;
  v71[6] = 0LL;
  WdLogEvent5_WdEvent(v71);
LABEL_160:
  if ( (int)v5 < 0 )
    goto LABEL_161;
LABEL_162:
  if ( v8 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(RenderAdapterForSession + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v104 )
      goto LABEL_166;
  }
LABEL_167:
  v84 = v106;
  *(_DWORD *)(v106 + 48) = v5;
  *(_QWORD *)(v84 + 56) = v6;
  return (unsigned int)v5;
}
