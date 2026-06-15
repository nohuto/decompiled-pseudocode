/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028090
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002AC94 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001831C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x180025F04 (WPP_SF_dii.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180026068 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180026390 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180027D48 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180027FB0 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18002AE68 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18002D2FC (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002DB98 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TsSessionCreate(DWORD a1, void **a2, struct TSSession **a3)
{
  struct TSSession *v6; // rdi
  unsigned int refreshed; // ebx
  CDriverListener *v8; // rax
  CDriverListener *v9; // rax
  CDriverListener *v10; // rbx
  CDriverListener **v11; // r14
  CDriverListener *v12; // rcx
  __int64 v13; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  HANDLE v17; // rax
  _BYTE *v18; // rax
  char *v19; // rdi
  bool v20; // bl
  volatile signed __int32 *v21; // rdx
  HANDLE v23; // rax
  _BYTE *v24; // rax
  bool v25; // bl
  volatile signed __int32 *v26; // rdx
  HANDLE v27; // rax
  _BYTE *v28; // rax
  bool v29; // bl
  volatile signed __int32 *v30; // rdx
  HANDLE v31; // rax
  _BYTE *v32; // rax
  bool v33; // bl
  volatile signed __int32 *v34; // rdx
  HANDLE v35; // rax
  _BYTE *v36; // rax
  bool v37; // bl
  volatile signed __int32 *v38; // rdx
  HANDLE v39; // rax
  _BYTE *v40; // rax
  bool v41; // bl
  volatile signed __int32 *v42; // rdx
  HANDLE v43; // rax
  _BYTE *v44; // rax
  bool v45; // bl
  volatile signed __int32 *v46; // rdx
  volatile signed __int32 *v47; // [rsp+38h] [rbp-59h] BYREF
  volatile signed __int32 *v48; // [rsp+40h] [rbp-51h] BYREF
  volatile signed __int32 *v49; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v50; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v51; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int32 *v52; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v53; // [rsp+68h] [rbp-29h] BYREF
  _BYTE *v54; // [rsp+70h] [rbp-21h] BYREF
  _BYTE *v55; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v56; // [rsp+80h] [rbp-11h] BYREF
  _BYTE *v57; // [rsp+88h] [rbp-9h] BYREF
  _BYTE *v58; // [rsp+90h] [rbp-1h] BYREF
  _BYTE *v59; // [rsp+98h] [rbp+7h] BYREF
  _QWORD v60[9]; // [rsp+A0h] [rbp+Fh] BYREF
  void *v61; // [rsp+100h] [rbp+6Fh]
  struct TSSession *v62; // [rsp+108h] [rbp+77h] BYREF
  CDriverListener *v63; // [rsp+110h] [rbp+7Fh] BYREF

  v60[1] = -2LL;
  v62 = 0LL;
  v61 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids, a1);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  TSSession::Create(a1, &v62);
  v6 = v62;
  if ( !v62 )
  {
    refreshed = 14;
    goto LABEL_44;
  }
  if ( a1 )
    goto LABEL_19;
  v8 = (CDriverListener *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v63 = v8;
  if ( v8 )
    v9 = CDriverListener::CDriverListener(v8);
  else
    v9 = 0LL;
  v10 = v9;
  v63 = v9;
  v11 = (CDriverListener **)((char *)v6 + 312);
  if ( (CDriverListener **)((char *)v6 + 312) != &v63 )
  {
    v10 = 0LL;
    v63 = 0LL;
    v12 = *v11;
    *v11 = v9;
    if ( !v12 )
      goto LABEL_18;
    (**(void (__fastcall ***)(CDriverListener *, __int64))v12)(v12, 1LL);
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(CDriverListener *, __int64))v10)(v10, 1LL);
LABEL_18:
  if ( !*v11 )
  {
LABEL_41:
    refreshed = 14;
    goto LABEL_42;
  }
LABEL_19:
  *((_DWORD *)v6 + 1) = GetTsAudioProtocol(a1);
  *((_DWORD *)v6 + 2) = ++dword_18004FE48;
  refreshed = TsSessionRefreshSessionInformation(v6);
  if ( refreshed )
    goto LABEL_42;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dii(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *((_QWORD *)v6 + 5),
      v13,
      *(_DWORD *)v6,
      *(_QWORD *)(*((_QWORD *)v6 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v6 + 5) + 200LL));
  }
  ProcessHeap = GetProcessHeap();
  v15 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v16 = v15;
  if ( v15 )
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    goto LABEL_41;
  v16[2] = v6;
  *v16 = qword_18004FCF8;
  v16[1] = 0LL;
  if ( qword_18004FCF8 )
    *((_QWORD *)qword_18004FCF8 + 1) = v16;
  else
    qword_18004FD00 = (__int64)v16;
  qword_18004FCF8 = v16;
  ++dword_18004FD08;
  TsSessionConsiderForPrimaryConsoleAudioSession(v6);
  if ( a2 )
    *a2 = v16;
  *a3 = v6;
  v17 = GetProcessHeap();
  v18 = HeapAlloc(v17, 0, 0x10uLL);
  if ( v18 )
  {
    *(_DWORD *)v18 = -1047527424;
    v18[4] = 0;
    *((_QWORD *)v18 + 1) = 400000LL;
  }
  else
  {
    v18 = 0LL;
  }
  v61 = v18;
  if ( !v18 )
    goto LABEL_41;
  v55 = v18;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v47,
    (__int64)L"SR");
  v19 = (char *)v6 + 280;
  v20 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v47,
                        &v55) == 0;
  v21 = v47 - 6;
  if ( _InterlockedDecrement(v47 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21);
  if ( v20 )
    goto LABEL_40;
  v23 = GetProcessHeap();
  v24 = HeapAlloc(v23, 0, 0x10uLL);
  if ( v24 )
  {
    *(_DWORD *)v24 = -1042284544;
    v24[4] = 1;
    *((_QWORD *)v24 + 1) = 400000LL;
  }
  else
  {
    v24 = 0LL;
  }
  v61 = v24;
  if ( !v24 )
    goto LABEL_40;
  v56 = v24;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v48,
    (__int64)L"Comm");
  v25 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v48,
                        &v56) == 0;
  v26 = v48 - 6;
  if ( _InterlockedDecrement(v48 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26);
  if ( v25 )
    goto LABEL_40;
  v27 = GetProcessHeap();
  v28 = HeapAlloc(v27, 0, 0x10uLL);
  if ( v28 )
  {
    *(_DWORD *)v28 = -1061158912;
    v28[4] = 0;
    *((_QWORD *)v28 + 1) = 400000LL;
  }
  else
  {
    v28 = 0LL;
  }
  v61 = v28;
  if ( !v28 )
    goto LABEL_40;
  v57 = v28;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v49,
    (__int64)L"1");
  v29 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v49,
                        &v57) == 0;
  v30 = v49 - 6;
  if ( _InterlockedDecrement(v49 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 8LL))(*(_QWORD *)v30);
  if ( v29 )
    goto LABEL_40;
  v31 = GetProcessHeap();
  v32 = HeapAlloc(v31, 0, 0x10uLL);
  if ( v32 )
  {
    *(_DWORD *)v32 = -1047527424;
    v32[4] = 0;
    *((_QWORD *)v32 + 1) = 400000LL;
  }
  else
  {
    v32 = 0LL;
  }
  v61 = v32;
  if ( !v32 )
    goto LABEL_40;
  v58 = v32;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v50,
    (__int64)L"2");
  v33 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v50,
                        &v58) == 0;
  v34 = v50 - 6;
  if ( _InterlockedDecrement(v50 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
  if ( v33 )
    goto LABEL_40;
  v35 = GetProcessHeap();
  v36 = HeapAlloc(v35, 0, 0x10uLL);
  if ( v36 )
  {
    *(_DWORD *)v36 = -1042284544;
    v36[4] = 0;
    *((_QWORD *)v36 + 1) = 400000LL;
  }
  else
  {
    v36 = 0LL;
  }
  v61 = v36;
  if ( !v36 )
    goto LABEL_40;
  v59 = v36;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v51,
    (__int64)L"3");
  v37 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v51,
                        &v59) == 0;
  v38 = v51 - 6;
  if ( _InterlockedDecrement(v51 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 8LL))(*(_QWORD *)v38);
  if ( v37 )
    goto LABEL_40;
  v39 = GetProcessHeap();
  v40 = HeapAlloc(v39, 0, 0x10uLL);
  v54 = v40;
  if ( v40 )
  {
    *(_DWORD *)v40 = -8388608;
    v40[4] = 0;
    *((_QWORD *)v40 + 1) = 400000LL;
  }
  else
  {
    v40 = 0LL;
  }
  v61 = v40;
  if ( !v40 )
    goto LABEL_40;
  v54 = v40;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v52,
    (__int64)L"4");
  v41 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v52,
                        &v54) == 0;
  v42 = v52 - 6;
  if ( _InterlockedDecrement(v52 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v42 + 8LL))(*(_QWORD *)v42);
  if ( v41 )
    goto LABEL_40;
  v43 = GetProcessHeap();
  v44 = HeapAlloc(v43, 0, 0x10uLL);
  if ( v44 )
  {
    *(_DWORD *)v44 = -1042284544;
    v44[4] = 1;
    *((_QWORD *)v44 + 1) = 400000LL;
  }
  else
  {
    v44 = 0LL;
  }
  v61 = v44;
  if ( !v44 )
    goto LABEL_40;
  v60[0] = v44;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v53,
    (__int64)L"5");
  v45 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                        v19,
                        &v53,
                        v60) == 0;
  v46 = v53 - 6;
  if ( _InterlockedDecrement(v53 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v46 + 8LL))(*(_QWORD *)v46);
  if ( v45 )
  {
LABEL_40:
    v6 = v62;
    goto LABEL_41;
  }
  v61 = 0LL;
  v6 = 0LL;
  refreshed = 0;
LABEL_42:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x158);
  }
LABEL_44:
  operator delete(v61, (const struct std::nothrow_t *)0x10);
  return refreshed;
}
