/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18004C160
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18004C120 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1ADC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800DFBC4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800ECE9C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x1800F10C8 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
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
  void *v8; // r8
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  _BYTE *v17; // r14
  _BYTE *v18; // rbx
  __int64 v19; // rax
  LPVOID *v20; // rbx
  __int64 v21; // r10
  int v22; // [rsp+20h] [rbp-158h]
  WINBOOL fPending; // [rsp+30h] [rbp-148h] BYREF
  int v24; // [rsp+34h] [rbp-144h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-140h] BYREF
  __int64 v26; // [rsp+40h] [rbp-138h] BYREF
  std::_Ref_count_base *v27; // [rsp+48h] [rbp-130h]
  _QWORD *v28; // [rsp+50h] [rbp-128h]
  _QWORD v29[2]; // [rsp+58h] [rbp-120h] BYREF
  _DWORD v30[2]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v31; // [rsp+70h] [rbp-108h]
  __int64 v32; // [rsp+78h] [rbp-100h]
  _QWORD v33[11]; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int16 *v34; // [rsp+E0h] [rbp-98h] BYREF
  int v35; // [rsp+E8h] [rbp-90h]
  int v36; // [rsp+ECh] [rbp-8Ch]
  void *v37; // [rsp+F0h] [rbp-88h]
  int v38; // [rsp+F8h] [rbp-80h]
  int v39; // [rsp+FCh] [rbp-7Ch]
  _QWORD *v40; // [rsp+100h] [rbp-78h]
  __int64 v41; // [rsp+108h] [rbp-70h]
  void *v42; // [rsp+110h] [rbp-68h]
  int v43; // [rsp+118h] [rbp-60h]
  int v44; // [rsp+11Ch] [rbp-5Ch]
  __int64 v45; // [rsp+120h] [rbp-58h]
  __int64 v46; // [rsp+128h] [rbp-50h]
  int *v47; // [rsp+130h] [rbp-48h]
  __int64 v48; // [rsp+138h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v32 = -2LL;
  v29[1] = this;
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
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v29[0] = v2;
    v40 = v29;
    v41 = 8LL;
    v7 = *((_QWORD *)this + 6);
    v8 = &unk_180161DC4;
    LODWORD(v9) = 0;
    if ( *(_QWORD *)v7 )
    {
      v8 = *(void **)v7;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(*(_QWORD *)v7 + 2 * v9) );
    }
    v42 = v8;
    v43 = 2 * v9 + 2;
    v44 = 0;
    v45 = v7 + 48;
    v46 = 16LL;
    v24 = *(_DWORD *)(v7 + 8);
    v47 = &v24;
    v48 = 4LL;
    v30[0] = 184549376;
    v30[1] = 4;
    v31 = 0LL;
    v34 = *(unsigned __int16 **)(v6 + 8);
    v35 = *v34;
    v36 = 2;
    v37 = &unk_18017774C;
    v38 = 64;
    v39 = 1;
    LODWORD(v28) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v30, 0LL, 0LL, 6, &v34);
  }
  if ( *((_BYTE *)this + 72) )
  {
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v26, *((_QWORD *)this + 6));
    v28 = v33;
    v10 = v27;
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
      v10 = v27;
    }
    v33[0] = off_180152038;
    v33[1] = v26;
    v33[2] = v10;
    v33[7] = v33;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v12 = CSerialWorkQueue::QueueWorkItem(v11, v33);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x83C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12,
        v22);
      __debugbreak();
      JUMPOUT(0x18004C67DLL);
    }
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
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
    v19 = v16;
    if ( !v17[25] )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
          v15 + 40,
          *((_QWORD *)v18 + 2));
        v18 = *(_BYTE **)v18;
        std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x28);
        v17 = v18;
      }
      while ( !v18[25] );
      v19 = *(_QWORD *)(v15 + 40);
    }
    *(_QWORD *)(v19 + 8) = v16;
    **(_QWORD **)(v15 + 40) = v16;
    *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL) = v16;
    *(_QWORD *)(v15 + 48) = 0LL;
    operator delete(*(void **)(v15 + 40), (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection((LPCRITICAL_SECTION)v15);
    operator delete((void *)v15, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v20 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v20 )
  {
    CoTaskMemFree(v20[3]);
    v20[3] = 0LL;
    CoTaskMemFree(v20[2]);
    v20[2] = 0LL;
    CoTaskMemFree(*v20);
    *v20 = 0LL;
    operator delete(v20, (const struct std::nothrow_t *)0x60);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((__int64 *)this + 5) < 0 && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 5) + 12)) )
  {
    if ( v21 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
