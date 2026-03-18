/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x1800A9A74
 * Callers:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x1800154E4 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8E80 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8EF8 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800A98E0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800A9990 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800A9A28 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A9F34 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800AA120 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800ACC70 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18022C024 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18022C234 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18022D818 (--$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTr.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180236BB0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x18023885C (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1802390EC (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1802391E8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239B84 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239EC0 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023D2C8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800E6F10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800E8468 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_18033D238;
    qword_18033D238[0] = &CompositorTracing::`vftable';
    qword_18033D250 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18033D238, qword_18033D250);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_18033D238);
  }
  return v5;
}
