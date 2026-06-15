/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800248B0
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800275E4 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x180022594 (WPP_SF_dii.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x1800226F8 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180022A5C (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180024510 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800247B8 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x1800277B8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180029D8C (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002A608 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TsSessionCreate(DWORD a1, void **a2, struct TSSession **a3)
{
  struct TSSession *v6; // rdi
  unsigned int refreshed; // ebx
  CDriverListener *v8; // rax
  CDriverListener *v9; // rax
  CDriverListener *v10; // rbx
  CDriverListener **v11; // rsi
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
  HANDLE v22; // rax
  _BYTE *v23; // rax
  bool v24; // bl
  volatile signed __int32 *v25; // rdx
  HANDLE v26; // rax
  _BYTE *v27; // rax
  bool v28; // bl
  volatile signed __int32 *v29; // rdx
  HANDLE v30; // rax
  _BYTE *v31; // rax
  bool v32; // bl
  volatile signed __int32 *v33; // rdx
  HANDLE v34; // rax
  _BYTE *v35; // rax
  bool v36; // bl
  volatile signed __int32 *v37; // rdx
  HANDLE v38; // rax
  _BYTE *v39; // rax
  bool v40; // bl
  volatile signed __int32 *v41; // rdx
  HANDLE v42; // rax
  _BYTE *v43; // rax
  bool v44; // bl
  volatile signed __int32 *v45; // rdx
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
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, a1);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  TSSession::Create(a1, &v62);
  v6 = v62;
  if ( !v62 )
  {
    refreshed = 14;
    goto LABEL_88;
  }
  if ( a1 )
    goto LABEL_20;
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
LABEL_19:
    refreshed = 14;
    goto LABEL_86;
  }
LABEL_20:
  *((_DWORD *)v6 + 1) = GetTsAudioProtocol(a1);
  *((_DWORD *)v6 + 2) = ++dword_18004DD84;
  refreshed = TsSessionRefreshSessionInformation(v6);
  if ( !refreshed )
  {
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
    EnterCriticalSection(&CriticalSection);
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
    if ( v16 )
    {
      v16[2] = v6;
      *v16 = qword_18004DC78;
      v16[1] = 0LL;
      if ( qword_18004DC78 )
        *((_QWORD *)qword_18004DC78 + 1) = v16;
      else
        qword_18004DC80 = (__int64)v16;
      qword_18004DC78 = v16;
      ++dword_18004DC88;
      TsSessionConsiderForPrimaryConsoleAudioSession(v6);
      LeaveCriticalSection(&CriticalSection);
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
      if ( v18 )
      {
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
          goto LABEL_41;
        v22 = GetProcessHeap();
        v23 = HeapAlloc(v22, 0, 0x10uLL);
        if ( v23 )
        {
          *(_DWORD *)v23 = -1042284544;
          v23[4] = 1;
          *((_QWORD *)v23 + 1) = 400000LL;
        }
        else
        {
          v23 = 0LL;
        }
        v61 = v23;
        if ( !v23 )
          goto LABEL_41;
        v56 = v23;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v48,
          (__int64)L"Comm");
        v24 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v48,
                              &v56) == 0;
        v25 = v48 - 6;
        if ( _InterlockedDecrement(v48 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
        if ( v24 )
          goto LABEL_41;
        v26 = GetProcessHeap();
        v27 = HeapAlloc(v26, 0, 0x10uLL);
        if ( v27 )
        {
          *(_DWORD *)v27 = -1061158912;
          v27[4] = 0;
          *((_QWORD *)v27 + 1) = 400000LL;
        }
        else
        {
          v27 = 0LL;
        }
        v61 = v27;
        if ( !v27 )
          goto LABEL_41;
        v57 = v27;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v49,
          (__int64)L"1");
        v28 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v49,
                              &v57) == 0;
        v29 = v49 - 6;
        if ( _InterlockedDecrement(v49 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
        if ( v28 )
          goto LABEL_41;
        v30 = GetProcessHeap();
        v31 = HeapAlloc(v30, 0, 0x10uLL);
        if ( v31 )
        {
          *(_DWORD *)v31 = -1047527424;
          v31[4] = 0;
          *((_QWORD *)v31 + 1) = 400000LL;
        }
        else
        {
          v31 = 0LL;
        }
        v61 = v31;
        if ( !v31 )
          goto LABEL_41;
        v58 = v31;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v50,
          (__int64)L"2");
        v32 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v50,
                              &v58) == 0;
        v33 = v50 - 6;
        if ( _InterlockedDecrement(v50 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 8LL))(*(_QWORD *)v33);
        if ( v32 )
          goto LABEL_41;
        v34 = GetProcessHeap();
        v35 = HeapAlloc(v34, 0, 0x10uLL);
        if ( v35 )
        {
          *(_DWORD *)v35 = -1042284544;
          v35[4] = 0;
          *((_QWORD *)v35 + 1) = 400000LL;
        }
        else
        {
          v35 = 0LL;
        }
        v61 = v35;
        if ( !v35 )
          goto LABEL_41;
        v59 = v35;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v51,
          (__int64)L"3");
        v36 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v51,
                              &v59) == 0;
        v37 = v51 - 6;
        if ( _InterlockedDecrement(v51 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 8LL))(*(_QWORD *)v37);
        if ( v36 )
          goto LABEL_41;
        v38 = GetProcessHeap();
        v39 = HeapAlloc(v38, 0, 0x10uLL);
        v54 = v39;
        if ( v39 )
        {
          *(_DWORD *)v39 = -8388608;
          v39[4] = 0;
          *((_QWORD *)v39 + 1) = 400000LL;
        }
        else
        {
          v39 = 0LL;
        }
        v61 = v39;
        if ( !v39 )
          goto LABEL_41;
        v54 = v39;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v52,
          (__int64)L"4");
        v40 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v52,
                              &v54) == 0;
        v41 = v52 - 6;
        if ( _InterlockedDecrement(v52 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v41 + 8LL))(*(_QWORD *)v41);
        if ( v40 )
          goto LABEL_41;
        v42 = GetProcessHeap();
        v43 = HeapAlloc(v42, 0, 0x10uLL);
        if ( v43 )
        {
          *(_DWORD *)v43 = -1042284544;
          v43[4] = 1;
          *((_QWORD *)v43 + 1) = 400000LL;
        }
        else
        {
          v43 = 0LL;
        }
        v61 = v43;
        if ( !v43 )
          goto LABEL_41;
        v60[0] = v43;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          (void **)&v53,
          (__int64)L"5");
        v44 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                              v19,
                              &v53,
                              v60) == 0;
        v45 = v53 - 6;
        if ( _InterlockedDecrement(v53 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v45 + 8LL))(*(_QWORD *)v45);
        if ( v44 )
        {
LABEL_41:
          refreshed = 14;
          v6 = v62;
        }
        else
        {
          v61 = 0LL;
          v6 = 0LL;
          refreshed = 0;
        }
        goto LABEL_86;
      }
      goto LABEL_19;
    }
    refreshed = 14;
    LeaveCriticalSection(&CriticalSection);
  }
LABEL_86:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x160);
  }
LABEL_88:
  operator delete(v61, (const struct std::nothrow_t *)0x10);
  return refreshed;
}
