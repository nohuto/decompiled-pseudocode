/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18020E5BC
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8EC4 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DA7A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180207AB0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802080C0 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetCurrentVelocity(CMotion *this)
{
  __int64 v1; // r8
  _BYTE v3[24]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
    return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 17), v3) + 8);
  else
    return *((float *)this + 7);
}
