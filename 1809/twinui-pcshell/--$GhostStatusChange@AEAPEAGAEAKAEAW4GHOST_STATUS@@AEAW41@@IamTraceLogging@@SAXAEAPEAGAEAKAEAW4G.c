/*
 * XREFs of ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x180044E00
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x180044F6C (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

ULONG __fastcall IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
        LPCWSTR *a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  int v9; // eax
  __int64 v10; // r10
  REGHANDLE v11; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  int v14; // [rsp+40h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  __int64 v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  int *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]
  int *v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+C0h] [rbp+2Fh]
  int v30; // [rsp+C4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  result = (unsigned int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *a1);
    v9 = *a3;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v13 = v9;
    v25 = &v13;
    v14 = *a4;
    v28 = &v14;
    v22 = a2;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v10 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18044A054 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v11 = *(_QWORD *)(v10 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v18 = &unk_18044A05F;
    UserData.Reserved = 2;
    v19 = 77;
    v20 = 1;
    return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
