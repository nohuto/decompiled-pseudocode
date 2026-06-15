/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x180044520
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x1800444E0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0AE0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800E1CC0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800E60F8 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E6340 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  DWORD LastError; // ebx
  __int64 v6; // r10
  __int64 v7; // rdx
  const WCHAR *v8; // r8
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rax
  _BYTE *v17; // r14
  _BYTE *v18; // rbx
  LPVOID *v19; // rbx
  __int64 v20; // r10
  int v21; // [rsp+20h] [rbp-148h]
  WINBOOL fPending; // [rsp+30h] [rbp-138h] BYREF
  int v23; // [rsp+34h] [rbp-134h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-130h] BYREF
  __int64 v25; // [rsp+40h] [rbp-128h] BYREF
  std::_Ref_count_base *v26; // [rsp+48h] [rbp-120h]
  _QWORD v27[2]; // [rsp+50h] [rbp-118h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v29; // [rsp+68h] [rbp-100h]
  __int64 v30; // [rsp+70h] [rbp-F8h]
  _QWORD *v31; // [rsp+78h] [rbp-F0h]
  _QWORD v32[11]; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int16 *v33; // [rsp+E0h] [rbp-88h] BYREF
  int v34; // [rsp+E8h] [rbp-80h]
  int v35; // [rsp+ECh] [rbp-7Ch]
  void *v36; // [rsp+F0h] [rbp-78h]
  int v37; // [rsp+F8h] [rbp-70h]
  int v38; // [rsp+FCh] [rbp-6Ch]
  _QWORD *v39; // [rsp+100h] [rbp-68h]
  __int64 v40; // [rsp+108h] [rbp-60h]
  const WCHAR *v41; // [rsp+110h] [rbp-58h]
  int v42; // [rsp+118h] [rbp-50h]
  int v43; // [rsp+11Ch] [rbp-4Ch]
  __int64 v44; // [rsp+120h] [rbp-48h]
  __int64 v45; // [rsp+128h] [rbp-40h]
  int *v46; // [rsp+130h] [rbp-38h]
  __int64 v47; // [rsp+138h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v30 = -2LL;
  v27[1] = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    LastError = GetLastError();
    (*(void (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      v4);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v27[0] = v2;
    v39 = v27;
    v40 = 8LL;
    v7 = *((_QWORD *)this + 6);
    v8 = &word_18015F720;
    LODWORD(v9) = 0;
    if ( *(_QWORD *)v7 )
    {
      v8 = *(const WCHAR **)v7;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(*(_QWORD *)v7 + 2 * v9) );
    }
    v41 = v8;
    v42 = 2 * v9 + 2;
    v43 = 0;
    v44 = v7 + 48;
    v45 = 16LL;
    v23 = *(_DWORD *)(v7 + 8);
    v46 = &v23;
    v47 = 4LL;
    v28[0] = ((unsigned int)&unk_180173717 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v28[1] = 4;
    v29 = 0LL;
    v33 = *(unsigned __int16 **)(v6 + 8);
    v34 = *v33;
    v35 = 2;
    v36 = &unk_180173722;
    v37 = 64;
    v38 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v28, 0LL, 0LL, 6, &v33);
  }
  if ( *((_BYTE *)this + 73) )
  {
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v25, *((_QWORD *)this + 6));
    v31 = v32;
    v10 = v26;
    if ( v26 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
      v10 = v26;
    }
    v32[0] = off_18014DED0;
    v32[1] = v25;
    v32[2] = v10;
    v32[7] = v32;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v12 = CSerialWorkQueue::QueueWorkItem(v11, v32);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6AA,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12,
        v21);
      __debugbreak();
      JUMPOUT(0x180044A3ELL);
    }
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
  }
  v13 = *((_QWORD *)this + 14);
  if ( v13 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *((_QWORD *)this + 8) )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  v15 = *((_QWORD *)this + 7);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 40);
    v17 = *(_BYTE **)(v16 + 8);
    v18 = v17;
    if ( !v17[25] )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
          v15 + 40,
          *((_QWORD *)v18 + 2));
        v18 = *(_BYTE **)v18;
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x28);
        v17 = v18;
      }
      while ( !v18[25] );
      v16 = *(_QWORD *)(v15 + 40);
    }
    *(_QWORD *)(v16 + 8) = v16;
    **(_QWORD **)(v15 + 40) = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 48) = 0LL;
    operator delete(*(void **)(v15 + 40), (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection((LPCRITICAL_SECTION)v15);
    operator delete((void *)v15, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v19 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v19 )
  {
    CoTaskMemFree(v19[3]);
    v19[3] = 0LL;
    CoTaskMemFree(v19[2]);
    v19[2] = 0LL;
    CoTaskMemFree(*v19);
    *v19 = 0LL;
    operator delete(v19, (const struct std::nothrow_t *)0x60);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((__int64 *)this + 5) < 0 && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 5) + 12)) )
  {
    if ( v20 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
