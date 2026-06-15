/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140030F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14000EED8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x1400108CC (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002ECEC (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x14002F384 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::Initialize(
        CSystemAudioDeviceExclusive *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  int v8; // ebx
  int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v11 = v4;
  EtwEventActivityIdControl(4LL, &v11);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  *((_QWORD *)this + 45) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 46) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 95) = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_4:
    (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 208LL))(this);
    goto LABEL_5;
  }
  v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
LABEL_5:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_f0d7d168ecd8305ac247a74819cf4a63_Traceguids,
        v8,
        (__int64)"CSystemAudioDeviceExclusive::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::Initialize", 0x81u, v8);
  }
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v8;
}
