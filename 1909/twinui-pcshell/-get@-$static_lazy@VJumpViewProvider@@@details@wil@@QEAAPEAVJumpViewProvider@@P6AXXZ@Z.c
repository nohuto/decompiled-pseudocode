/*
 * XREFs of ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1801BD9D0
 * Callers:
 *     ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B9FBC (--1-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VJu.c)
 *     ?JumpViewCancelledByAnotherInvoke@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x1801BB760 (-JumpViewCancelledByAnotherInvoke@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x1801BB804 (-JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x1801BB8A8 (-JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801BB950 (-NotifyFailure@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1801BC734 (-Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801BD298 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BD4A0 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ @ 0x1801BD5F0 (-StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<JumpViewProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`JumpViewProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_1805C2958;
    qword_1805C2958[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2970 = (struct _TlgProvider_t *)&`JumpViewProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2958, qword_1805C2970);
    InitOnceComplete(&`JumpViewProvider::Instance'::`2'::wrapper, 0, qword_1805C2958);
  }
  return v5;
}
