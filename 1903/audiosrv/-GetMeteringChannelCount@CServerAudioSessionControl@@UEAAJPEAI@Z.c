/*
 * XREFs of ?GetMeteringChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x1800D28A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMeteringChannelCount(
        CServerAudioSessionControl *this,
        unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 432LL))(
           *((_QWORD *)this + 9),
           a2);
}
