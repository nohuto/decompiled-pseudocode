/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152BF8
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1401514CC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152710 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F318 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r8
  __int64 v5; // r11
  _DWORD *v6; // rdx
  _DWORD *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  void **v10; // rbx
  void **v11; // r9
  unsigned __int64 v12; // rax
  _DWORD *v13; // r12
  unsigned __int64 v14; // r13
  _DWORD *v15; // rdi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _DWORD *v20; // rbx
  unsigned int v21; // esi
  _DWORD *v22; // r15
  char v23; // r10
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r11d
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r10
  unsigned int v31; // edx
  char *v32; // r10
  char *v33; // rbp
  char v34; // al
  size_t v35; // r8
  struct NP_CONTEXT::NP_CTX *v37; // rcx
  int v38; // eax
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  char *v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  _DWORD *v45; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v46; // [rsp+88h] [rbp+10h] BYREF
  __int64 v47; // [rsp+90h] [rbp+18h]
  __int64 v48; // [rsp+98h] [rbp+20h]

  v3 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = *(_QWORD *)(v4 - 16);
  v6 = *(_DWORD **)v4;
  v7 = *(_DWORD **)(v4 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0) + 255;
  v9 = (unsigned __int16)*(_DWORD *)v5 + 1LL;
  v47 = 16LL;
  if ( v7 == (_DWORD *)(v5 + 16 * v9) )
  {
    v7 -= 4;
    v45 = v6;
    v10 = (void **)&v46;
    v11 = (void **)(v7 - 2);
    if ( (unsigned __int64)v7 <= v5 + 16 )
      v11 = (void **)(v5 + 8);
  }
  else
  {
    v46 = v6;
    v11 = (void **)(v7 + 2);
    v10 = (void **)&v45;
    v3 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v12 = (unsigned __int64)*v11;
    *v10 = *v11;
  }
  else
  {
    v37 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v37 == -1 )
      v12 = (unsigned __int64)*v11;
    else
      v12 = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v37, v11, 0);
    *v10 = (void *)v12;
    if ( !v12 )
      return 0LL;
  }
  v13 = v45;
  v14 = v12 | v3;
  v15 = v46;
  v16 = (unsigned __int16)*v45;
  v17 = (unsigned __int16)*v46;
  v18 = v17 + v16;
  if ( v17 + v16 >= v8 && v18 < 2 * v8 - 1 )
  {
    v19 = v18 >> 1;
    if ( v17 > v16 )
    {
      v20 = v46;
      v21 = v17 - v19;
      v22 = v46;
      v15 = v45;
    }
    else
    {
      v20 = v45;
      v21 = v19 - v17;
      v22 = v46;
    }
    v23 = *((_BYTE *)v20 + 3);
    LOBYTE(v45) = v23;
    v24 = v16 < v17 ? v19 : 0;
    v25 = 0;
    v48 = v24;
    if ( v17 <= v16 )
      v25 = v17;
    v26 = v25;
    v44 = v25;
    if ( v23 )
    {
      v27 = 8;
      v28 = 2LL * (unsigned int)v24;
      v47 = 8LL;
      v29 = 8LL * (unsigned int)v26;
    }
    else
    {
      v28 = 4LL * (unsigned int)v24;
      v27 = 16;
      v29 = 16LL * (unsigned int)v26;
    }
    v30 = v29 + 16;
    v31 = v27 * v21;
    v32 = (char *)v15 + v30;
    v33 = (char *)&v20[v28 + 4];
    v43 = v32;
    LODWORD(v46) = v27 * v21;
    if ( v20 == v22 )
    {
      memmove(&v32[v31], v32, v27 * (unsigned __int16)*v15);
      v34 = *((_BYTE *)v20 + 3);
      v31 = (unsigned int)v46;
      v24 = v48;
      v32 = v43;
      v27 = v47;
      v26 = v44;
    }
    else
    {
      v34 = (char)v45;
      LODWORD(v46) = v27 * v21;
    }
    if ( v34 )
    {
      v35 = v31;
    }
    else
    {
      v38 = *v7;
      v39 = v21 - 1;
      if ( v20 == v22 )
      {
        v40 = 2LL * v39;
        v15[4 * v39 + 4] = v38;
        v41 = *((_QWORD *)v15 + 1);
      }
      else
      {
        v40 = 2 * v26;
        v32 += v27;
        v15[2 * v40 + 4] = v38;
        v41 = *((_QWORD *)v20 + 1);
      }
      *(_QWORD *)&v15[2 * v40 + 6] = v41;
      if ( v20 == v22 )
      {
        v42 = 2 * v24;
        v33 += v27;
        *v7 = v20[2 * v42 + 4];
        *((_QWORD *)v15 + 1) = *(_QWORD *)&v20[2 * v42 + 6];
      }
      else
      {
        v39 = v21 - 1;
        *v7 = v20[4 * v21];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v21 + 2];
      }
      v35 = v27 * v39;
    }
    memmove(v32, v33, v35);
    *(_WORD *)v15 += v21;
    *(_WORD *)v20 -= v21;
    if ( v20 == v13 )
      memmove(v33, &v33[(unsigned int)v46], (unsigned int)v47 * (unsigned __int16)*v20);
    if ( *((_BYTE *)v13 + 3) )
      *v7 = v13[4];
  }
  return v14;
}
