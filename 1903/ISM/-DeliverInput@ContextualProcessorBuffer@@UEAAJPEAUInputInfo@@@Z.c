/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180014CE4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180029600 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180053A30 (--4-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A87FC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1800BA7C4 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1800BA7C4.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA870 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1800F9A64 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9FE0 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FA074 (--4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@PEAUIInputTarget@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800FA968 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@PEAUIInputTarget@@AEAV-$uno.c)
 *     ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x1800FB064 (-OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800FB140 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 *     ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800FB2BC (-RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcess.c)
 *     ?_Copy@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXAEBV12@@Z @ 0x1800FB5D4 (-_Copy@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  __int64 v4; // rdx
  const void *v5; // rbx
  __int64 v6; // rsi
  bool v7; // r14
  const struct IContextualProcessor *v8; // rdi
  _QWORD *v9; // r12
  int v10; // r14d
  struct IInputTarget *v11; // rsi
  const WCHAR *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  const void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 i; // rsi
  __int64 j; // r12
  __int64 v21; // r12
  __int64 *v22; // r12
  __int64 *k; // r14
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rsi
  ContextualProcessorBuffer::InputSample *v32; // rsi
  ContextualProcessorBuffer::InputSample *v33; // rdi
  char v35; // [rsp+38h] [rbp-A9h]
  char v36; // [rsp+39h] [rbp-A8h]
  bool v37; // [rsp+3Ah] [rbp-A7h]
  const void *v38; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v39; // [rsp+48h] [rbp-99h] BYREF
  __int128 v40; // [rsp+50h] [rbp-91h] BYREF
  const struct IContextualProcessor *v41; // [rsp+60h] [rbp-81h] BYREF
  __int64 v42; // [rsp+68h] [rbp-79h] BYREF
  _QWORD *v43; // [rsp+70h] [rbp-71h]
  __int64 v44; // [rsp+78h] [rbp-69h]
  __int64 v45; // [rsp+80h] [rbp-61h] BYREF
  __int64 v46; // [rsp+88h] [rbp-59h] BYREF
  int v47; // [rsp+90h] [rbp-51h] BYREF
  __int128 v48; // [rsp+98h] [rbp-49h]
  __int128 v49; // [rsp+A8h] [rbp-39h]
  __int64 v50; // [rsp+B8h] [rbp-29h]
  _BYTE v51[48]; // [rsp+D0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v44 = -2LL;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v51, L"ContextualProcessingInput", 0LL);
  v4 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  v37 = 0;
  LOBYTE(v6) = 0;
  v35 = 0;
  v7 = 0;
  v36 = 0;
  v8 = 0LL;
  v42 = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  v43 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v9 == v43 )
    goto LABEL_62;
  while ( 1 )
  {
    if ( (unsigned int)(*((_DWORD *)v9 + 2) - 1) > 2 )
      goto LABEL_71;
    v39 = 0LL;
    v40 = 0LL;
    if ( v5 || v7 )
    {
      v14 = 0;
      LODWORD(v39) = 0;
      *((_DWORD *)v9 + 2) = 0;
      v35 = 1;
    }
    else
    {
      LODWORD(v39) = 0;
      Microsoft::WRL::ComPtr<Navigation::Server::IMonitorView>::operator=((__int64 *)&v40, v9 + 2);
      *(_DWORD *)(*((_QWORD *)this + 10) + 96LL) = *((_DWORD *)v9 + 3);
      InputTraceLogging::PerfRegion::PerfRegion(
        (InputTraceLogging::PerfRegion *)&v45,
        L"ContextualProcessorInput",
        (const struct InputTraceLogging::PerfRegion *)v51);
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, _QWORD, __int64 *))(*(_QWORD *)*v9 + 40LL))(
              *v9,
              a2,
              *((_QWORD *)this + 10),
              &v39);
      v11 = (struct IInputTarget *)*((_QWORD *)&v40 + 1);
      v12 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 48LL))(*v9);
      InputETW::ContextualProcessing::OnInput(v12, v11, v10);
      v6 = *((_QWORD *)&v40 + 1);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 48LL))(*v9);
      InputTraceLogging::ContextualProcessing::OnInput(a2, v13, (unsigned int)v39, v6, v10);
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&v45);
      v4 = 0LL;
      if ( v10 < 0 )
      {
        LODWORD(v39) = 0;
        goto LABEL_19;
      }
      v14 = v39;
      *((_DWORD *)v9 + 3) = v39;
    }
    if ( (unsigned int)(v14 - 2) <= 1 )
      break;
    if ( v14 == 1 )
    {
      if ( *(_DWORD *)a2 == 4096 && *((_BYTE *)a2 + 133) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          244LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      if ( (unsigned int)(*((_DWORD *)v9 + 2) - 2) <= 1 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          255LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      *((_DWORD *)v9 + 2) = 1;
      v37 = 1;
LABEL_32:
      LOBYTE(v6) = v35;
      goto LABEL_33;
    }
    if ( v14 == 4 )
    {
      if ( *((_DWORD *)v9 + 2) == 2 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          270LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      *((_DWORD *)v9 + 2) = 3;
      goto LABEL_32;
    }
    if ( v14 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        296LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
LABEL_19:
    if ( *((_DWORD *)v9 + 2) == 2 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        284LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    *((_DWORD *)v9 + 2) = 0;
    LOBYTE(v6) = 1;
    v35 = 1;
LABEL_33:
    v17 = *((_QWORD *)&v40 + 1);
    if ( *((_QWORD *)&v40 + 1) )
    {
      *((_QWORD *)&v40 + 1) = 0LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v4);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v40);
    v9 += 3;
    if ( v9 == v43 )
      goto LABEL_43;
    v7 = v36;
    v4 = 0LL;
  }
  if ( *(_DWORD *)a2 != 4096 || !*((_BYTE *)a2 + 133) )
  {
    v15 = *v9;
    if ( v8 != (const struct IContextualProcessor *)*v9 )
    {
      v41 = (const struct IContextualProcessor *)*v9;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v41);
      v41 = v8;
      v8 = (const struct IContextualProcessor *)v15;
      v42 = v15;
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)&v41);
      v14 = v39;
    }
    if ( *((_DWORD *)v9 + 2) == 3 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        220LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8000FFFFLL);
LABEL_71:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        301LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_72;
    }
    if ( v14 == 3 )
    {
      v16 = v5;
      if ( v5 )
      {
        v5 = 0LL;
        v38 = 0LL;
        (*(void (__fastcall **)(const void *, __int64))(*(_QWORD *)v16 + 16LL))(v16, v4);
      }
      v36 = 1;
    }
    else
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)&v38, (__int64 *)&v40 + 1);
      v5 = v38;
    }
    *((_DWORD *)v9 + 2) = 2;
    goto LABEL_32;
  }
  wil::details::in1diag3::FailFast_Hr(
    retaddr,
    209LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
    (const char *)0x8000FFFFLL);
LABEL_43:
  if ( (_BYTE)v6 )
  {
    v18 = *((_QWORD *)this + 5);
    for ( i = *((_QWORD *)this + 4); i != v18 && *(_DWORD *)(i + 8); i += 24LL )
      ;
    if ( i != v18 )
    {
      for ( j = i + 24; j != v18; j += 24LL )
      {
        if ( *(_DWORD *)(j + 8) )
        {
          ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, j);
          i += 24LL;
        }
      }
      if ( i != v18 )
      {
        v21 = *((_QWORD *)this + 5);
        while ( v18 != v21 )
        {
          ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, v18);
          i += 24LL;
          v18 += 24LL;
        }
        v22 = (__int64 *)*((_QWORD *)this + 5);
        for ( k = (__int64 *)i; k != v22; k += 3 )
        {
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(k + 2);
          Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(k);
        }
        *((_QWORD *)this + 5) = i;
      }
    }
  }
  v7 = v36;
LABEL_62:
  InputTraceLogging::ContextualProcessing::RouteInput(
    a2,
    v5,
    v8,
    v7,
    v37,
    *((_QWORD *)this + 4) != *((_QWORD *)this + 5));
  if ( !v5 && !v7 )
  {
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)&v38, (__int64 *)this + 11);
    v5 = v38;
  }
  if ( v37 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((void **)&v45, (int *)a2, v24, v25);
    v46 = (__int64)v5;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v46);
    v26 = *((_QWORD *)this + 10);
    v47 = *(_DWORD *)(v26 + 8);
    v48 = 0LL;
    *(_QWORD *)&v48 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                        v27,
                        0LL,
                        0LL);
    v49 = 0LL;
    v50 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Copy(
      &v47,
      v26 + 8);
    v28 = (__int64 *)*((_QWORD *)this + 8);
    if ( *((__int64 **)this + 9) == v28 )
    {
LABEL_72:
      std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        (__int64 **)this + 7,
        v28,
        &v45);
    }
    else
    {
      v43 = (_QWORD *)*((_QWORD *)this + 8);
      v29 = v45;
      v45 = 0LL;
      *v28 = v29;
      v28[1] = 0LL;
      if ( v28 + 1 != &v46 )
      {
        v28[1] = v46;
        v46 = 0LL;
      }
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
        (__int64)(v28 + 2),
        (__int64)&v47);
      *((_QWORD *)this + 8) += 80LL;
    }
    ContextualProcessorBuffer::InputSample::~InputSample((ContextualProcessorBuffer::InputSample *)&v45);
  }
  else
  {
    v30 = (_QWORD *)*((_QWORD *)this + 7);
    v31 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v30 != v31 )
    {
      do
      {
        ContextualProcessorBuffer::DeliverInputToTarget((char *)this - 8, *v30, v5, v30 + 2);
        v30 += 10;
      }
      while ( v30 != v31 );
      v32 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 8);
      v33 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 7);
      if ( v33 != v32 )
      {
        do
        {
          ContextualProcessorBuffer::InputSample::~InputSample(v33);
          v33 = (ContextualProcessorBuffer::InputSample *)((char *)v33 + 80);
        }
        while ( v33 != v32 );
        v33 = (ContextualProcessorBuffer::InputSample *)*((_QWORD *)this + 7);
      }
      *((_QWORD *)this + 8) = v33;
    }
    ContextualProcessorBuffer::DeliverInputToTarget((char *)this - 8, a2, v5, *((_QWORD *)this + 10) + 8LL);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v42);
  if ( v5 )
    (*(void (__fastcall **)(const void *))(*(_QWORD *)v5 + 16LL))(v5);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v51);
  return 0LL;
}
