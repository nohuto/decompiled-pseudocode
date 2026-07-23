/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x140149D68
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1401535A8 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        __int64 a1,
        _DWORD *a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = -1;
  v4 = (unsigned __int16)*a2;
  if ( HIBYTE(*a2) )
  {
    if ( (unsigned __int16)*a2 )
    {
      v8 = a3;
      do
      {
        v9 = a2[((v4 + v3) >> 1) + 4];
        if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) >= 0 )
          v4 = (v4 + v3) >> 1;
        else
          v3 = (v4 + v3) >> 1;
      }
      while ( v3 + 1 != v4 );
    }
  }
  else if ( (unsigned __int16)*a2 )
  {
    v8 = a3;
    do
    {
      v9 = a2[4 * ((v4 + v3) >> 1) + 4];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v9, &v8) > 0 )
        v4 = (v4 + v3) >> 1;
      else
        v3 = (v4 + v3) >> 1;
    }
    while ( v3 + 1 != v4 );
  }
  return v4;
}
