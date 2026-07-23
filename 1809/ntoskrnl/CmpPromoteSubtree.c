/*
 * XREFs of CmpPromoteSubtree @ 0x140806D3C
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x1407FBA24 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x1407FBAA4 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1407FBC48 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407FBC84 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140800AE4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140806468 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140806C2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  __int16 v4; // r14
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int16 *v8; // rdi
  __int16 *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // eax
  bool v13; // sf
  __int16 *v15; // [rsp+20h] [rbp-59h] BYREF
  __int64 v16; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v17[14]; // [rsp+30h] [rbp-49h] BYREF

  memset(v17, 0, 0x68uLL);
  LOWORD(v17[0]) = -2;
  CmpInitializeKeyNodeStack((char *)&v17[2]);
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    v5 = CmpSubtreeEnumeratorStartForKcbStack((__int64)v17, a1);
  }
  else
  {
    v4 = *a2;
    v5 = CmpSubtreeEnumeratorStartForKeyNodeStack((__int64)v17, a2);
  }
  v6 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v7 = CmpSubtreeEnumeratorAdvance((__int64)v17);
      v6 = v7;
      if ( v7 == -2147483622 )
      {
        v6 = 0;
        goto LABEL_20;
      }
      if ( v7 < 0 )
        goto LABEL_20;
      CmpSubtreeEnumeratorGetCurrentKeyStacks((__int16 *)v17, &v16, &v15);
      v8 = v15;
      v9 = *(__int16 **)(408LL * SLOWORD(v17[0]) + v17[12] - 392);
      v11 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v15, v4) + 16);
      if ( v16 )
        break;
      if ( v10 )
      {
        v12 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v10, v8, 1);
        goto LABEL_9;
      }
      v6 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v9, (__int64)v8);
      if ( v6 >= 0 )
      {
        v6 = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v9, v8);
        if ( v6 >= 0 )
          v6 = 0;
      }
      v13 = v6 < 0;
LABEL_16:
      if ( v13 )
        goto LABEL_20;
      if ( !v11 )
        CmpKeyEnumStackNotifyPromotion((__int16 *)(v17[12] + 56LL + 408LL * (SLOWORD(v17[0]) - 1)));
    }
    v12 = CmpPromoteSingleKeyFromKcbStacks(v10, v16, 1);
LABEL_9:
    v6 = v12;
    v13 = v12 < 0;
    goto LABEL_16;
  }
LABEL_20:
  CmpSubtreeEnumeratorCleanup((__int64)v17);
  return (unsigned int)v6;
}
