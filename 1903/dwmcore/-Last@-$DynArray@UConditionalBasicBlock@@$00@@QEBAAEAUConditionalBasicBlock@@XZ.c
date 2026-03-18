/*
 * XREFs of ?Last@?$DynArray@UConditionalBasicBlock@@$00@@QEBAAEAUConditionalBasicBlock@@XZ @ 0x1801D56E4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<ConditionalBasicBlock,1>::Last(__int64 a1)
{
  return *(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
}
