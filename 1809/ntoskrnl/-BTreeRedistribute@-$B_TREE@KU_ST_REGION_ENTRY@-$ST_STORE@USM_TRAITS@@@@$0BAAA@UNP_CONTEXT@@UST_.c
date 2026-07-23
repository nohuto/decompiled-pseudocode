/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140157888
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140149964 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014AAF0 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140301BF4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r8
  unsigned int v5; // r11d
  _DWORD *v6; // r9
  _DWORD *v7; // rdx
  _DWORD *v8; // r12
  int v9; // esi
  int v10; // ecx
  char v11; // r8
  unsigned int v12; // esi
  void **v13; // rax
  bool v14; // cc
  void **v15; // rbx
  void **v16; // r9
  unsigned __int64 v17; // rax
  _DWORD *v18; // r15
  unsigned __int64 v19; // r13
  _DWORD *v20; // rdi
  unsigned int v21; // r8d
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  _DWORD *v25; // rbx
  unsigned int v26; // esi
  _DWORD *v27; // rbp
  char v28; // r10
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r10
  unsigned int v35; // edx
  char *v36; // r10
  char *v37; // r14
  char v38; // al
  size_t v39; // r8
  struct NP_CONTEXT::NP_CTX *v41; // rcx
  int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r9
  char *v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+28h] [rbp-50h]
  _DWORD *v49; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v50; // [rsp+88h] [rbp+10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+18h]
  __int64 v52; // [rsp+98h] [rbp+20h]

  v2 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v51 = 16LL;
  v6 = *(_DWORD **)(v4 - 16);
  v7 = *(_DWORD **)v4;
  v8 = *(_DWORD **)(v4 - 8);
  v9 = -(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0);
  v10 = HIWORD(*v6);
  v11 = v10;
  v12 = (v9 & 0x2FD) + 255;
  if ( v8 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v49 = v7;
    v8 -= 4;
    v13 = (void **)(v6 + 2);
    v14 = v8 <= v6 + 4;
    v15 = (void **)&v50;
    v16 = (void **)(v8 - 2);
    if ( v14 )
      v16 = v13;
  }
  else
  {
    v50 = v7;
    v16 = (void **)(v8 + 2);
    v15 = (void **)&v49;
    v2 = 0LL;
    v11 = v10;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || v11 != 2 )
  {
    v17 = (unsigned __int64)*v16;
    *v15 = *v16;
  }
  else
  {
    v41 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v41 == -1 )
    {
      v17 = (unsigned __int64)*v16;
    }
    else
    {
      v17 = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v41, v16, 0);
      v5 = 16;
    }
    *v15 = (void *)v17;
    if ( !v17 )
      return 0LL;
  }
  v18 = v49;
  v19 = v17 | v2;
  v20 = v50;
  v21 = (unsigned __int16)*v49;
  v22 = (unsigned __int16)*v50;
  v23 = v22 + v21;
  if ( v22 + v21 >= v12 && v23 < 2 * v12 - 1 )
  {
    v24 = v23 >> 1;
    if ( v22 > v21 )
    {
      v25 = v50;
      v26 = v22 - v24;
      v27 = v50;
      v20 = v49;
    }
    else
    {
      v25 = v49;
      v26 = v24 - v22;
      v27 = v50;
    }
    v28 = *((_BYTE *)v25 + 3);
    LOBYTE(v49) = v28;
    v29 = v21 < v22 ? v24 : 0;
    v30 = 0;
    v52 = v29;
    if ( v22 <= v21 )
      v30 = v22;
    v31 = v30;
    v48 = v30;
    if ( v28 )
    {
      v5 = 4;
      v32 = (unsigned int)v29;
      v51 = 4LL;
      v33 = 4LL * (unsigned int)v31;
    }
    else
    {
      v32 = 4LL * (unsigned int)v29;
      v33 = 16LL * (unsigned int)v31;
    }
    v34 = v33 + 16;
    v35 = v5 * v26;
    v36 = (char *)v20 + v34;
    v37 = (char *)&v25[v32 + 4];
    v47 = v36;
    LODWORD(v50) = v5 * v26;
    if ( v25 == v27 )
    {
      memmove(&v36[v35], v36, v5 * (unsigned __int16)*v20);
      v38 = *((_BYTE *)v25 + 3);
      v35 = (unsigned int)v50;
      v29 = v52;
      v36 = v47;
      v31 = v48;
      v5 = v51;
    }
    else
    {
      v38 = (char)v49;
      LODWORD(v50) = v5 * v26;
    }
    if ( v38 )
    {
      v39 = v35;
    }
    else
    {
      v42 = *v8;
      v43 = v26 - 1;
      if ( v25 == v27 )
      {
        v44 = 2LL * v43;
        v20[4 * v43 + 4] = v42;
        v45 = *((_QWORD *)v20 + 1);
      }
      else
      {
        v44 = 2 * v31;
        v36 += v5;
        v20[2 * v44 + 4] = v42;
        v45 = *((_QWORD *)v25 + 1);
      }
      *(_QWORD *)&v20[2 * v44 + 6] = v45;
      if ( v25 == v27 )
      {
        v46 = 2 * v29;
        v37 += v5;
        *v8 = v25[2 * v46 + 4];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v25[2 * v46 + 6];
      }
      else
      {
        v43 = v26 - 1;
        *v8 = v25[4 * v26];
        *((_QWORD *)v25 + 1) = *(_QWORD *)&v25[4 * v26 + 2];
      }
      v39 = v5 * v43;
    }
    memmove(v36, v37, v39);
    *(_WORD *)v20 += v26;
    *(_WORD *)v25 -= v26;
    if ( v25 == v18 )
      memmove(v37, &v37[(unsigned int)v50], (unsigned int)v51 * (unsigned __int16)*v25);
    if ( *((_BYTE *)v18 + 3) )
      *v8 = v18[4];
  }
  return v19;
}
