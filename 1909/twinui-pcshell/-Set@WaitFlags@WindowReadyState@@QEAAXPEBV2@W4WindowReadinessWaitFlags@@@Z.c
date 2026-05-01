/*
 * XREFs of ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18001ED6C
 * Callers:
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001DC00 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator() @ 0x18001DF84 (_lambda_1caa3a1ae57858b5006e6ce489e60a5a_--operator().c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18001E3F4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18001E9C4 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802C3AA0 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802C3B98 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall WindowReadyState::WaitFlags::Set(int *a1, __int64 *a2, int a3)
{
  int v3; // edi
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  int *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  int *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  v3 = *a1;
  Context = 0LL;
  *a1 = a3 | v3;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  result = (int)Context;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a2;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v13 = v8;
    v15 = &v13;
    v18 = &v10;
    v11 = *a1;
    v21 = &v11;
    v16 = 8;
    v10 = v3;
    v19 = 4;
    v22 = 4;
    return TlgWrite(v7, &unk_1804FB550, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
