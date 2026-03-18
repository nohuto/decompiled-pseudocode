/*
 * XREFs of ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E68B4
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E50FC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E5490 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001FDB4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1802034B0 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::PushValueToStack(__int64 a1, float *a2, CExpressionValueStack *a3)
{
  int v3; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 144);
  if ( v3 == 18 )
    return CExpressionValueStack::PushConstant(a3, *a2);
  if ( v3 == 35 )
    return CExpressionValueStack::PushConstant(a3, (const struct D2DVector2 *)a2);
  if ( v3 != 52 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  return CExpressionValueStack::PushConstant(a3, (const struct D2DVector3 *)a2);
}
