/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C007E6F0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C007E720 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
