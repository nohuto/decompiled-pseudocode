/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180030A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x18012F424 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     WPP_SF_Ld @ 0x18014A94C (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  signed int result; // eax
  _DWORD *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-61h] BYREF
  WINBOOL v20; // [rsp+44h] [rbp-5Dh] BYREF
  int v21; // [rsp+48h] [rbp-59h] BYREF
  int v22; // [rsp+4Ch] [rbp-55h] BYREF
  int v23; // [rsp+50h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-49h] BYREF
  LPVOID v25; // [rsp+60h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-39h] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  void *v29; // [rsp+98h] [rbp-9h]
  int v30; // [rsp+A0h] [rbp-1h]
  int v31; // [rsp+A4h] [rbp+3h]
  int *v32; // [rsp+A8h] [rbp+7h]
  int v33; // [rsp+B0h] [rbp+Fh]
  int v34; // [rsp+B4h] [rbp+13h]
  int *v35; // [rsp+B8h] [rbp+17h]
  int v36; // [rsp+C0h] [rbp+1Fh]
  int v37; // [rsp+C4h] [rbp+23h]
  int *v38; // [rsp+C8h] [rbp+27h]
  int v39; // [rsp+D0h] [rbp+2Fh]
  int v40; // [rsp+D4h] [rbp+33h]

  v27 = -2LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_ec79cc65924f314eb7ae55323d0afa97_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C1F30;
    qword_1805C1F30[0] = &IamTraceLogging::`vftable';
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1805C1F30);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_1805C1F30);
  }
  result = (int)Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    v23 = a2;
    v22 = a3;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v25 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v20, &v25) && v20 )
    {
      v25 = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    result = (int)v25;
    v17 = *((_QWORD *)v25 + 1);
    if ( *(_DWORD *)v17 > 5u )
    {
      v32 = &v21;
      v33 = 4;
      v34 = 0;
      v35 = &v22;
      v36 = 4;
      v37 = 0;
      v38 = &v23;
      v39 = 4;
      v40 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v17 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v29 = &unk_1804DFD9D;
      v30 = 56;
      v31 = 1;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      result = EventWriteTransfer(*(_QWORD *)(v17 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  *(_DWORD *)(a1 + 136) = a3;
  v18 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  if ( v8 )
  {
    result = (**v8)(v8, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v18);
    if ( result >= 0 )
    {
      v9 = *(_DWORD *)(a1 + 136);
      if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 )
      {
        v14 = 0LL;
        v15 = 0LL;
        goto LABEL_18;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          v14 = 1LL;
LABEL_17:
          v15 = a2;
LABEL_18:
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v15, v14);
          goto LABEL_19;
        }
        if ( v13 != 1 )
          goto LABEL_19;
      }
      v14 = 0LL;
      goto LABEL_17;
    }
  }
LABEL_19:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}
