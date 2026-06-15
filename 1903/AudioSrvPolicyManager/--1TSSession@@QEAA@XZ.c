/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x180022A5C
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180005220 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x1800226F8 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800248B0 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025268 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180025500 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180025B0C (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x1800274E0 (TS_AudioProtocolNotifyRundown.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180027788 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CE68 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180014EE4 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800345A0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x18003514E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180035A9F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TSSession::~TSSession(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // rdi
  volatile signed __int32 *v19; // rdx
  __int64 v20; // rcx
  size_t v21; // r8
  __int64 v22; // r9
  const void *v23; // rdx
  size_t v24; // r8
  __int64 v25; // r9
  const void *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  void *v31; // rcx
  void *v32; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall ***v34)(_QWORD, __int64); // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx

  v2 = (void *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 31);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_DWORD *)this + 57) = 1;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    WTSFreeMemory(v4);
  while ( *((int *)this + 42) > 0 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)**((_QWORD **)this + 20);
    v6 = (volatile signed __int32 *)(**((_QWORD **)this + 19) - 24LL);
    if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
    v7 = *((int *)this + 42);
    if ( (_DWORD)v7 != 1 )
    {
      v8 = 8LL * ((int)v7 - 1);
      v9 = *((_QWORD *)this + 19);
      v10 = 8 * v7;
      if ( v8 )
      {
        if ( !v9 || v9 == -8 )
        {
          *(_DWORD *)_o__errno(v7, v10) = 22;
LABEL_71:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v10 < v8 )
        {
          *(_DWORD *)_o__errno(v7, v10) = 34;
          goto LABEL_71;
        }
        memmove_0(*((void **)this + 19), (const void *)(v9 + 8), v8);
        v7 = *((unsigned int *)this + 42);
      }
      v11 = 8LL * ((int)v7 - 1);
      v12 = *((_QWORD *)this + 20);
      v13 = 8LL * (int)v7;
      if ( v11 )
      {
        if ( !v12 || v12 == -8 )
        {
          *(_DWORD *)_o__errno(v7, v13) = 22;
LABEL_68:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v13 < v11 )
        {
          *(_DWORD *)_o__errno(v7, v13) = 34;
          goto LABEL_68;
        }
        memmove_0(*((void **)this + 20), (const void *)(v12 + 8), v11);
        LODWORD(v7) = *((_DWORD *)this + 42);
      }
    }
    v14 = _o__recalloc(*((_QWORD *)this + 19), (int)v7 - 1, 8LL);
    v15 = *((_DWORD *)this + 42);
    if ( v14 || v15 == 1 )
      *((_QWORD *)this + 19) = v14;
    v16 = _o__recalloc(*((_QWORD *)this + 20), v15 - 1, 8LL);
    v17 = *((_DWORD *)this + 42);
    if ( v16 || v17 == 1 )
      *((_QWORD *)this + 20) = v16;
    *((_DWORD *)this + 42) = v17 - 1;
    if ( v5 )
    {
      `eh vector destructor iterator'(
        &v5[9].OwningThread,
        0x10uLL,
        0x15uLL,
        std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      `eh vector destructor iterator'(
        &v5[1],
        0x10uLL,
        0x15uLL,
        std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      DeleteCriticalSection(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x2D0);
    }
  }
  while ( *((int *)this + 74) > 0 )
  {
    v18 = (void *)**((_QWORD **)this + 36);
    v19 = (volatile signed __int32 *)(**((_QWORD **)this + 35) - 24LL);
    if ( _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19);
    v20 = *((int *)this + 74);
    if ( (_DWORD)v20 != 1 )
    {
      v21 = 8LL * ((int)v20 - 1);
      v22 = *((_QWORD *)this + 35);
      v23 = (const void *)(v22 + 8);
      if ( v21 )
      {
        if ( !v22 || v22 == -8 )
        {
          *(_DWORD *)_o__errno(v20, v23) = 22;
LABEL_65:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( 8 * v20 < v21 )
        {
          *(_DWORD *)_o__errno(v20, v23) = 34;
          goto LABEL_65;
        }
        memmove_0(*((void **)this + 35), v23, v21);
        v20 = *((unsigned int *)this + 74);
      }
      v24 = 8LL * ((int)v20 - 1);
      v25 = *((_QWORD *)this + 36);
      v26 = (const void *)(v25 + 8);
      if ( v24 )
      {
        if ( !v25 || v25 == -8 )
        {
          *(_DWORD *)_o__errno(v20, v26) = 22;
LABEL_74:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( 8LL * (int)v20 < v24 )
        {
          *(_DWORD *)_o__errno(v20, v26) = 34;
          goto LABEL_74;
        }
        memmove_0(*((void **)this + 36), v26, v24);
        LODWORD(v20) = *((_DWORD *)this + 74);
      }
    }
    v27 = _o__recalloc(*((_QWORD *)this + 35), (int)v20 - 1, 8LL);
    v28 = *((_DWORD *)this + 74);
    if ( v27 || v28 == 1 )
      *((_QWORD *)this + 35) = v27;
    v29 = _o__recalloc(*((_QWORD *)this + 36), v28 - 1, 8LL);
    v30 = *((_DWORD *)this + 74);
    if ( v29 || v30 == 1 )
      *((_QWORD *)this + 36) = v29;
    *((_DWORD *)this + 74) = v30 - 1;
    operator delete(v18, (const struct std::nothrow_t *)0x10);
  }
  v31 = (void *)*((_QWORD *)this + 42);
  if ( v31 )
    CoTaskMemFree(v31);
  v32 = (void *)*((_QWORD *)this + 41);
  if ( v32 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v32);
  }
  v34 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 39);
  if ( v34 )
    (**v34)(v34, 1LL);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 280);
  v35 = *((_QWORD *)this + 34);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = *((_QWORD *)this + 33);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v37 = *((_QWORD *)this + 32);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
