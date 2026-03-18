/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C001BDB0
 * Callers:
 *     GreSetBitmapOwner @ 0x1C00160B0 (GreSetBitmapOwner.c)
 *     HmgReplaceObject @ 0x1C0017040 (HmgReplaceObject.c)
 *     HmgLockAndModifyHandleType @ 0x1C0050290 (HmgLockAndModifyHandleType.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00509E4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C007E520 (GreSetSolidBrushLight.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, a4, a5);
  return this;
}
