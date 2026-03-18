/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005C760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000B0E8 (XilCommonBuffer_ReleaseBuffer.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C000D880 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C005BBFC (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _DWORD *v4; // rdx

  v2 = *(_QWORD **)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      a1,
                      off_1C004F3B0)
                  + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(v2[9], 5u, 4u, 0x39u, (__int64)&Context.Logger + 4, a1);
  v3 = (void *)v2[58];
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    v2[58] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v2);
  v4 = (_DWORD *)v2[49];
  if ( v4 )
  {
    XilCommonBuffer_ReleaseBuffer(v2[15], v4);
    v2[49] = 0LL;
  }
  Controller_UpdateSqmDatapoints((__int64)v2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v2[1]);
}
