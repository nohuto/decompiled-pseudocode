/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1C000BF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C000E0B4 (Controller_StopTimeTrackingForHandle.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             off_1C004F388);
  if ( *(_BYTE *)(result + 40) )
  {
    v3 = *(_QWORD *)(result + 32);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 )
      return WPP_RECORDER_SF_qd(*(_QWORD *)(v3 + 72), 2u, 4u, 0x111u, (__int64)&Context.Logger + 4, a1, result);
  }
  return result;
}
