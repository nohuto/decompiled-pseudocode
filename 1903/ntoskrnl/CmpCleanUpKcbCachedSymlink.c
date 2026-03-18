/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x14062DB24
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140630F78 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCommitSetValueKeyUoW @ 0x140632124 (CmpCommitSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E2734 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083D208 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14065242C (CmpDelayDerefKeyControlBlock.c)
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
