/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180008AA0
 * Callers:
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180007380 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800074A0 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800075C0 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800076E0 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007CFC (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180007F54 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800080C0 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180008524 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180008710 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180008944 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180085804 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180087478 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800875E0 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800878B0 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180087B80 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180087E50 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180088120 (-StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800B2D40 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180085F08 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  wil::details::ThreadFailureCallbackHolder **v4; // rcx
  wil::details::ThreadFailureCallbackHolder *v5; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL, v6);
  *((_DWORD *)this + 6) = 0;
  v4 = *(wil::details::ThreadFailureCallbackHolder ***)this;
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      break;
    if ( v5 == this )
    {
      *v4 = (wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)this + 2);
      break;
    }
    v4 = (wil::details::ThreadFailureCallbackHolder **)((char *)v5 + 16);
    *(_QWORD *)this = (char *)v5 + 16;
  }
  *(_QWORD *)this = 0LL;
}
