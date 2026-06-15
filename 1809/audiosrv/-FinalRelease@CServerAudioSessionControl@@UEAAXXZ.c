/*
 * XREFs of ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180003AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

void __fastcall CServerAudioSessionControl::FinalRelease(CServerAudioSessionControl *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 104LL))((char *)this - 8);
}
