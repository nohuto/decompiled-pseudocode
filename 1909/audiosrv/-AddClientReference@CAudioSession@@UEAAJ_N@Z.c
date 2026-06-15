/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180047860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdd @ 0x1800D1F10 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 100);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 101);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      79LL,
      &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this,
      *((_DWORD *)this + 100),
      *((_DWORD *)this + 101));
  }
  return 0LL;
}
