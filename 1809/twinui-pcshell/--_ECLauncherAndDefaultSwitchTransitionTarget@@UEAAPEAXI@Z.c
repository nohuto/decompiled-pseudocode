/*
 * XREFs of ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x180328E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

CLauncherAndDefaultSwitchTransitionTarget *__fastcall CLauncherAndDefaultSwitchTransitionTarget::`vector deleting destructor'(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        char a2)
{
  *((_DWORD *)this + 9) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite((CLauncherAndDefaultSwitchTransitionTarget *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
