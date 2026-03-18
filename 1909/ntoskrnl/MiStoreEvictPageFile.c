/*
 * XREFs of MiStoreEvictPageFile @ 0x140131E08
 * Callers:
 *     MiStoreEvictThread @ 0x140193D70 (MiStoreEvictThread.c)
 * Callees:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140149080 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14014D254 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014D374 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014D404 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140158F04 (MiStoreSetPageFileRunEvicted.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned __int16 v2; // r13
  const signed __int32 *v3; // r14
  unsigned int v4; // esi
  unsigned int v5; // ebx
  const signed __int32 *v6; // r8
  const signed __int32 *v7; // rdx
  unsigned int v8; // edi
  int v9; // r9d
  unsigned int j; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // r12d
  void *v15; // rax
  const signed __int32 *v16; // rdx
  _QWORD v17[6]; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  union _MM_STORE_KEY v20; // [rsp+A0h] [rbp+50h] BYREF

  memset(v17, 0, 0x28uLL);
  v2 = *(_WORD *)(a1 + 204);
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, v17);
    v3 = (const signed __int32 *)v17[4];
    v4 = v17[3];
    v5 = 0;
    while ( 1 )
    {
      if ( v4 <= v5 )
      {
LABEL_28:
        v15 = (void *)MiDerefPageFileSpaceBitmaps(a1, v17, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        return;
      }
      v6 = &v3[(unsigned __int64)(v4 - 1) >> 5];
      v7 = &v3[(unsigned __int64)v5 >> 5];
      if ( v7 != v6 && (*v7 | dword_14037C900[v5 & 0x1F]) == -1 )
      {
        v5 = v5 - (v5 & 0x1F) + 32;
        for ( ++v7; v7 < v6 && *v7 == -1; ++v7 )
          v5 += 32;
      }
      while ( v5 < v4 && _bittest(v3, v5) )
        ++v5;
      v8 = 0;
      if ( v7 == v6 )
        goto LABEL_17;
      v9 = v5 & 0x1F;
      if ( (*v7 & ~dword_14037C900[v5 & 0x1F]) != 0 )
        goto LABEL_16;
      v8 = 32 - v9;
      if ( v9 != 33 )
        break;
LABEL_22:
      v3 = (const signed __int32 *)v17[4];
      v4 = v17[3];
LABEL_23:
      if ( v8 )
      {
        v19 = 0;
        v20.EntireKey = v5 | ((unsigned __int64)v2 << 60);
        SmKeyConvert(&v20, (union _SM_PAGE_KEY *)&v19);
        v18 = v19;
        v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v11, &v18, v8);
        for ( i = v8; ; v12 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v13, &v18, i) )
        {
          i -= v12;
          if ( !i )
            break;
          v18 += v12;
        }
        MiStoreSetPageFileRunEvicted(a1, v5, v8);
        if ( *(_DWORD *)(a1 + 200) )
        {
          v5 += v8;
          if ( v5 < v4 )
            continue;
        }
      }
      goto LABEL_28;
    }
    v16 = v7 + 1;
    while ( v16 < v6 && !*v16 )
    {
      ++v16;
      v8 += 32;
      if ( v8 == -1 )
        goto LABEL_22;
    }
LABEL_16:
    v3 = (const signed __int32 *)v17[4];
    v4 = v17[3];
LABEL_17:
    for ( j = v8 + v5; j < v4 && !_bittest(v3, j) && v8 != -1; ++j )
      ++v8;
    goto LABEL_23;
  }
}
