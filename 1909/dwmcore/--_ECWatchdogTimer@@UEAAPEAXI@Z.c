/*
 * XREFs of ??_ECWatchdogTimer@@UEAAPEAXI@Z @ 0x180191BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x180191B60 (--1CWatchdogTimer@@UEAA@XZ.c)
 */

CWatchdogTimer *__fastcall CWatchdogTimer::`vector deleting destructor'(CWatchdogTimer *this, char a2)
{
  CWatchdogTimer::~CWatchdogTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
