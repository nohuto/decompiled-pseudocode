/*
 * XREFs of ?Last@?$DynArray@UConditionalBasicBlock@@$00@@QEBAAEAUConditionalBasicBlock@@XZ @ 0x180195A30
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<ConditionalBasicBlock,1>::Last(__int64 a1)
{
  return *(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
}
