/*
 * XREFs of UsbdHubDisarmBusForWake @ 0x1C0003198
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 (__fastcall *__fastcall UsbdHubDisarmBusForWake(__int64 a1))(_QWORD, _QWORD)
{
  __int64 v1; // rbx
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v1 = FdoExt(a1);
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v1 + 4416);
  if ( result )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))(*(__int64 (__fastcall **)(_QWORD, _QWORD))(v1 + 4416))(
                                                         *(_QWORD *)(v1 + 4232),
                                                         0LL);
    }
    else
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))result(*(_QWORD *)(v1 + 4232), 0LL);
    }
    *(_DWORD *)(v1 + 2560) &= ~0x40000u;
  }
  return result;
}
