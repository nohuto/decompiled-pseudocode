/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800C04F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(const wchar_t **this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      this[96]);
  }
  v4 = *((_DWORD *)this + 190);
  if ( v4 )
    v5 = *((_DWORD *)this + 69);
  else
    v5 = *((_DWORD *)this + 188);
  *a2 = v5;
  return v4 != 0 ? 0x889000D : 0;
}
