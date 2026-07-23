/*
 * XREFs of ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140157CEC
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AC34 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140157BA8 (-BTreeFindLeafSiblingEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 i; // r9
  unsigned __int64 v5; // rdx

  for ( i = *(_QWORD *)a1 + 16 * (*(unsigned int *)(a1 + 24) - 2LL); i >= *(_QWORD *)a1; i -= 16LL )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(i + 8) < *(_QWORD *)i + 16 * ((unsigned __int64)(unsigned __int16)**(_DWORD **)i + 1) )
      {
        *(_OWORD *)a3 = *(_OWORD *)i;
        return 1LL;
      }
    }
    else
    {
      v5 = *(_QWORD *)(i + 8);
      if ( v5 > *(_QWORD *)i + 16LL )
      {
        *(_QWORD *)a3 = *(_QWORD *)i;
        *(_QWORD *)(a3 + 8) = v5 - 16;
        return 1LL;
      }
    }
  }
  return 0LL;
}
