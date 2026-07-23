/*
 * XREFs of ExpFreePoolChecks @ 0x14009D6BC
 * Callers:
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EE54 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x140290528 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14031BE44 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14031CDF4 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14031D2D4 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x140938E9C (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a3 )
      ExpCheckForLookaside();
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a2);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfFreePoolNotification(BugCheckParameter3, a2);
  return result;
}
