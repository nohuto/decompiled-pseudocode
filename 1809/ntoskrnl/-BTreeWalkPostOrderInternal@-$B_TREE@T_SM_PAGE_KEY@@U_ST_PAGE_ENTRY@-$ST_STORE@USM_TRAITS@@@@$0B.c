/*
 * XREFs of ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140301978
 * Callers:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140301978 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 *     ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x140306120 (-StNpEnumBTreeNodes@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140301978 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
        __int64 a1,
        const void *a2,
        _QWORD **a3,
        __int64 (__fastcall *a4)(_QWORD *, __int64, __int64),
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rsi
  int v12; // ecx
  _QWORD *v13; // r9
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx

  v6 = *a3;
  if ( *a3 )
  {
    v10 = *a3;
    *a3 = (_QWORD *)*v6;
    v11 = v6;
    memmove(v10, a2, 0x1000uLL);
  }
  else
  {
    v11 = a2;
  }
  if ( *((_BYTE *)v11 + 3) )
  {
    v12 = a4(v11, a5, a6);
    goto LABEL_21;
  }
  v13 = v11 + 2;
  v14 = (unsigned __int64)&v11[2 * (unsigned __int16)*(_DWORD *)v11 + 2];
  v15 = (unsigned __int64)(v11 + 2);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) != -1 && (unsigned __int8)BYTE2(*(_DWORD *)v11) == 2 )
  {
    for ( ; v15 <= v14; v13 = v11 + 2 )
    {
      v16 = (_QWORD *)(v15 - 8);
      if ( v15 <= (unsigned __int64)v13 )
        v16 = v11 + 1;
      v12 = a4(0LL, a5, (__int64)v16);
      if ( v12 < 0 )
        goto LABEL_21;
      v15 += 16LL;
    }
LABEL_19:
    v12 = a4(v11, a5, a6);
    if ( v12 >= 0 )
      v12 = 0;
    goto LABEL_21;
  }
  if ( v15 > v14 )
    goto LABEL_19;
  while ( 1 )
  {
    v17 = (_QWORD *)(v15 - 8);
    if ( v15 <= (unsigned __int64)v13 )
      v17 = v11 + 1;
    v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeWalkPostOrderInternal(
            a1,
            *v17,
            (_DWORD)a3,
            (_DWORD)a4,
            a5,
            (__int64)v17);
    if ( v12 < 0 )
      break;
    v15 += 16LL;
    v13 = v11 + 2;
    if ( v15 > v14 )
      goto LABEL_19;
  }
LABEL_21:
  if ( v6 )
  {
    *v6 = *a3;
    *a3 = v6;
  }
  return (unsigned int)v12;
}
