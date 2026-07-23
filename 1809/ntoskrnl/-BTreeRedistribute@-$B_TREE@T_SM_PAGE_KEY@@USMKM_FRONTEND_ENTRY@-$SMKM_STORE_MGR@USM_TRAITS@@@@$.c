/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140150B34
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C454 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14014DFB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  _DWORD *v5; // rsi
  unsigned int v6; // r8d
  __int64 *v7; // rax
  bool v8; // cc
  __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  _DWORD *v13; // r12
  _DWORD *v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _DWORD *v19; // rbx
  unsigned int v20; // ebp
  _DWORD *v21; // r15
  char v22; // r8
  __int64 v23; // r11
  unsigned int v24; // eax
  unsigned int v25; // r10d
  char *v26; // r9
  unsigned int v27; // edx
  char *v28; // r14
  size_t v29; // r8
  int v31; // eax
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r11
  __int64 v36; // [rsp+20h] [rbp-58h]
  _DWORD *v37; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v38; // [rsp+88h] [rbp+10h] BYREF
  char *v39; // [rsp+90h] [rbp+18h]
  __int64 v40; // [rsp+98h] [rbp+20h]

  v37 = a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = *(_DWORD **)(v3 - 16);
  v5 = *(_DWORD **)(v3 - 8);
  v6 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v5 == &v4[4 * (unsigned __int16)*v4 + 4] )
  {
    v37 = *(_DWORD **)v3;
    v5 -= 4;
    v7 = (__int64 *)(v4 + 2);
    v8 = v5 <= v4 + 4;
    v9 = (__int64 *)&v38;
    v10 = (__int64 *)(v5 - 2);
    if ( v8 )
      v10 = v7;
  }
  else
  {
    v38 = *(_DWORD **)v3;
    v10 = (__int64 *)(v5 + 2);
    v9 = (__int64 *)&v37;
    v2 = 0LL;
  }
  v11 = *v10;
  *v9 = *v10;
  v12 = v11 | v2;
  v13 = v37;
  v14 = v38;
  v15 = (unsigned __int16)*v37;
  v16 = (unsigned __int16)*v38;
  v17 = v16 + v15;
  if ( v16 + v15 >= v6 && v17 < 2 * v6 - 1 )
  {
    v18 = v17 >> 1;
    if ( v16 > v15 )
    {
      v19 = v38;
      v20 = v16 - v18;
      v21 = v38;
      v14 = v37;
    }
    else
    {
      v19 = v37;
      v20 = v18 - v16;
      v21 = v38;
    }
    v22 = *((_BYTE *)v19 + 3);
    v23 = v15 < v16 ? v18 : 0;
    v24 = 0;
    v40 = v23;
    if ( v16 <= v15 )
      v24 = v16;
    v36 = v24;
    v25 = v22 != 0 ? 8 : 16;
    LODWORD(v38) = v25;
    v26 = (char *)v14 + v24 * ((-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16) + 16;
    v39 = v26;
    v27 = v25 * v20;
    LODWORD(v37) = v25 * v20;
    v28 = (char *)v19 + v23 * ((-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16) + 16;
    if ( v19 == v21 )
    {
      memmove(&v26[v27], v26, v25 * (unsigned __int16)*v14);
      v22 = *((_BYTE *)v19 + 3);
      v26 = v39;
      v27 = (unsigned int)v37;
      v25 = (unsigned int)v38;
      v23 = v40;
    }
    else
    {
      LODWORD(v37) = v25 * v20;
    }
    if ( v22 )
    {
      v29 = v27;
    }
    else
    {
      v31 = *v5;
      v32 = v20 - 1;
      if ( v19 == v21 )
      {
        v33 = 2LL * v32;
        v14[4 * v32 + 4] = v31;
        v34 = *((_QWORD *)v14 + 1);
      }
      else
      {
        v33 = 2 * v36;
        v26 += v25;
        v14[4 * v36 + 4] = v31;
        v34 = *((_QWORD *)v19 + 1);
      }
      *(_QWORD *)&v14[2 * v33 + 6] = v34;
      if ( v19 == v21 )
      {
        v35 = 2 * v23;
        v28 += v25;
        *v5 = v19[2 * v35 + 4];
        *((_QWORD *)v14 + 1) = *(_QWORD *)&v19[2 * v35 + 6];
      }
      else
      {
        v32 = v20 - 1;
        *v5 = v19[4 * v20];
        *((_QWORD *)v19 + 1) = *(_QWORD *)&v19[4 * v20 + 2];
      }
      v29 = v25 * v32;
    }
    memmove(v26, v28, v29);
    *(_WORD *)v14 += v20;
    *(_WORD *)v19 -= v20;
    if ( v19 == v13 )
      memmove(v28, &v28[(unsigned int)v37], (unsigned int)v38 * (unsigned __int16)*v19);
    if ( *((_BYTE *)v13 + 3) )
      *v5 = v13[4];
  }
  return v12;
}
