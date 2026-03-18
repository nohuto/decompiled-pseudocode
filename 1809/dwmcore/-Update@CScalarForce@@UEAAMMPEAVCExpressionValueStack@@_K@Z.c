/*
 * XREFs of ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1801E6D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1801E7418 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 */

float __fastcall CScalarForce::Update(CScalarForce *this, float a2, struct CExpressionValueStack *a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-28h] BYREF

  CScalarForceEvaluator::AdvanceToTime(
    (CScalarForce *)((char *)this + 24),
    a2 - *((float *)this + 26),
    *((struct IAccelerator **)this + 14));
  return *(float *)((*(__int64 (__fastcall **)(CScalarForce *, _BYTE *))(*(_QWORD *)this + 32LL))(this, v5) + 4);
}
