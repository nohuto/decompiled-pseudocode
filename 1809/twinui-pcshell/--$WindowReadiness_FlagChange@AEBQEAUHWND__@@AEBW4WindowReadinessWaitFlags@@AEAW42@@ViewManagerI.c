/*
 * XREFs of ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C
 * Callers:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180021084 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180021160 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _lambda_60221e79019ecf56c4402e49e3564341_::operator() @ 0x180021294 (_lambda_60221e79019ecf56c4402e49e3564341_--operator().c)
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180021460 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180021560 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18007C8B8 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        __int64 *a1,
        int *a2,
        int *a3)
{
  ULONG result; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  __int64 *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a1;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v14 = v8;
    v20 = &v14;
    v11 = *a2;
    v23 = &v11;
    v12 = *a3;
    v26 = &v12;
    v21 = 8;
    v24 = 4;
    v27 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045FAEE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9 = *(_QWORD *)(v7 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_18045FAF9;
    UserData.Reserved = 2;
    v18 = 66;
    v19 = 1;
    return EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
