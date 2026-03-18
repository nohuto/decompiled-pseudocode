/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanupKeyNodeStack @ 0x1408324B0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083286C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140832F58 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083E098 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // r14
  char v6; // si
  ULONG_PTR KcbAtLayerHeight; // r15
  __int16 v8; // dx
  ULONG_PTR v9; // rdi
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  __int64 v12; // rdx
  int started; // ebx
  __int64 v14; // r8
  struct _LOOKASIDE_LIST_EX *v15; // r9
  __int64 EntryAtLayerHeight; // r13
  __int16 v17; // dx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int16 v24[40]; // [rsp+30h] [rbp-89h] BYREF
  __int16 v25[40]; // [rsp+80h] [rbp-39h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  CmpInitializeKeyNodeStack((char *)v25);
  CmpInitializeKeyNodeStack((char *)v24);
  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
  v9 = CmpGetKcbAtLayerHeight(a2, v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v25, a1, v10, v11);
  if ( started < 0 )
    goto LABEL_12;
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v24, a2, v14, v15);
  if ( started < 0 )
    goto LABEL_12;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v25, v5);
  v18 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v24, v17);
  if ( *(_DWORD *)(v9 + 40) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v25, (__int64)v24);
    if ( started < 0 )
      goto LABEL_12;
    v6 = 1;
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v18 + 8);
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)v25, v24);
    if ( started < 0 )
      goto LABEL_10;
    v6 = 1;
  }
  started = 0;
LABEL_10:
  if ( v6 )
  {
    ++*(_QWORD *)(v9 + 304);
    CmpRebuildKcbCacheFromNode(v9, *(_QWORD *)(v18 + 16), 0LL, 0);
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
  }
LABEL_12:
  CmpCleanupKeyNodeStack((__int64)v24, v12, v14, (__int64)v15);
  CmpCleanupKeyNodeStack((__int64)v25, v19, v20, v21);
  return (unsigned int)started;
}
