/*
 * XREFs of ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C013438C
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0007DE0 (NtUserCanBrokerForceForeground.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C0235150 (NtUserSetWindowArrangement.c)
 * Callees:
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsForegroundLocked @ 0x1C013441C (IsForegroundLocked.c)
 */

bool __fastcall CheckCanonicalForegroundAccess(char a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  LOBYTE(v9) = 0;
  if ( (unsigned int)IsForegroundLocked(v6, v5, v7, ThreadWin32Thread) && *(_QWORD *)(v8 + 416) != gppiInputProvider )
    return 0;
  if ( (*(_DWORD *)(v8 + 480) & 0x2C) != 0 || CanForceForeground(*(_QWORD *)(v8 + 416)) )
    return 1;
  if ( gptiForeground )
  {
    if ( *(_DWORD *)(gptiForeground + 624LL) <= 0x400u )
      v9 = *(_DWORD *)(gptiForeground + 640LL);
    if ( (v9 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(gptiForeground, v10, 2, 53, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      }
      return 1;
    }
  }
  return (a1 & 4) != 0;
}
