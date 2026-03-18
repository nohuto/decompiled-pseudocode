/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C006FDD4
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C006FD24 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C0157908 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     ApiSetEditionShouldSwapMouseButton @ 0x1C006FE08 (ApiSetEditionShouldSwapMouseButton.c)
 */

char __fastcall anonymous_namespace_::IsMouseButtonSwapped(unsigned int a1, unsigned __int8 a2)
{
  char v2; // bl

  v2 = 1;
  if ( a1 - 1 > 1 || !(unsigned int)ApiSetEditionShouldSwapMouseButton(a2, a1) )
    return 0;
  return v2;
}
