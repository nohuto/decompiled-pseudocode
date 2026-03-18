/*
 * XREFs of ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A560C
 * Callers:
 *     ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x1800A2850 (--0CRenderData@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A55CC (--0CExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800AD264 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800E0790 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800E28AC (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800E29EC (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E2A98 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z @ 0x1801CE57C (--0CCompositionCubeMap@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::DynArrayImpl<1>(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a3;
  if ( a2 )
    memset_0(a2, 0, (unsigned int)(a5 * a3));
  return a1;
}
