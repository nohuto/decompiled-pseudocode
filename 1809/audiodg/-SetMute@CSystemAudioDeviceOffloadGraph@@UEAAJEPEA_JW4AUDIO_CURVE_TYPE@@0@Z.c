/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x140039850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::SetMute(
        CSystemAudioDeviceOffloadGraph *this,
        char a2,
        __int64 *a3,
        enum AUDIO_CURVE_TYPE a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = *((_OWORD *)this - 8);
  EtwEventActivityIdControl(4LL, &v9);
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), v6);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_93f76506177b37e92d7cbf41d5171680_Traceguids, v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::SetMute", 0x156u, v7);
  }
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
