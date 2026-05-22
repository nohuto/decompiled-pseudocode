/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C2300
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18008B5C0 (-DoConvergedInputTargeting@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffe.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800C1D20 (-OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800C1E80 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800C2E54 (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800C306C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget *v9; // rcx
  struct ContextualProcessorBuffer *v10; // rbx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdi
  int v13; // eax
  const unsigned __int16 *v14; // rax
  const WCHAR *v15; // rax
  int v16; // ecx
  int v17; // eax
  struct IInputTarget *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rcx
  struct IInputTarget *v26; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v27; // [rsp+38h] [rbp-99h] BYREF
  __int64 v28; // [rsp+40h] [rbp-91h]
  struct ContextualProcessorBuffer *v29; // [rsp+48h] [rbp-89h] BYREF
  int v30; // [rsp+50h] [rbp-81h] BYREF
  __int64 v31; // [rsp+58h] [rbp-79h]
  __int64 v32; // [rsp+60h] [rbp-71h]
  _BYTE v33[48]; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v34[48]; // [rsp+A0h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v32 = -2LL;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v33, L"ContextualProcessingHitTest", 0LL);
  v9 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  v12 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v11 == v12 )
    goto LABEL_21;
  while ( 1 )
  {
    v28 = 0LL;
    v27 = 0LL;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v34,
      L"ContextualProcessorHitTest",
      (const struct InputTraceLogging::PerfRegion *)v33);
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v11
                                                                                                  + 24LL))(
            *v11,
            a2,
            a3,
            &v27);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_28:
      wil::details::in1diag3::FailFast_Hr(
        v20,
        (void *)0x7C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
    InputETW::ContextualProcessing::OnHitTest(v14);
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
    InputTraceLogging::ContextualProcessing::OnHitTest((__int64)a2, v15, v27);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v34);
    v16 = v27;
    if ( (unsigned int)(v27 - 1) <= 2 )
    {
      if ( !v10 )
      {
        v17 = ContextualProcessorBuffer::Create(a3, a4, &v29);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x7A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
        v18 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v10 = v29;
        v19 = (**(__int64 (__fastcall ***)(struct ContextualProcessorBuffer *, GUID *, struct IInputTarget **))v29)(
                v29,
                &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                &v26);
        v20 = retaddr;
        if ( v19 < 0 )
          goto LABEL_28;
        v16 = v27;
      }
      v30 = v16;
      v31 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v21 = ContextualProcessorBuffer::AddProcessor(v10, *v11, &v30);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x85,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
          (const char *)(unsigned int)v21);
        JUMPOUT(0x1800C25E2LL);
      }
      if ( (_DWORD)v27 == 2 )
        break;
    }
    v22 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( ++v11 == v12 )
      goto LABEL_17;
  }
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_17:
  v9 = v26;
  if ( !v26 )
  {
LABEL_21:
    v23 = -2147467259;
  }
  else
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 8LL))(v26);
    v9 = v26;
    *a5 = v26;
    v23 = 0;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct ContextualProcessorBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
    v9 = v26;
  }
  if ( v9 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v33);
  return v23;
}
