/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x18006C700
 * Callers:
 *     ??_ECLaunchActivatedEventArgs@@GBAA@EAAPEAXI@Z @ 0x1800C1950 (--_ECLaunchActivatedEventArgs@@GBAA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x18006C738 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  CLaunchActivatedEventArgs::~CLaunchActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
