/*
 * XREFs of ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC
 * Callers:
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18008AB70 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800C1DD0 (-OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x1800C2024 (-OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800C2E54 (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800C306C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorManager::OnFocusRequest(
        ContextualProcessorManager *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget *v8; // rcx
  struct ContextualProcessorBuffer *v9; // rbx
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  int v12; // eax
  const unsigned __int16 *v13; // rax
  const WCHAR *v14; // rax
  int v15; // ecx
  int v16; // eax
  struct IInputTarget *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rcx
  struct IInputTarget *v25; // [rsp+30h] [rbp-91h] BYREF
  __int64 v26; // [rsp+38h] [rbp-89h] BYREF
  __int64 v27; // [rsp+40h] [rbp-81h]
  struct ContextualProcessorBuffer *v28; // [rsp+48h] [rbp-79h] BYREF
  int v29; // [rsp+50h] [rbp-71h] BYREF
  __int64 v30; // [rsp+58h] [rbp-69h]
  __int64 v31; // [rsp+60h] [rbp-61h]
  _BYTE v32[48]; // [rsp+70h] [rbp-51h] BYREF
  _BYTE v33[48]; // [rsp+A0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v31 = -2LL;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v32,
    L"ContextualProcessingFocusRequest",
    0LL);
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v10 = (_QWORD *)*((_QWORD *)this + 2);
  v11 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v10 == v11 )
    goto LABEL_21;
  while ( 1 )
  {
    v27 = 0LL;
    v26 = 0LL;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v33,
      L"ContextualProcessorFocusRequest",
      (const struct InputTraceLogging::PerfRegion *)v32);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v10 + 32LL))(
            *v10,
            a2,
            a3,
            &v26);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_28:
      wil::details::in1diag3::FailFast_Hr(
        v19,
        (void *)0xD3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
    InputETW::ContextualProcessing::OnFocusRequest(v13);
    v14 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 48LL))(*v10);
    InputTraceLogging::ContextualProcessing::OnFocusRequest(v14, v26);
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v33);
    v15 = v26;
    if ( (unsigned int)(v26 - 1) <= 2 )
    {
      if ( !v9 )
      {
        v16 = ContextualProcessorBuffer::Create(a3, 0LL, &v28);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xD1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
        v17 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v9 = v28;
        v18 = (**(__int64 (__fastcall ***)(struct ContextualProcessorBuffer *, GUID *, struct IInputTarget **))v28)(
                v28,
                &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
                &v25);
        v19 = retaddr;
        if ( v18 < 0 )
          goto LABEL_28;
        v15 = v26;
      }
      v29 = v15;
      v30 = v27;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      v20 = ContextualProcessorBuffer::AddProcessor(v9, *v10, &v29);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xDC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
          (const char *)(unsigned int)v20);
        JUMPOUT(0x1800C28BCLL);
      }
      if ( (_DWORD)v26 == 2 )
        break;
    }
    v21 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( ++v10 == v11 )
      goto LABEL_17;
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_17:
  v8 = v25;
  if ( !v25 )
  {
LABEL_21:
    v22 = -2147467259;
  }
  else
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 8LL))(v25);
    v8 = v25;
    *a5 = v25;
    v22 = 0;
  }
  if ( v9 )
  {
    (*(void (__fastcall **)(struct ContextualProcessorBuffer *))(*(_QWORD *)v9 + 16LL))(v9);
    v8 = v25;
  }
  if ( v8 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v32);
  return v22;
}
