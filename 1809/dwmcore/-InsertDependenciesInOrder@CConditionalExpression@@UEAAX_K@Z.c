/*
 * XREFs of ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x180193260
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18005B880 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CConditionalExpression::InsertDependenciesInOrder(CConditionalExpression *this, unsigned __int64 a2)
{
  CBaseExpression **v2; // rbp
  CBaseExpression **i; // rbx
  CBaseExpression *v6; // rcx
  CBaseExpression *v7; // rcx

  v2 = (CBaseExpression **)*((_QWORD *)this + 38);
  for ( i = (CBaseExpression **)*((_QWORD *)this + 37); i != v2; i += 2 )
  {
    if ( *i )
      CBaseExpression::InsertInOrder(*i, a2);
    v6 = i[1];
    if ( v6 )
      CBaseExpression::InsertInOrder(v6, a2);
  }
  v7 = (CBaseExpression *)*((_QWORD *)this + 40);
  if ( v7 )
    CBaseExpression::InsertInOrder(v7, a2);
}
