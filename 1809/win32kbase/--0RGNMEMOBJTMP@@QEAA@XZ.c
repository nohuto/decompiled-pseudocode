/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007D424
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025890 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C00FC2F0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
