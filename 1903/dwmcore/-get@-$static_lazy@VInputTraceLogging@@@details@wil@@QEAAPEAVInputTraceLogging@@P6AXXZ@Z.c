/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80
 * Callers:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016B38 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800868EC (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18008699C (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180086A34 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800C3658 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C36EC (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C3794 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C385C (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C38D4 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C3984 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18022D734 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18022D944 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18022EF28 (--$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTr.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1802382C0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180239F6C (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x18023A7FC (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18023A8F8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18023B294 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18023B5D0 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023E9D8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800E6060 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800E75B8 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_180340158;
    qword_180340158[0] = &CompositorTracing::`vftable';
    qword_180340170 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180340158, qword_180340170);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_180340158);
  }
  return v5;
}
