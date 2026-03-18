/*
 * XREFs of Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0002620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 *     WnfHelper_PublishUsbXhciAudioOffloadState @ 0x1C005E12C (WnfHelper_PublishUsbXhciAudioOffloadState.c)
 */

__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C0056428);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 640));
  v3 = *(_BYTE *)(v2 + 824);
  DynamicLock_Release(*(_QWORD *)(v2 + 640));
  LOBYTE(v4) = v3;
  result = WnfHelper_PublishUsbXhciAudioOffloadState(v4);
  if ( (int)result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v6, 4, 302, (__int64)&Context.Logger + 4, v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_dd(*(_QWORD *)(v2 + 72), v6, 4, 301, (__int64)&Context.Logger + 4, v3, result);
  }
  return result;
}
