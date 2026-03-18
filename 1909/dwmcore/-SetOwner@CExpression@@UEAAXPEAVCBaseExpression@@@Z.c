/*
 * XREFs of ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801D4B00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800A42E8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 */

void __fastcall CExpression::SetOwner(CExpression *this, struct CBaseExpression *a2)
{
  if ( *((_QWORD *)this + 53) )
    CExpression::UnregisterSources(this);
  *((_QWORD *)this + 53) = a2;
}
