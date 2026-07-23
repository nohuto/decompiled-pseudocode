/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401457A0
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140149458 (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014A9E0 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140301BF4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r8
  unsigned int v5; // r11d
  _DWORD *v6; // r9
  size_t v7; // rdx
  _DWORD *v8; // r12
  int v9; // esi
  int v10; // ecx
  char v11; // r8
  unsigned int v12; // esi
  void **v13; // r9
  size_t *p_Size; // rbx
  size_t v15; // rax
  _DWORD *v16; // r15
  unsigned __int64 v17; // r13
  size_t v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  size_t v23; // rbx
  unsigned int v24; // esi
  size_t v25; // rbp
  char v26; // r10
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r10
  unsigned int v33; // edx
  char *v34; // r10
  char *v35; // r14
  char v36; // al
  size_t v37; // r8
  void **v39; // rax
  bool v40; // cc
  struct NP_CONTEXT::NP_CTX *v41; // rcx
  int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r9
  char *v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-50h]
  _DWORD *v49; // [rsp+80h] [rbp+8h] BYREF
  size_t Size; // [rsp+88h] [rbp+10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+18h]
  __int64 v52; // [rsp+98h] [rbp+20h]

  v2 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v51 = 16LL;
  v6 = *(_DWORD **)(v4 - 16);
  v7 = *(_QWORD *)v4;
  v8 = *(_DWORD **)(v4 - 8);
  v9 = -(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0);
  v10 = HIWORD(*v6);
  v11 = v10;
  v12 = (v9 & 0x2FD) + 255;
  if ( v8 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v49 = (_DWORD *)v7;
    v8 -= 4;
    v39 = (void **)(v6 + 2);
    v40 = v8 <= v6 + 4;
    p_Size = &Size;
    v13 = (void **)(v8 - 2);
    if ( v40 )
      v13 = v39;
  }
  else
  {
    Size = v7;
    v13 = (void **)(v8 + 2);
    p_Size = (size_t *)&v49;
    v2 = 0LL;
    v11 = v10;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || v11 != 2 )
  {
    v15 = (size_t)*v13;
    *p_Size = (size_t)*v13;
  }
  else
  {
    v41 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v41 == -1 )
    {
      v15 = (size_t)*v13;
    }
    else
    {
      v15 = (size_t)NP_CONTEXT::NpLeafRefInternal(v41, v13, 0);
      v5 = 16;
    }
    *p_Size = v15;
    if ( !v15 )
      return 0LL;
  }
  v16 = v49;
  v17 = v15 | v2;
  v18 = Size;
  v19 = (unsigned __int16)*v49;
  v20 = (unsigned __int16)*(_DWORD *)Size;
  v21 = v20 + v19;
  if ( v20 + v19 >= v12 && v21 < 2 * v12 - 1 )
  {
    v22 = v21 >> 1;
    if ( v20 <= v19 )
    {
      v23 = (size_t)v49;
      v24 = v22 - v20;
      v25 = Size;
    }
    else
    {
      v23 = Size;
      v24 = v20 - v22;
      v25 = Size;
      v18 = (size_t)v49;
    }
    v26 = *(_BYTE *)(v23 + 3);
    LOBYTE(v49) = v26;
    v27 = v19 < v20 ? v22 : 0;
    v28 = 0;
    v52 = v27;
    if ( v20 <= v19 )
      v28 = v20;
    v29 = v28;
    v48 = v28;
    if ( v26 )
    {
      v5 = 4;
      v30 = 4LL * (unsigned int)v27;
      v51 = 4LL;
      v31 = 4LL * (unsigned int)v29;
    }
    else
    {
      v30 = 16LL * (unsigned int)v27;
      v31 = 16LL * (unsigned int)v29;
    }
    v32 = v31 + 16;
    v33 = v5 * v24;
    v34 = (char *)(v18 + v32);
    v35 = (char *)(v30 + v23 + 16);
    v47 = v34;
    LODWORD(Size) = v5 * v24;
    if ( v23 == v25 )
    {
      memmove(&v34[v33], v34, v5 * (unsigned __int16)*(_DWORD *)v18);
      v36 = *(_BYTE *)(v23 + 3);
      v33 = Size;
      v27 = v52;
      v34 = v47;
      v29 = v48;
      v5 = v51;
    }
    else
    {
      v36 = (char)v49;
      LODWORD(Size) = v5 * v24;
    }
    if ( v36 )
    {
      v37 = v33;
    }
    else
    {
      v42 = *v8;
      v43 = v24 - 1;
      if ( v23 == v25 )
      {
        v44 = 2LL * v43;
        *(_DWORD *)(v18 + 16LL * v43 + 16) = v42;
        v45 = *(_QWORD *)(v18 + 8);
      }
      else
      {
        v44 = 2 * v29;
        v34 += v5;
        *(_DWORD *)(v18 + 8 * v44 + 16) = v42;
        v45 = *(_QWORD *)(v23 + 8);
      }
      *(_QWORD *)(v18 + 8 * v44 + 24) = v45;
      if ( v23 == v25 )
      {
        v46 = 2 * v27;
        v35 += v5;
        *v8 = *(_DWORD *)(v23 + 8 * v46 + 16);
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(v23 + 8 * v46 + 24);
      }
      else
      {
        v43 = v24 - 1;
        *v8 = *(_DWORD *)(v23 + 16LL * (v24 - 1) + 16);
        *(_QWORD *)(v23 + 8) = *(_QWORD *)(v23 + 16LL * (v24 - 1) + 24);
      }
      v37 = v5 * v43;
    }
    memmove(v34, v35, v37);
    *(_WORD *)v18 += v24;
    *(_WORD *)v23 -= v24;
    if ( (_DWORD *)v23 == v16 )
      memmove(v35, &v35[(unsigned int)Size], (unsigned int)v51 * (unsigned __int16)*(_DWORD *)v23);
    if ( *((_BYTE *)v16 + 3) )
      *v8 = v16[4];
  }
  return v17;
}
