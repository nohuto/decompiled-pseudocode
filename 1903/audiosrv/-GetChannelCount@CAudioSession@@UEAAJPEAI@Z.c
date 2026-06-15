/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800CE150
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x1800C50DC (WPP_SF_Sd.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(const wchar_t **this, unsigned int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 101);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this[91]);
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 240);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
