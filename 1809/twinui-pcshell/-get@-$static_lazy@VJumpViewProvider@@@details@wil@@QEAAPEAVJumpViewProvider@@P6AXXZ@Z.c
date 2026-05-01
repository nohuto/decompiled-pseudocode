/*
 * XREFs of ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x18016FA0C
 * Callers:
 *     ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18016C65C (--1-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VJu.c)
 *     _lambda_4d8037bcc965f287bfaff02adbbc864e_::operator() @ 0x18016CAFC (_lambda_4d8037bcc965f287bfaff02adbbc864e_--operator().c)
 *     ?NotifyFailure@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18016DD80 (-NotifyFailure@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x18016F39C (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016F58C (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ @ 0x18016F6C0 (-StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<JumpViewProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`JumpViewProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_180510018;
    qword_180510018[0] = &ShellScreenClippingLogging::`vftable';
    qword_180510030 = (struct _TlgProvider_t *)&`JumpViewProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180510018, qword_180510030);
    InitOnceComplete(&`JumpViewProvider::Instance'::`2'::wrapper, 0, qword_180510018);
  }
  return v5;
}
