/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x1800157CC
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x1800148A0 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18001019C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180016BA8 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180017F10 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180018084 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x180018930 (--1-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PEAUIU.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::~CProcess(CProcess *this)
{
  int i; // eax
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void *v5; // rbx
  HANDLE v6; // rax
  struct _TP_TIMER *v7; // rcx
  char *v8; // rcx
  const struct std::nothrow_t *v9; // rdx
  char *v10; // r8
  char *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  char *v23; // r8

  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  for ( i = *((_DWORD *)this + 76); i > 0; i = *((_DWORD *)this + 76) )
  {
    v3 = (void *)**((_QWORD **)this + 37);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
      (char *)this + 288,
      0LL);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  while ( *((int *)this + 82) > 0 )
  {
    v5 = (void *)**((_QWORD **)this + 40);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
      (char *)this + 312,
      0LL);
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v5);
  }
  if ( *((_DWORD *)this + 66) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 40LL))(*((_QWORD *)this + 34));
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 76);
  if ( v7 )
  {
    SetThreadpoolTimer(v7, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 76), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 76));
  }
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v8 = (char *)*((_QWORD *)this + 98);
  if ( v8 )
  {
    v9 = (const struct std::nothrow_t *)((*((_QWORD *)this + 100) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v9 >= 0x1000 )
    {
      v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
      v10 = (char *)*((_QWORD *)v8 - 1);
      v11 = (char *)(v8 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
        goto LABEL_43;
      v8 = v10;
    }
    operator delete(v8, v9);
    *((_QWORD *)this + 98) = 0LL;
    *((_QWORD *)this + 99) = 0LL;
    *((_QWORD *)this + 100) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v12 = *((_QWORD *)this + 91);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::~CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>((char *)this + 656);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  v13 = (char *)*((_QWORD *)this + 75);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v13);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 14);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 312);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 288);
  v14 = *((_QWORD *)this + 35);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 34);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (volatile signed __int32 *)*((_QWORD *)this + 32);
  if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
  }
  v17 = (void *)*((_QWORD *)this + 29);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = (void *)*((_QWORD *)this + 27);
  if ( v18 )
    CoTaskMemFree(v18);
  v19 = (void *)*((_QWORD *)this + 26);
  if ( v19 )
    CoTaskMemFree(v19);
  v20 = (void *)*((_QWORD *)this + 25);
  if ( v20 )
    CoTaskMemFree(v20);
  v21 = (char *)*((_QWORD *)this + 23);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v22 = (char *)*((_QWORD *)this + 15);
  if ( v22 )
  {
    v9 = (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v22) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v9 < 0x1000 )
    {
LABEL_41:
      operator delete(v22, v9);
      *((_QWORD *)this + 15) = 0LL;
      *((_QWORD *)this + 16) = 0LL;
      *((_QWORD *)this + 17) = 0LL;
      goto LABEL_42;
    }
    v9 = (const struct std::nothrow_t *)((char *)v9 + 39);
    v23 = (char *)*((_QWORD *)v22 - 1);
    v11 = (char *)(v22 - v23);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v22 = v23;
      goto LABEL_41;
    }
LABEL_43:
    _o__invalid_parameter_noinfo_noreturn(v11, v9);
    JUMPOUT(0x180015B52LL);
  }
LABEL_42:
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
