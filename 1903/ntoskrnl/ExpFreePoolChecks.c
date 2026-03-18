/*
 * XREFs of ExpFreePoolChecks @ 0x140117AE8
 * Callers:
 *     ExRemovePoolTag @ 0x140117888 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x14033F270 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeCheckForTimer @ 0x1402A6D58 (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14033AB64 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14033BE78 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14033C354 (ExpCheckForWorker.c)
 *     VfFreePoolNotification @ 0x14097D3B0 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a3 )
      ExpCheckForLookaside(BugCheckParameter3, a2);
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
