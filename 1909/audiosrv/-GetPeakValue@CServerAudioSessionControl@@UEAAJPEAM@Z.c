/*
 * XREFs of ?GetPeakValue@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800D24C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetPeakValue(CServerAudioSessionControl *this, float *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 9) + 424LL))(*((_QWORD *)this + 9), a2);
}
