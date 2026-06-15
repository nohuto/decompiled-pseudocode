/*
 * XREFs of ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140014220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::InnerInitializeAPO(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v8; // ebx
  __int128 v10; // [rsp+48h] [rbp-40h] BYREF

  v10 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v10);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IAudioProcessingObject **))(**((_QWORD **)this + 40)
                                                                                            + 24LL))(
         *((_QWORD *)this + 40),
         a2,
         a3,
         a4);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::InnerInitializeAPO", 0x34u, v8);
  }
  else
  {
    *((_QWORD *)this + 39) = a2;
  }
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v8;
}
