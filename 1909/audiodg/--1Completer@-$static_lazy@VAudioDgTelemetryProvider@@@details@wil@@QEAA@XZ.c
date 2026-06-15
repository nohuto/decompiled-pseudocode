/*
 * XREFs of ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029D3C
 * Callers:
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A928 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8A0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x14000EE34 (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010110 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400155C0 (--0CAudioDGModule@@QEAA@XZ.c)
 *     ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x14002A700 (-FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C20 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025D60 (TraceLoggingRegisterEx.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(
        unsigned int *a1,
        __int64 a2,
        void *a3)
{
  void (__stdcall *v3)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  __int64 v5; // rbx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rax

  v3 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))a1[2];
  if ( !(_DWORD)v3 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *(const struct _TlgProvider_t **)(*(_QWORD *)a1 + 32LL);
    *(_QWORD *)(v5 + 16) = v6;
    *(_BYTE *)(v5 + 24) = 1;
    TraceLoggingRegisterEx(v6, v3, a3);
    v7 = *(_QWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 28) = 1;
    (*(void (__fastcall **)(__int64))(v7 + 8))(v5 + 8);
    LODWORD(v3) = a1[2];
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, (DWORD)v3, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
