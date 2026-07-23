/*
 * XREFs of CmpIsKeyDeleted @ 0x1406992E0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromCache @ 0x1405D89A0 (CmpQueryKeyDataFromCache.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BE7A8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSyncKcbCacheForHive @ 0x1407F4BA0 (CmpSyncKcbCacheForHive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpIsKcbDiscarded @ 0x1405820B4 (CmpIsKcbDiscarded.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6E8C (CmpSetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _PRIVILEGE_SET *v6; // rbx
  struct _PRIVILEGE_SET *v7; // rbp
  __int16 v8; // si
  __int16 v9; // dx
  SIZE_T v10; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v12; // r10
  __int64 v13; // r10
  __int16 v14; // dx
  char IsKeyStackDeleted; // di
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  struct _PRIVILEGE_SET *v19; // [rsp+38h] [rbp-20h]

  if ( CmpIsKcbDiscarded(a1) )
    return 1;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_WORD *)(v4 + 58);
  v16 = 4294901760LL;
  v9 = v8;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( v8 < 2 || v8 == 1 )
    goto LABEL_7;
  v10 = 8LL * (unsigned int)(v8 - 1);
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x35364D43u);
  v7 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v10);
    v9 = *(_WORD *)(a1 + 58);
LABEL_7:
    LOWORD(v16) = v8;
    v6 = v7;
    v19 = v7;
    WORD1(v16) = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(a1 + 184);
      if ( v12 )
      {
        do
        {
          CmpSetKcbAtLayerHeight((__int64)&v16, v9, *(_QWORD *)(v12 + 16));
          v12 = *(_QWORD *)(v13 + 24);
          v9 = v14 - 1;
        }
        while ( v12 );
        v6 = v19;
      }
    }
    else
    {
      v17 = a1;
    }
  }
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v16, a2);
  if ( v6 )
    CmSiFreeMemory(v6);
  return IsKeyStackDeleted;
}
