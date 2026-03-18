/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001E2DC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801A9BC8 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x1800544FC (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector3 *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rdx

  v4 = CExpressionValueStack::EnsureAvailablePushSpace(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v4, 0x1EFu);
  }
  else
  {
    v7 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
    *(_DWORD *)(v7 + 72) = 52;
    *(_QWORD *)v7 = *(_QWORD *)a2;
    *(_DWORD *)(v7 + 8) = *((_DWORD *)a2 + 2);
    *(_BYTE *)(v7 + 76) = 1;
  }
  return v6;
}
