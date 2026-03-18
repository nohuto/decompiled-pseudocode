/*
 * XREFs of CmpPromoteSubtree @ 0x14083E9A4
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833210 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140833290 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14083345C (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140833498 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408382E4 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083E098 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083E884 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  __int64 v4; // r8
  struct _LOOKASIDE_LIST_EX *v5; // r9
  __int16 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  int v12; // eax
  __int16 *v13; // rdi
  __int16 *v14; // rsi
  __int64 v15; // r9
  __int64 v16; // r15
  int v17; // eax
  bool v18; // sf
  __int16 *v20; // [rsp+20h] [rbp-59h] BYREF
  __int64 v21; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v22[14]; // [rsp+30h] [rbp-49h] BYREF

  memset((char *)v22 + 2, 0, 0x66uLL);
  LOWORD(v22[0]) = -2;
  CmpInitializeKeyNodeStack((char *)&v22[2]);
  if ( a1 )
  {
    v6 = *(_WORD *)(a1 + 2);
    v7 = CmpSubtreeEnumeratorStartForKcbStack((__int64)v22, a1, v4, v5);
  }
  else
  {
    v6 = *a2;
    v7 = CmpSubtreeEnumeratorStartForKeyNodeStack((__int64)v22, a2, v4, v5);
  }
  v11 = v7;
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      v12 = CmpSubtreeEnumeratorAdvance((__int64)v22);
      v11 = v12;
      if ( v12 == -2147483622 )
      {
        v11 = 0;
        goto LABEL_20;
      }
      if ( v12 < 0 )
        goto LABEL_20;
      CmpSubtreeEnumeratorGetCurrentKeyStacks((__int16 *)v22, &v21, &v20);
      v13 = v20;
      v14 = *(__int16 **)(408LL * SLOWORD(v22[0]) + v22[12] - 392);
      v16 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v20, v6) + 16);
      if ( v21 )
        break;
      if ( v15 )
      {
        v17 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v15, v13, 1);
        goto LABEL_9;
      }
      v11 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v14, (__int64)v13);
      if ( v11 >= 0 )
      {
        v11 = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v14, v13);
        if ( v11 >= 0 )
          v11 = 0;
      }
      v18 = v11 < 0;
LABEL_16:
      if ( v18 )
        goto LABEL_20;
      if ( !v16 )
        CmpKeyEnumStackNotifyPromotion((__int16 *)(v22[12] + 56LL + 408LL * (SLOWORD(v22[0]) - 1)));
    }
    v17 = CmpPromoteSingleKeyFromKcbStacks(v15, v21, 1);
LABEL_9:
    v11 = v17;
    v18 = v17 < 0;
    goto LABEL_16;
  }
LABEL_20:
  CmpSubtreeEnumeratorCleanup((__int64)v22, v8, v9, v10);
  return (unsigned int)v11;
}
