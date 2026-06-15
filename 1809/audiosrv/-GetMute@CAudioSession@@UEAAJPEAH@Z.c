/*
 * XREFs of ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x180003370
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetMute(CAudioSession *this, int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 848);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      *((_QWORD *)this + 96),
      *((_DWORD *)this + 223));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 223);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
