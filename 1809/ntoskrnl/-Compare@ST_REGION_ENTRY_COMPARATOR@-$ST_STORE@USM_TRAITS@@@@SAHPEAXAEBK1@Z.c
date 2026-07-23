/*
 * XREFs of ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1401535A8
 * Callers:
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140147134 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x140149D68 (-BTreeNodeFindKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ecx
  __int64 v5; // r9
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // r9d
  unsigned int v12; // ecx

  v4 = a1[98];
  v5 = (unsigned int)(*a2 >> v4);
  v6 = a1[100];
  v7 = (unsigned int)a1[102];
  v8 = (unsigned int)(*a3 >> v4);
  _BitScanReverse((unsigned int *)&v9, v5);
  _BitScanReverse((unsigned int *)&v10, v8);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v9 + 32] + 16 * (v5 ^ (unsigned int)(1 << v9)))
                  + (unsigned int)(v6 * (*a2 & a1[99]))
                  + v7);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v10 + 32] + 16 * (v8 ^ (unsigned int)(1 << v10)))
                  + (unsigned int)(v6 * (*a3 & a1[99]))
                  + v7);
  if ( v11 >= v12 )
    return v11 > v12;
  else
    return 0xFFFFFFFFLL;
}
