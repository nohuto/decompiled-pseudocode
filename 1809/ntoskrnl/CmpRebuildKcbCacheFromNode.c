/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x1405AD984
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140805FC4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140806C2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // al
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  __int64 result; // rax
  ULONG_PTR v9; // rdx

  v2 = a2;
  v3 = *(_BYTE *)(a2 + 13) & 3;
  LOBYTE(a2) = 1;
  *(_BYTE *)(BugCheckParameter3 + 57) = v3;
  CmpCleanUpSubKeyInfo(BugCheckParameter3, a2);
  v5 = *(_DWORD *)(BugCheckParameter3 + 176);
  if ( (v5 & 0x400000) == 0 )
  {
    CmpCleanUpKcbValueCache(BugCheckParameter3);
    v6 = *(_DWORD *)(v2 + 36);
    v5 = *(_DWORD *)(BugCheckParameter3 + 176);
    *(_QWORD *)(BugCheckParameter3 + 96) = *(unsigned int *)(v2 + 40);
    *(_DWORD *)(BugCheckParameter3 + 88) = v6;
  }
  *(_QWORD *)(BugCheckParameter3 + 160) = *(_QWORD *)(v2 + 4);
  *(_WORD *)(BugCheckParameter3 + 168) = *(_WORD *)(v2 + 52);
  *(_WORD *)(BugCheckParameter3 + 170) = *(_WORD *)(v2 + 60);
  *(_DWORD *)(BugCheckParameter3 + 172) = *(_DWORD *)(v2 + 64);
  v7 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)*(_WORD *)(v2 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 176) = v7;
  *(_DWORD *)(BugCheckParameter3 + 176) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_WORD *)(v2 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 177) = *(_BYTE *)(v2 + 55);
  result = *(unsigned __int16 *)(v2 + 2);
  *(_WORD *)(BugCheckParameter3 + 178) = result;
  v9 = *(unsigned int *)(v2 + 44);
  if ( (_DWORD)v9 != -1 )
    return CmpAssignSecurityToKcb(BugCheckParameter3, v9, 0);
  *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  return result;
}
