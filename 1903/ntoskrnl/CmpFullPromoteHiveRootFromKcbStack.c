/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x14083E544
 * Callers:
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140630F78 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanupKeyNodeStack @ 0x140832E50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083320C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  __int64 v3; // r8
  struct _LOOKASIDE_LIST_EX *v4; // r9
  __int64 v5; // rdx
  int started; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 EntryAtLayerHeight; // rax
  char v11[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpInitializeKeyNodeStack(v11);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v11, a1, v3, v4);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v11);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v11, *(_WORD *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack((__int64)v11, v5, v7, v8);
  return (unsigned int)started;
}
