/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000CAA4 (CommonBuffer_AcquireBuffer.c)
 *     Controller_InUseByDebugger @ 0x1C000EB20 (Controller_InUseByDebugger.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0060E7C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0062230 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  __int64 v2; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  *(_BYTE *)(v2 + 16) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 5u, 4u, 0x34u, (__int64)&Context.Logger + 4, a1);
  if ( Controller_InUseByDebugger((_QWORD *)v2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x35u, (__int64)&Context.Logger + 4, a1);
    v3 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           (PPOWER_SETTING_CALLBACK)Controller_LPEEnterExitCallback,
           (PVOID)v2,
           (PVOID *)(v2 + 528));
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = v3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 3u, 4u, 0x36u, (__int64)&Context.Logger + 4, v6);
    }
  }
  Controller_SetDeviceDescription(v2);
  Controller_PopulateHardwareVerifierFlags(v2);
  Controller_PopulateDeviceFlags(v2);
  if ( (*(_QWORD *)(v2 + 336) & 0x400000000LL) != 0 )
  {
    v4 = CommonBuffer_AcquireBuffer(*(PVOID *)(v2 + 120), 512, v2, 829584451);
    *(_QWORD *)(v2 + 456) = v4;
    if ( !v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 3u, 4u, 0x37u, (__int64)&Context.Logger + 4, a1);
  }
  return 0LL;
}
