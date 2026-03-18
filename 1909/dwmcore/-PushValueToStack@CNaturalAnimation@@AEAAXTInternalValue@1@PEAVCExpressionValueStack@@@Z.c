/*
 * XREFs of ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801E5144
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E398C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801E3D20 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001DE60 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180201DC0 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
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
