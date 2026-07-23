/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x140806D3C (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x1407FABA0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1407FB760 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140806468 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // r15
  char v6; // si
  ULONG_PTR KcbAtLayerHeight; // r14
  __int16 v8; // dx
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 EntryAtLayerHeight; // r13
  __int16 v12; // dx
  __int64 v13; // r15
  __int16 v16[40]; // [rsp+30h] [rbp-89h] BYREF
  __int16 v17[40]; // [rsp+80h] [rbp-39h] BYREF

  CmpInitializeKeyNodeStack((char *)v17);
  CmpInitializeKeyNodeStack((char *)v16);
  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
  v9 = CmpGetKcbAtLayerHeight(a2, v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v17, a1, 0LL);
  if ( started < 0 )
    goto LABEL_12;
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v16, a2, 0LL);
  if ( started < 0 )
    goto LABEL_12;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v17, v5);
  v13 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v16, v12);
  if ( *(_DWORD *)(v9 + 32) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v17, (__int64)v16);
    if ( started < 0 )
      goto LABEL_12;
    v6 = 1;
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(v13 + 8);
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v17, v16);
    if ( started < 0 )
      goto LABEL_10;
    v6 = 1;
  }
  started = 0;
LABEL_10:
  if ( v6 )
  {
    CmpRebuildKcbCacheFromNode(v9, *(_QWORD *)(v13 + 16));
    ++*(_QWORD *)(v9 + 296);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16));
    ++*(_QWORD *)(KcbAtLayerHeight + 296);
  }
LABEL_12:
  CmpCleanupKeyNodeStack((__int64)v16);
  CmpCleanupKeyNodeStack((__int64)v17);
  return (unsigned int)started;
}
