/*
 * XREFs of ?SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x1400345B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::SetVolumeCoefficients(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int a2,
        float *a3,
        __int64 *a4,
        enum AUDIO_CURVE_TYPE a5,
        __int64 *a6)
{
  int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v11 = *(_OWORD *)((char *)this - 120);
  EtwEventActivityIdControl(4LL, &v11);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, __int64 *))(**((_QWORD **)this + 10) + 32LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         (unsigned int)a5,
         a6);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_93f76506177b37e92d7cbf41d5171680_Traceguids, v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::SetVolumeCoefficients", 0xD9u, v9);
  }
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v9;
}
