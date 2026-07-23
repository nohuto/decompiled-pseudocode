/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401566C0
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140149E28 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AC34 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140301BF4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r8
  _DWORD *v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // r12
  unsigned int v8; // esi
  int v9; // ecx
  char v10; // r8
  void **v11; // rax
  bool v12; // cc
  void **v13; // rbx
  void **v14; // r9
  unsigned __int64 v15; // rax
  _DWORD *v16; // r15
  unsigned __int64 v17; // r13
  _DWORD *v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _DWORD *v23; // rbx
  unsigned int v24; // esi
  _DWORD *v25; // rbp
  char v26; // r10
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r10
  unsigned int v34; // edx
  char *v35; // r10
  char *v36; // r14
  char v37; // al
  size_t v38; // r8
  struct NP_CONTEXT::NP_CTX *v40; // rcx
  int v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r9
  char *v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+28h] [rbp-50h]
  _DWORD *v48; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v49; // [rsp+88h] [rbp+10h] BYREF
  __int64 v50; // [rsp+90h] [rbp+18h]
  __int64 v51; // [rsp+98h] [rbp+20h]

  v2 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v50 = 16LL;
  v5 = *(_DWORD **)(v4 - 16);
  v6 = *(_DWORD **)v4;
  v7 = *(_DWORD **)(v4 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0) + 255;
  v9 = HIWORD(*v5);
  v10 = v9;
  if ( v7 == &v5[4 * (unsigned __int16)*v5 + 4] )
  {
    v48 = v6;
    v7 -= 4;
    v11 = (void **)(v5 + 2);
    v12 = v7 <= v5 + 4;
    v13 = (void **)&v49;
    v14 = (void **)(v7 - 2);
    if ( v12 )
      v14 = v11;
  }
  else
  {
    v49 = v6;
    v14 = (void **)(v7 + 2);
    v13 = (void **)&v48;
    v2 = 0LL;
    v10 = v9;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || v10 != 2 )
  {
    v15 = (unsigned __int64)*v14;
    *v13 = *v14;
  }
  else
  {
    v40 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v40 == -1 )
      v15 = (unsigned __int64)*v14;
    else
      v15 = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v40, v14, 0);
    *v13 = (void *)v15;
    if ( !v15 )
      return 0LL;
  }
  v16 = v48;
  v17 = v15 | v2;
  v18 = v49;
  v19 = (unsigned __int16)*v48;
  v20 = (unsigned __int16)*v49;
  v21 = v20 + v19;
  if ( v20 + v19 >= v8 && v21 < 2 * v8 - 1 )
  {
    v22 = v21 >> 1;
    if ( v20 > v19 )
    {
      v23 = v49;
      v24 = v20 - v22;
      v25 = v49;
      v18 = v48;
    }
    else
    {
      v23 = v48;
      v24 = v22 - v20;
      v25 = v49;
    }
    v26 = *((_BYTE *)v23 + 3);
    LOBYTE(v48) = v26;
    v27 = v19 < v20 ? v22 : 0;
    v28 = 0;
    v51 = v27;
    if ( v20 <= v19 )
      v28 = v20;
    v29 = v28;
    v47 = v28;
    if ( v26 )
    {
      v30 = 8;
      v31 = 2LL * (unsigned int)v27;
      v50 = 8LL;
      v32 = 8LL * (unsigned int)v29;
    }
    else
    {
      v31 = 4LL * (unsigned int)v27;
      v30 = 16;
      v32 = 16LL * (unsigned int)v29;
    }
    v33 = v32 + 16;
    v34 = v30 * v24;
    v35 = (char *)v18 + v33;
    v36 = (char *)&v23[v31 + 4];
    v46 = v35;
    LODWORD(v49) = v30 * v24;
    if ( v23 == v25 )
    {
      memmove(&v35[v34], v35, v30 * (unsigned __int16)*v18);
      v37 = *((_BYTE *)v23 + 3);
      v34 = (unsigned int)v49;
      v27 = v51;
      v35 = v46;
      v29 = v47;
      v30 = v50;
    }
    else
    {
      v37 = (char)v48;
      LODWORD(v49) = v30 * v24;
    }
    if ( v37 )
    {
      v38 = v34;
    }
    else
    {
      v41 = *v7;
      v42 = v24 - 1;
      if ( v23 == v25 )
      {
        v43 = 2LL * v42;
        v18[4 * v42 + 4] = v41;
        v44 = *((_QWORD *)v18 + 1);
      }
      else
      {
        v43 = 2 * v29;
        v35 += v30;
        v18[2 * v43 + 4] = v41;
        v44 = *((_QWORD *)v23 + 1);
      }
      *(_QWORD *)&v18[2 * v43 + 6] = v44;
      if ( v23 == v25 )
      {
        v45 = 2 * v27;
        v36 += v30;
        *v7 = v23[2 * v45 + 4];
        *((_QWORD *)v18 + 1) = *(_QWORD *)&v23[2 * v45 + 6];
      }
      else
      {
        v42 = v24 - 1;
        *v7 = v23[4 * v24];
        *((_QWORD *)v23 + 1) = *(_QWORD *)&v23[4 * v24 + 2];
      }
      v38 = v30 * v42;
    }
    memmove(v35, v36, v38);
    *(_WORD *)v18 += v24;
    *(_WORD *)v23 -= v24;
    if ( v23 == v16 )
      memmove(v36, &v36[(unsigned int)v49], (unsigned int)v50 * (unsigned __int16)*v23);
    if ( *((_BYTE *)v16 + 3) )
      *v7 = v16[4];
  }
  return v17;
}
