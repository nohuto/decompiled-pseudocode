/*
 * XREFs of ExpApplyPrewaitBoost @ 0x1400D1C58
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1950 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140165F80 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 */

void ExpApplyPrewaitBoost()
{
  int v0; // r8d
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // ecx
  int v4; // edx

  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 1
    && ((unsigned __int8)(v0 + 4) & *(_BYTE *)(v1 + 26)) == 0 )
  {
    v0 += 4;
  }
  v3 = v0 | 2;
  if ( (*(_WORD *)(v1 + 26) & 2) != 0 )
    v3 = v0;
  v4 = v3 | 0xFF00;
  if ( *(char *)(v2 + 195) <= HIBYTE(*(unsigned __int16 *)(v1 + 26)) )
    v4 = v3;
  if ( v4 )
    ExpApplyPriorityBoost(v1, v4, v2);
}
