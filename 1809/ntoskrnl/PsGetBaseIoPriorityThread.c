/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x1400B6DA0
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     IopCallDriverReference @ 0x1400B6B90 (IopCallDriverReference.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140108250 (ExpBoostIoAfterAcquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
