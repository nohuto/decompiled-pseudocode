/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140152F08
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140151000 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14015252C (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F318 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r8
  __int64 v5; // r11
  _DWORD *v6; // rdx
  _DWORD *v7; // r14
  int v8; // esi
  _DWORD *v9; // rcx
  unsigned int v10; // esi
  void **v11; // rbx
  void **v12; // r9
  unsigned __int64 v13; // rax
  _DWORD *v14; // r12
  unsigned __int64 v15; // r13
  _DWORD *v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  _DWORD *v21; // rbx
  unsigned int v22; // esi
  _DWORD *v23; // r15
  char v24; // r10
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // r11d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r10
  unsigned int v32; // edx
  char *v33; // r10
  char *v34; // rbp
  char v35; // al
  size_t v36; // r8
  struct NP_CONTEXT::NP_CTX *v38; // rcx
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r9
  char *v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  _DWORD *v46; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v47; // [rsp+88h] [rbp+10h] BYREF
  __int64 v48; // [rsp+90h] [rbp+18h]
  __int64 v49; // [rsp+98h] [rbp+20h]

  v3 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = *(_QWORD *)(v4 - 16);
  v6 = *(_DWORD **)v4;
  v7 = *(_DWORD **)(v4 - 8);
  v8 = *(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0 ? 0x2FD : 0;
  v9 = (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL));
  v48 = 16LL;
  v10 = v8 + 255;
  if ( v7 == v9 )
  {
    v7 -= 4;
    v46 = v6;
    v11 = (void **)&v47;
    v12 = (void **)(v7 - 2);
    if ( (unsigned __int64)v7 <= v5 + 16 )
      v12 = (void **)(v5 + 8);
  }
  else
  {
    v47 = v6;
    v12 = (void **)(v7 + 2);
    v11 = (void **)&v46;
    v3 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v13 = (unsigned __int64)*v12;
    *v11 = *v12;
  }
  else
  {
    v38 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v38 == -1 )
      v13 = (unsigned __int64)*v12;
    else
      v13 = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v38, v12, 0);
    *v11 = (void *)v13;
    if ( !v13 )
      return 0LL;
  }
  v14 = v46;
  v15 = v13 | v3;
  v16 = v47;
  v17 = (unsigned __int16)*v46;
  v18 = (unsigned __int16)*v47;
  v19 = v18 + v17;
  if ( v18 + v17 >= v10 && v19 < 2 * v10 - 1 )
  {
    v20 = v19 >> 1;
    if ( v18 > v17 )
    {
      v21 = v47;
      v22 = v18 - v20;
      v23 = v47;
      v16 = v46;
    }
    else
    {
      v21 = v46;
      v22 = v20 - v18;
      v23 = v47;
    }
    v24 = *((_BYTE *)v21 + 3);
    LOBYTE(v46) = v24;
    v25 = v17 < v18 ? v20 : 0;
    v26 = 0;
    v49 = v25;
    if ( v18 <= v17 )
      v26 = v18;
    v27 = v26;
    v45 = v26;
    if ( v24 )
    {
      v28 = 4;
      v29 = (unsigned int)v25;
      v48 = 4LL;
      v30 = 4LL * (unsigned int)v27;
    }
    else
    {
      v29 = 4LL * (unsigned int)v25;
      v28 = 16;
      v30 = 16LL * (unsigned int)v27;
    }
    v31 = v30 + 16;
    v32 = v28 * v22;
    v33 = (char *)v16 + v31;
    v34 = (char *)&v21[v29 + 4];
    v44 = v33;
    LODWORD(v47) = v28 * v22;
    if ( v21 == v23 )
    {
      memmove(&v33[v32], v33, v28 * (unsigned __int16)*v16);
      v35 = *((_BYTE *)v21 + 3);
      v32 = (unsigned int)v47;
      v25 = v49;
      v33 = v44;
      v28 = v48;
      v27 = v45;
    }
    else
    {
      v35 = (char)v46;
      LODWORD(v47) = v28 * v22;
    }
    if ( v35 )
    {
      v36 = v32;
    }
    else
    {
      v39 = *v7;
      v40 = v22 - 1;
      if ( v21 == v23 )
      {
        v41 = 2LL * v40;
        v16[4 * v40 + 4] = v39;
        v42 = *((_QWORD *)v16 + 1);
      }
      else
      {
        v41 = 2 * v27;
        v33 += v28;
        v16[2 * v41 + 4] = v39;
        v42 = *((_QWORD *)v21 + 1);
      }
      *(_QWORD *)&v16[2 * v41 + 6] = v42;
      if ( v21 == v23 )
      {
        v43 = 2 * v25;
        v34 += v28;
        *v7 = v21[2 * v43 + 4];
        *((_QWORD *)v16 + 1) = *(_QWORD *)&v21[2 * v43 + 6];
      }
      else
      {
        v40 = v22 - 1;
        *v7 = v21[4 * v22];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v21[4 * v22 + 2];
      }
      v36 = v28 * v40;
    }
    memmove(v33, v34, v36);
    *(_WORD *)v16 += v22;
    *(_WORD *)v21 -= v22;
    if ( v21 == v14 )
      memmove(v34, &v34[(unsigned int)v47], (unsigned int)v48 * (unsigned __int16)*v21);
    if ( *((_BYTE *)v14 + 3) )
      *v7 = v14[4];
  }
  return v15;
}
