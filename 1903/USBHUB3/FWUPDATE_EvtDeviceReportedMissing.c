/*
 * XREFs of FWUPDATE_EvtDeviceReportedMissing @ 0x1C0081D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00821AC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

_BYTE *__fastcall FWUPDATE_EvtDeviceReportedMissing(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // rdi
  int v4; // [rsp+28h] [rbp-10h]

  result = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_1C00640B8);
  v3 = *(_QWORD *)result;
  if ( *(_QWORD *)(*(_QWORD *)result + 2656LL) == a1 && result[24] == 1 )
  {
    *(_QWORD *)(v3 + 2656) = 0LL;
    result = (_BYTE *)FWUPDATE_CreateFirmwareUpdateDevice(v3);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = (int)result;
      return (_BYTE *)WPP_RECORDER_SF_d(
                        *(_QWORD *)(v3 + 2520),
                        2u,
                        2u,
                        0xAu,
                        (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
                        v4);
    }
  }
  return result;
}
