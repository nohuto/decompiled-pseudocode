/*
 * XREFs of ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x18006F530 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x1800C28C4 (-OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z.c)
 *     ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800C29C0 (-RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcess.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800C2BAC (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1800C44B0 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C4A9C (--4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContextualProcessorBuffer::DeliverInput(ContextualProcessorBuffer *this, struct InputInfo *a2)
{
  struct IInputTarget *v3; // rbx
  char v4; // si
  char v5; // r13
  char v6; // r14
  const struct IContextualProcessor *v7; // rdi
  _QWORD *v8; // r12
  struct IInputTarget *v9; // rsi
  struct IInputTarget *v10; // rcx
  int v11; // r14d
  struct IInputTarget *v12; // rsi
  const unsigned __int16 *v13; // rax
  struct IInputTarget *v14; // rsi
  const WCHAR *v15; // rax
  __int64 v16; // rdx
  const struct IContextualProcessor *v17; // rsi
  const struct IContextualProcessor *v18; // rcx
  struct IInputTarget *v19; // rcx
  struct IInputTarget *v20; // rsi
  struct IInputTarget *v21; // rcx
  struct IInputTarget *v22; // rcx
  struct IInputTarget *v23; // rcx
  __int64 v24; // r14
  __int64 i; // rsi
  __int64 j; // r12
  __int64 v27; // r12
  __int64 *v28; // r12
  __int64 *k; // r14
  __int64 v30; // rcx
  __int64 v31; // rcx
  int *v32; // r12
  const struct std::nothrow_t *v33; // rdx
  __int64 v34; // r8
  const char *v35; // r9
  _QWORD *v36; // rdx
  void *v37; // rax
  const struct std::nothrow_t *v38; // rdx
  struct IInputTarget *v39; // rcx
  _QWORD *v40; // rsi
  _QWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int16 v54; // [rsp+38h] [rbp-99h]
  void *v55; // [rsp+40h] [rbp-91h] BYREF
  struct IInputTarget *v56; // [rsp+48h] [rbp-89h] BYREF
  __int64 v57; // [rsp+50h] [rbp-81h] BYREF
  struct IInputTarget *v58[2]; // [rsp+58h] [rbp-79h]
  struct InputInfo *v59; // [rsp+68h] [rbp-69h]
  struct IInputTarget *v60; // [rsp+70h] [rbp-61h]
  const struct IContextualProcessor *v61; // [rsp+78h] [rbp-59h]
  __int64 v62; // [rsp+80h] [rbp-51h]
  _BYTE v63[48]; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v64[48]; // [rsp+B8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v62 = -2LL;
  v59 = a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v63, L"ContextualProcessingInput", 0LL);
  v3 = 0LL;
  v60 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0LL;
  v61 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)this + 3);
  v55 = (void *)*((_QWORD *)this + 4);
  if ( v8 == v55 )
    goto LABEL_67;
  while ( 1 )
  {
    if ( (unsigned int)(*((_DWORD *)v8 + 2) - 1) > 2 )
    {
      v48 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)v48);
LABEL_107:
      v49 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)v49);
      __debugbreak();
    }
    v57 = 0LL;
    *(_OWORD *)v58 = 0LL;
    if ( v3 || v6 )
    {
      v16 = 0LL;
      LODWORD(v57) = 0;
      *((_DWORD *)v8 + 2) = 0;
      v5 = 1;
    }
    else
    {
      LODWORD(v57) = 0;
      v9 = (struct IInputTarget *)v8[2];
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(v8[2]);
        v10 = v58[0];
        v58[0] = v9;
        if ( v10 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      *(_DWORD *)(*((_QWORD *)this + 9) + 32LL) = *((_DWORD *)v8 + 3);
      InputTraceLogging::PerfRegion::PerfRegion(
        (InputTraceLogging::PerfRegion *)v64,
        L"ContextualProcessorInput",
        (const struct InputTraceLogging::PerfRegion *)v63);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, _QWORD, __int64 *))(*(_QWORD *)*v8 + 40LL))(
              *v8,
              v59,
              *((_QWORD *)this + 9),
              &v57);
      v12 = v58[1];
      v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 48LL))(*v8);
      InputETW::ContextualProcessing::OnInput(v13, v12, v11);
      v14 = v58[1];
      v15 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 48LL))(*v8);
      InputTraceLogging::ContextualProcessing::OnInput((__int64)v59, v15, v57, (__int64)v14, v11);
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v64);
      if ( v11 < 0 )
      {
        LODWORD(v57) = 0;
LABEL_20:
        if ( *((_DWORD *)v8 + 2) == 2 )
        {
          v51 = wil::verify_hresult<long>(0x8000FFFF);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xFA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
            (const char *)v51);
          __debugbreak();
        }
        *((_DWORD *)v8 + 2) = 0;
        v5 = 1;
        goto LABEL_38;
      }
      v16 = (unsigned int)v57;
      *((_DWORD *)v8 + 3) = v57;
    }
    if ( (unsigned int)(v16 - 2) <= 1 )
    {
      v17 = (const struct IContextualProcessor *)*v8;
      if ( v7 != (const struct IContextualProcessor *)*v8 )
      {
        if ( v17 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*v8);
          v16 = (unsigned int)v57;
        }
        v18 = v7;
        v7 = v17;
        v61 = v17;
        if ( v18 )
        {
          (*(void (__fastcall **)(const struct IContextualProcessor *, __int64))(*(_QWORD *)v18 + 16LL))(v18, v16);
          LODWORD(v16) = v57;
        }
      }
      if ( *((_DWORD *)v8 + 2) == 3 )
      {
        v53 = wil::verify_hresult<long>(0x8000FFFF);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)v53);
        JUMPOUT(0x1800C3907LL);
      }
      if ( (_DWORD)v16 == 3 )
      {
        v19 = v3;
        if ( v3 )
        {
          v3 = 0LL;
          v60 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        LOBYTE(v54) = 1;
      }
      else
      {
        v20 = v58[1];
        if ( v3 != v58[1] )
        {
          if ( v58[1] )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v58[1] + 8LL))(v58[1]);
          v21 = v3;
          v3 = v20;
          v60 = v20;
          if ( v21 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
      *((_DWORD *)v8 + 2) = 2;
    }
    else if ( (_DWORD)v16 == 1 )
    {
      if ( (unsigned int)(*((_DWORD *)v8 + 2) - 2) <= 1 )
        goto LABEL_107;
      *((_DWORD *)v8 + 2) = 1;
      HIBYTE(v54) = 1;
    }
    else
    {
      if ( (_DWORD)v16 != 4 )
      {
        if ( (_DWORD)v16 )
        {
          v52 = wil::verify_hresult<long>(0x8000FFFF);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x106,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
            (const char *)v52);
          __debugbreak();
        }
        goto LABEL_20;
      }
      if ( *((_DWORD *)v8 + 2) == 2 )
      {
        v50 = wil::verify_hresult<long>(0x8000FFFF);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xEC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
          (const char *)v50);
        __debugbreak();
      }
      *((_DWORD *)v8 + 2) = 3;
    }
LABEL_38:
    v22 = v58[1];
    if ( v58[1] )
    {
      v58[1] = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v58[0];
    if ( v58[0] )
    {
      v58[0] = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v8 += 3;
    if ( v8 == v55 )
      break;
    v6 = v54;
  }
  if ( v5 )
  {
    v24 = *((_QWORD *)this + 4);
    for ( i = *((_QWORD *)this + 3); i != v24 && *(_DWORD *)(i + 8); i += 24LL )
      ;
    if ( i != v24 )
    {
      for ( j = i + 24; j != v24; j += 24LL )
      {
        if ( *(_DWORD *)(j + 8) )
        {
          ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, j);
          i += 24LL;
        }
      }
      if ( i != v24 )
      {
        v27 = *((_QWORD *)this + 4);
        while ( v24 != v27 )
        {
          ContextualProcessorBuffer::ContextualProcessorMetadata::operator=(i, v24);
          i += 24LL;
          v24 += 24LL;
        }
        v28 = (__int64 *)*((_QWORD *)this + 4);
        for ( k = (__int64 *)i; k != v28; k += 3 )
        {
          v30 = k[2];
          if ( v30 )
          {
            k[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v31 = *k;
          if ( *k )
          {
            *k = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
        *((_QWORD *)this + 4) = i;
      }
    }
  }
  v4 = HIBYTE(v54);
  v6 = v54;
LABEL_67:
  v32 = (int *)v59;
  InputTraceLogging::ContextualProcessing::RouteInput(
    v59,
    v3,
    v7,
    v6,
    v4,
    *((_QWORD *)this + 3) != *((_QWORD *)this + 4));
  if ( !v3 && !v6 && *((_QWORD *)this + 10) )
  {
    v3 = (struct IInputTarget *)*((_QWORD *)this + 10);
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v3 + 8LL))(v3);
    v60 = v3;
  }
  if ( v4 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(&v55, v32, v34, v35);
    v56 = v3;
    if ( v3 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v3 + 8LL))(v3);
    v36 = (_QWORD *)*((_QWORD *)this + 7);
    if ( *((_QWORD **)this + 8) == v36 )
    {
      std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        (char *)this + 48,
        v36,
        &v55);
    }
    else
    {
      v37 = v55;
      v55 = 0LL;
      *v36 = v37;
      v38 = (const struct std::nothrow_t *)(v36 + 1);
      *(_QWORD *)v38 = 0LL;
      if ( v38 != (const struct std::nothrow_t *)&v56 )
      {
        *(_QWORD *)v38 = v56;
        v56 = 0LL;
      }
      *((_QWORD *)this + 7) += 16LL;
    }
    v39 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    if ( v55 )
      operator delete(v55, v38);
  }
  else
  {
    v40 = (_QWORD *)*((_QWORD *)this + 6);
    v41 = (_QWORD *)*((_QWORD *)this + 7);
    if ( v40 != v41 )
    {
      do
      {
        v42 = *((_QWORD *)this + 11);
        if ( v42 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, struct IInputTarget *))(*(_QWORD *)v42 + 24LL))(v42, *v40, v3);
        }
        else if ( v3 )
        {
          (*(void (__fastcall **)(struct IInputTarget *, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *v40);
        }
        v40 += 2;
      }
      while ( v40 != v41 );
      v43 = *((_QWORD *)this + 7);
      v44 = *((_QWORD *)this + 6);
      if ( v44 != v43 )
      {
        do
        {
          v45 = *(_QWORD *)(v44 + 8);
          if ( v45 )
          {
            *(_QWORD *)(v44 + 8) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          }
          if ( *(_QWORD *)v44 )
            operator delete(*(void **)v44, v33);
          v44 += 16LL;
        }
        while ( v44 != v43 );
        v44 = *((_QWORD *)this + 6);
      }
      *((_QWORD *)this + 7) = v44;
    }
    v46 = *((_QWORD *)this + 11);
    if ( v46 )
    {
      (*(void (__fastcall **)(__int64, int *, struct IInputTarget *))(*(_QWORD *)v46 + 24LL))(v46, v32, v3);
    }
    else if ( v3 )
    {
      (*(void (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v3 + 24LL))(v3, v32);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(const struct IContextualProcessor *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v3 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v3 + 16LL))(v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v63);
  return 0LL;
}
