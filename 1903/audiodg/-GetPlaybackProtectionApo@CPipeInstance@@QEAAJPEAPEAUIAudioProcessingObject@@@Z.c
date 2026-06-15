/*
 * XREFs of ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400357A0
 * Callers:
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003E38C (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::GetPlaybackProtectionApo(CPipeInstance *this, struct IAudioProcessingObject **a2)
{
  int v2; // ebx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IAudioProcessingObject **); // rcx

  *a2 = 0LL;
  v2 = -2147467263;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProcessingObject **))*((_QWORD *)this + 23);
  if ( !v3 || (v2 = (**v3)(v3, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a2), v2 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x38u,
        (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::GetPlaybackProtectionApo", 0x10AAu, v2);
  }
  return (unsigned int)v2;
}
