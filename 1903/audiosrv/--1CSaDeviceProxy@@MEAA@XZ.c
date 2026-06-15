/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18004B590
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18004B550 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1F8C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0064 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800ED31C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x1800F1578 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  CSaDeviceProxy *v1; // rdi
  char *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // r10
  __int64 v6; // rdx
  void *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  void **p_DebugInfo; // r12
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r15
  struct _RTL_CRITICAL_SECTION *CriticalSection; // r13
  _QWORD *p_Type; // rax
  LPVOID *v16; // rbx
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rcx
  DWORD LastError; // ebx
  std::_Ref_count_base *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // r9
  struct _RTL_CRITICAL_SECTION *v24; // rbx
  int v25; // [rsp+20h] [rbp-158h]
  WINBOOL fPending; // [rsp+38h] [rbp-140h] BYREF
  int v27; // [rsp+3Ch] [rbp-13Ch] BYREF
  LPVOID Context; // [rsp+40h] [rbp-138h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+48h] [rbp-130h]
  __int64 v30; // [rsp+50h] [rbp-128h] BYREF
  std::_Ref_count_base *v31; // [rsp+58h] [rbp-120h]
  char *v32; // [rsp+60h] [rbp-118h] BYREF
  CSaDeviceProxy *v33; // [rsp+68h] [rbp-110h]
  _DWORD v34[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v35; // [rsp+78h] [rbp-100h]
  __int64 v36; // [rsp+80h] [rbp-F8h]
  _QWORD v37[11]; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int16 *v38; // [rsp+E0h] [rbp-98h] BYREF
  int v39; // [rsp+E8h] [rbp-90h]
  int v40; // [rsp+ECh] [rbp-8Ch]
  void *v41; // [rsp+F0h] [rbp-88h]
  int v42; // [rsp+F8h] [rbp-80h]
  int v43; // [rsp+FCh] [rbp-7Ch]
  char **v44; // [rsp+100h] [rbp-78h]
  __int64 v45; // [rsp+108h] [rbp-70h]
  void *v46; // [rsp+110h] [rbp-68h]
  int v47; // [rsp+118h] [rbp-60h]
  int v48; // [rsp+11Ch] [rbp-5Ch]
  __int64 v49; // [rsp+120h] [rbp-58h]
  __int64 v50; // [rsp+128h] [rbp-50h]
  int *v51; // [rsp+130h] [rbp-48h]
  __int64 v52; // [rsp+138h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v36 = -2LL;
  v1 = this;
  v33 = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)v1 + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)v1 + 8);
  if ( v4 )
  {
    LastError = GetLastError();
    (*(void (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      v4);
    SetLastError(LastError);
  }
  *((_QWORD *)v1 + 8) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v32 = v2;
    v44 = &v32;
    v45 = 8LL;
    v6 = *((_QWORD *)v1 + 6);
    v7 = &unk_180162EC4;
    LODWORD(v8) = 0;
    if ( *(_QWORD *)v6 )
    {
      v7 = *(void **)v6;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(*(_QWORD *)v6 + 2 * v8) );
    }
    v46 = v7;
    v47 = 2 * v8 + 2;
    v48 = 0;
    v49 = v6 + 48;
    v50 = 16LL;
    v27 = *(_DWORD *)(v6 + 8);
    v51 = &v27;
    v52 = 4LL;
    v34[0] = 184549376;
    v34[1] = 4;
    v35 = 0LL;
    v38 = *(unsigned __int16 **)(v5 + 8);
    v39 = *v38;
    v40 = 2;
    v41 = &unk_18017876C;
    v42 = 64;
    v43 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v34, 0LL, 0LL, 6, &v38);
  }
  if ( *((_BYTE *)v1 + 72) )
  {
    try
    {
      std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v30, *((_QWORD *)v1 + 6));
      v29 = (struct _RTL_CRITICAL_SECTION *)v37;
      v20 = v31;
      if ( v31 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v31 + 2);
        v20 = v31;
      }
      v37[0] = off_1801534C0;
      v37[1] = v30;
      v37[2] = v20;
      v37[7] = v37;
      v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v22 = CSerialWorkQueue::QueueWorkItem(v21, v37);
      if ( v22 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x83C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v22,
          v25);
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x83E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        v23);
      v1 = v33;
    }
  }
  v9 = *((_QWORD *)v1 + 14);
  if ( v9 )
  {
    *((_QWORD *)v1 + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)v1 + 10);
  if ( v10 )
  {
    *((_QWORD *)v1 + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((_QWORD *)v1 + 8) )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  v11 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v1 + 7);
  v29 = v11;
  if ( v11 )
  {
    p_DebugInfo = (void **)&v11[1].DebugInfo;
    DebugInfo = v11[1].DebugInfo;
    CriticalSection = DebugInfo->CriticalSection;
    p_Type = &DebugInfo->Type;
    if ( !BYTE1(CriticalSection->LockSemaphore) )
    {
      v24 = DebugInfo->CriticalSection;
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
          p_DebugInfo,
          v24->OwningThread);
        v24 = (struct _RTL_CRITICAL_SECTION *)v24->DebugInfo;
        std::_Deallocate<16,0>(CriticalSection, (const struct std::nothrow_t *)0x28);
        CriticalSection = v24;
      }
      while ( !BYTE1(v24->LockSemaphore) );
      p_Type = *p_DebugInfo;
      v11 = v29;
    }
    p_Type[1] = DebugInfo;
    *(_QWORD *)*p_DebugInfo = DebugInfo;
    *((_QWORD *)*p_DebugInfo + 2) = DebugInfo;
    p_DebugInfo[1] = 0LL;
    operator delete(*p_DebugInfo, (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection(v11);
    operator delete(v11, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)v1 + 7) = 0LL;
  v16 = (LPVOID *)*((_QWORD *)v1 + 6);
  if ( v16 )
  {
    CoTaskMemFree(v16[3]);
    v16[3] = 0LL;
    CoTaskMemFree(v16[2]);
    v16[2] = 0LL;
    CoTaskMemFree(*v16);
    *v16 = 0LL;
    operator delete(v16, (const struct std::nothrow_t *)0x60);
  }
  *((_QWORD *)v1 + 6) = 0LL;
  v17 = *((_QWORD *)v1 + 5);
  if ( v17 < 0 )
  {
    v18 = (volatile signed __int32 *)(2 * v17);
    if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v18 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
