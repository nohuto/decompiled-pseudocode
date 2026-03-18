/*
 * XREFs of ExprOp1 @ 0x1C001ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ExprOp1_64 @ 0x1C001ED2C (ExprOp1_64.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     ExprOp1_32 @ 0x1C0068DD4 (ExprOp1_32.c)
 */

__int64 __fastcall ExprOp1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned __int8)IsCompatableDSDTRevision(a1, a2, a3, a4) )
    return ExprOp1_64(a1, a2);
  else
    return ExprOp1_32(a1, a2);
}
