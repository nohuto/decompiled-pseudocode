/*
 * XREFs of Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0002450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 *     WnfHelper_PublishUsbXhciAudioOffloadState @ 0x1C005712C (WnfHelper_PublishUsbXhciAudioOffloadState.c)
 */

__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3048))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C004F400);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 576));
  v3 = *(_BYTE *)(v2 + 760);
  DynamicLock_Release(*(_QWORD *)(v2 + 576));
  LOBYTE(v4) = v3;
  v5 = WnfHelper_PublishUsbXhciAudioOffloadState(v4);
  v7 = *(_QWORD *)(v2 + 72);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = 4;
    return WPP_RECORDER_SF_d(v7, v6, 4, 299, (__int64)&Context.Logger + 4, v3);
  }
  else
  {
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_dd(v7, v6, 4, 298, (__int64)&Context.Logger + 4, v3, v5);
  }
}
