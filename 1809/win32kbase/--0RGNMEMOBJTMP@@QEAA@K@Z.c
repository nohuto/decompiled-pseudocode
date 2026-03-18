/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002539C
 * Callers:
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, a2);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
