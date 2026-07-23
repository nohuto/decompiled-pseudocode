/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1405D532C
 * Callers:
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140696678 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140804B64 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140107D40 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  ULONG_PTR v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 176) & 0x400000) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 96);
    if ( (v2 & 1) == 0 || v2 == 0xFFFFFFFFLL )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      {
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock);
        v4 = *(_QWORD *)(a1 + 96);
        if ( IsResourceAcquiredExclusiveLite )
          CmpDereferenceKeyControlBlockWithLock(v4);
        else
          CmpDelayDerefKeyControlBlock(v4);
        *(_WORD *)(a1 + 4) &= ~8u;
      }
    }
    else
    {
      v5 = 0LL;
      v6 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_DWORD *)(a1 + 88) )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8 * v5 + 8);
          if ( (v7 & 1) != 0 && v7 != 0xFFFFFFFFLL )
            ExFreePoolWithTag((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL), 0);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 88) );
        v2 = *(_QWORD *)(a1 + 96);
      }
      ExFreePoolWithTag((PVOID)(v2 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
    }
  }
}
