/*
 * XREFs of ??_ECLaunchToMonitor@@UEAAPEAXI@Z @ 0x18042EC90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180126BFC (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

CLaunchToMonitor *__fastcall CLaunchToMonitor::`vector deleting destructor'(CLaunchToMonitor *this, char a2)
{
  *((_DWORD *)this + 15) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CLaunchToMonitor *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
