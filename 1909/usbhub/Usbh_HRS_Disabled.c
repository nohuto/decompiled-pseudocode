/*
 * XREFs of Usbh_HRS_Disabled @ 0x1C002B80C
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001CA20 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C000FC90 (UsbhReleaseResetLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Disabled(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      v3);
  switch ( (_DWORD)v3 )
  {
    case 1:
      v5 = 2;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
    case 2:
LABEL_14:
      v5 = 1;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
    case 3:
    case 9:
      v4[640] |= 0x10u;
      goto LABEL_14;
  }
  if ( (int)v3 > 9 && (int)v3 <= 11 )
    goto LABEL_14;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
