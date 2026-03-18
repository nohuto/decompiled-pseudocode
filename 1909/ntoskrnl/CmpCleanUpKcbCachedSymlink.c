/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x140631974
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCommitSetValueKeyUoW @ 0x140635FA4 (CmpCommitSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DDAAC (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E3DB4 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083C868 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14066552C (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
