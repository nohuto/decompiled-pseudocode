/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18020FCCC
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA5D4 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1802091A0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802097B0 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
