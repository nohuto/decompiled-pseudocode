/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C004A004
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 (__fastcall *__fastcall UsbdHubArmBusForWake(__int64 a1))(_QWORD, __int64)
{
  _DWORD *v1; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64); // rax

  v1 = FdoExt(a1);
  result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
  if ( result )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xAu,
        (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
      result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
    }
    result = (__int64 (__fastcall *)(_QWORD, __int64))result(*((_QWORD *)v1 + 529), 1LL);
    v1[640] |= 0x40000u;
  }
  return result;
}
