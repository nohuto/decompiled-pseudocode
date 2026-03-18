/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140122CA4
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016AF00 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 */

__int64 ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  int v1; // r10d
  __int64 v2; // r11
  int v3; // r9d
  __int64 result; // rax
  int v5; // edx

  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 1
    && ((unsigned __int8)(v1 + 4) & *(_BYTE *)(v2 + 26)) == 0 )
  {
    v1 += 4;
  }
  v3 = v1 | 2;
  result = *(unsigned __int8 *)(v2 + 27);
  if ( (*(_BYTE *)(v2 + 26) & 2) != 0 )
    v3 = v1;
  v5 = v3 | 0xFF00;
  if ( *(char *)(v0 + 195) <= (int)result )
    v5 = v3;
  if ( v5 )
    return ExpApplyPriorityBoost(v2, v5, v0);
  return result;
}
