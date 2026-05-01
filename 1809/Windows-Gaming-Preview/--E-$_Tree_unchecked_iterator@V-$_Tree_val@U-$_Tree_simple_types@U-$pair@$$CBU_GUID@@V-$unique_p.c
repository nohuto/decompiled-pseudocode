/*
 * XREFs of ??E?$_Tree_unchecked_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18001D16C
 * Callers:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C878 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>>::operator++(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 **v2; // r8
  __int64 *j; // rdx
  __int64 i; // rax

  v1 = *a1;
  if ( !*(_BYTE *)(*a1 + 25) )
  {
    v2 = *(__int64 ***)(v1 + 16);
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v1 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      {
        *a1 = i;
        v1 = i;
      }
      *a1 = i;
    }
    else
    {
      for ( j = *v2; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v2 = (__int64 **)j;
      *a1 = (__int64)v2;
    }
  }
  return a1;
}
