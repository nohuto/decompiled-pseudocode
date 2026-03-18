/*
 * XREFs of ?SetTimer@CWatchdogTimer@@AEAAXHH@Z @ 0x18019334C
 * Callers:
 *     ??1CWatchdogTimer@@UEAA@XZ @ 0x1801932A0 (--1CWatchdogTimer@@UEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CWatchdogTimer::SetTimer(CWatchdogTimer *this, int a2, LONG a3)
{
  void *v3; // rcx
  signed int LastError; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)this + 24) = 1;
  v3 = (void *)*((_QWORD *)this + 2);
  DueTime.QuadPart = -10000LL * a2;
  if ( !SetWaitableTimer(v3, &DueTime, a3, 0LL, 0LL, 0) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
}
