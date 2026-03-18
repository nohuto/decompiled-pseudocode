/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1801937FC
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x180192894 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180193680 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  *((_DWORD *)this + 83) = *((_DWORD *)this + 73);
  v1 = (_QWORD *)*((_QWORD *)this + 38);
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v1; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 176LL))(*i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 176LL))(i[1]);
  }
}
