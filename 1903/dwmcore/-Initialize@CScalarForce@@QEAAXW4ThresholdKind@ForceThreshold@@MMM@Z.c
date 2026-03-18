/*
 * XREFs of ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1802204F8
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18020FDD0 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x1802212D4 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v7; // xmm1_4
  struct IAccelerator *v8; // r9
  float v9; // xmm0_4
  float v10; // xmm0_4
  __int64 v11; // [rsp+30h] [rbp-38h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 40LL))(*(_QWORD *)(a1 + 112)) )
    v7 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 24LL))(*(_QWORD *)(a1 + 112));
  else
    v7 = a3;
  v8 = *(struct IAccelerator **)(a1 + 112);
  LODWORD(v11) = a2;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  *((float *)&v11 + 1) = v9;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4) & _xmm);
  *(_QWORD *)(a1 + 92) = v11;
  *(_DWORD *)(a1 + 104) = a5;
  *(float *)(a1 + 100) = v10;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 24), a3, a4, v8, (const struct ForceThreshold *)(a1 + 92));
}
