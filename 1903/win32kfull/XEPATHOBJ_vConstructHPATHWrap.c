/*
 * XREFs of XEPATHOBJ_vConstructHPATHWrap @ 0x1C0149550
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C01495B4 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATHWrap(EPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
