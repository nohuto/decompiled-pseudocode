/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x18004EB60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(CAudioSession *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      *((_QWORD *)this + 91));
  }
  v4 = *((_DWORD *)this + 180);
  if ( v4 )
    v5 = *((_DWORD *)this + 69);
  else
    v5 = *((_DWORD *)this + 178);
  *a2 = v5;
  return v4 != 0 ? 0x889000D : 0;
}
