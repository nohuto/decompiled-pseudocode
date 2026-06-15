/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x180026390
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180008AB0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180026068 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028090 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180028978 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028BF8 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800291E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002ABD0 (TS_AudioProtocolNotifyRundown.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18002AE38 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180010108 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180018084 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180036BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003807B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
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
  const void *v10; // rdx
  size_t v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rdi
  volatile signed __int32 *v18; // rdx
  size_t v19; // r8
  __int64 v20; // r9
  size_t v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  void *v27; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx

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
      v10 = (const void *)(8 * v7);
      if ( v8 )
      {
        if ( !v9 || v9 == -8 )
        {
LABEL_62:
          *(_DWORD *)_o__errno(v7, v10) = 22;
LABEL_63:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( (unsigned __int64)v10 < v8 )
          goto LABEL_61;
        memmove_0(*((void **)this + 19), (const void *)(v9 + 8), v8);
        v7 = *((unsigned int *)this + 42);
      }
      v11 = 8LL * ((int)v7 - 1);
      v12 = *((_QWORD *)this + 20);
      v10 = (const void *)(8LL * (int)v7);
      if ( v11 )
      {
        if ( !v12 || v12 == -8 )
          goto LABEL_62;
        if ( (unsigned __int64)v10 < v11 )
        {
LABEL_61:
          *(_DWORD *)_o__errno(v7, v10) = 34;
          goto LABEL_63;
        }
        memmove_0(*((void **)this + 20), (const void *)(v12 + 8), v11);
        LODWORD(v7) = *((_DWORD *)this + 42);
      }
    }
    v13 = _o__recalloc(*((_QWORD *)this + 19), (int)v7 - 1, 8LL);
    v14 = *((_DWORD *)this + 42);
    if ( v13 || v14 == 1 )
      *((_QWORD *)this + 19) = v13;
    v15 = _o__recalloc(*((_QWORD *)this + 20), v14 - 1, 8LL);
    v16 = *((_DWORD *)this + 42);
    if ( v15 || v16 == 1 )
      *((_QWORD *)this + 20) = v15;
    *((_DWORD *)this + 42) = v16 - 1;
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
    v17 = (void *)**((_QWORD **)this + 36);
    v18 = (volatile signed __int32 *)(**((_QWORD **)this + 35) - 24LL);
    if ( _InterlockedExchangeAdd(v18 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
    v7 = *((int *)this + 74);
    if ( (_DWORD)v7 != 1 )
    {
      v19 = 8LL * ((int)v7 - 1);
      v20 = *((_QWORD *)this + 35);
      v10 = (const void *)(v20 + 8);
      if ( v19 )
      {
        if ( !v20 || v20 == -8 )
          goto LABEL_62;
        if ( 8 * v7 < v19 )
          goto LABEL_61;
        memmove_0(*((void **)this + 35), v10, v19);
        v7 = *((unsigned int *)this + 74);
      }
      v21 = 8LL * ((int)v7 - 1);
      v22 = *((_QWORD *)this + 36);
      v10 = (const void *)(v22 + 8);
      if ( v21 )
      {
        if ( !v22 || v22 == -8 )
          goto LABEL_62;
        if ( 8LL * (int)v7 < v21 )
          goto LABEL_61;
        memmove_0(*((void **)this + 36), v10, v21);
        LODWORD(v7) = *((_DWORD *)this + 74);
      }
    }
    v23 = _o__recalloc(*((_QWORD *)this + 35), (int)v7 - 1, 8LL);
    v24 = *((_DWORD *)this + 74);
    if ( v23 || v24 == 1 )
      *((_QWORD *)this + 35) = v23;
    v25 = _o__recalloc(*((_QWORD *)this + 36), v24 - 1, 8LL);
    v26 = *((_DWORD *)this + 74);
    if ( v25 || v26 == 1 )
      *((_QWORD *)this + 36) = v25;
    *((_DWORD *)this + 74) = v26 - 1;
    operator delete(v17, (const struct std::nothrow_t *)0x10);
  }
  v27 = (void *)*((_QWORD *)this + 41);
  if ( v27 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v27);
  }
  v29 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 39);
  if ( v29 )
    (**v29)(v29, 1LL);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 280);
  v30 = *((_QWORD *)this + 34);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v31 = *((_QWORD *)this + 33);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v32 = *((_QWORD *)this + 32);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
