/*
 * XREFs of MiStoreEvictPageFile @ 0x140137F68
 * Callers:
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14014BA40 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14014F098 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014F9FC (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014FBA8 (MiDerefPageFileSpaceBitmaps.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140156F48 (MiStoreSetPageFileRunEvicted.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned __int16 v2; // r15
  unsigned int v3; // eax
  unsigned int NextForwardRunClearCapped; // edi
  unsigned int v5; // r14d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int i; // esi
  void *v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v12[6]; // [rsp+38h] [rbp-18h] BYREF
  union _MM_STORE_KEY v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+38h] BYREF
  int v15; // [rsp+90h] [rbp+40h] BYREF

  v2 = *(_WORD *)(a1 + 204);
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, v11);
    v3 = 0;
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)v12, v3, 0xFFFFFFFF, &v14);
      if ( !NextForwardRunClearCapped )
        break;
      v5 = v14;
      v13.EntireKey = v14 | ((unsigned __int64)v2 << 60);
      SmKeyConvert(&v13, (union _SM_PAGE_KEY *)&v15);
      *(_DWORD *)&v13.0 = v15;
      v7 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v6, &v13, NextForwardRunClearCapped);
      for ( i = NextForwardRunClearCapped; ; v7 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v8, &v13, i) )
      {
        i -= v7;
        if ( !i )
          break;
        *(_DWORD *)&v13.0 += v7;
      }
      MiStoreSetPageFileRunEvicted(a1, v5, NextForwardRunClearCapped);
      if ( !*(_DWORD *)(a1 + 200) )
        break;
      v3 = v5 + NextForwardRunClearCapped;
    }
    while ( v5 + NextForwardRunClearCapped < v12[0] );
    v10 = (void *)MiDerefPageFileSpaceBitmaps(a1, v11, 0LL);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
}
