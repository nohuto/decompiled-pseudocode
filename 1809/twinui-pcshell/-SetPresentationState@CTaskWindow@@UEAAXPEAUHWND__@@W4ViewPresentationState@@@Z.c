/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800591F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x1800ECD44 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     WPP_SF_Ld @ 0x180105798 (WPP_SF_Ld.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  signed int result; // eax
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
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
      &WPP_c7112eb849c034c9bca4c47c1b6552d2_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F738;
    qword_18050F738[0] = &IamTraceLogging::`vftable';
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_18050F738);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_18050F738);
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
      v25 = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    result = (int)v25;
    v8 = *((_QWORD *)v25 + 1);
    if ( *(_DWORD *)v8 > 5u )
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
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044AB52 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v8 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v29 = &unk_18044AB5D;
      v30 = 56;
      v31 = 1;
      result = EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  *(_DWORD *)(a1 + 136) = a3;
  v18 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  if ( v9 )
  {
    result = (**v9)(v9, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v18);
    if ( result >= 0 )
    {
      v10 = *(_DWORD *)(a1 + 136);
      if ( !v10 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 )
      {
        v15 = 0LL;
        v16 = 0LL;
        goto LABEL_23;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          v15 = 1LL;
LABEL_22:
          v16 = a2;
LABEL_23:
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v16, v15);
          goto LABEL_24;
        }
        if ( v14 != 1 )
          goto LABEL_24;
      }
      v15 = 0LL;
      goto LABEL_22;
    }
  }
LABEL_24:
  v17 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return result;
}
