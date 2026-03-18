/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002BFF8
 * Callers:
 *     ?HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017D10 (-HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18002B010 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002BFA4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073914 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073FB8 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180075370 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EA3C0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EBFDC (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1801EC958 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801ECAA8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED488 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED874 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801F90E8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007B618 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800EBE78 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_18030BBD8;
    qword_18030BBD8[0] = &CompositorTracing::`vftable';
    qword_18030BBF0 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18030BBD8, qword_18030BBF0);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_18030BBD8);
  }
  return v5;
}
