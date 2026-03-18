/*
 * XREFs of IsMouseInterceptEnabled @ 0x1C0151420
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0158040 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 */

bool IsMouseInterceptEnabled()
{
  __int64 v0; // rcx
  bool result; // al

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  result = 0;
  if ( v0 )
    return CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
             (CMouseProcessor::MouseInterceptState *)(v0 + 2744),
             0LL);
  return result;
}
