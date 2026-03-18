/*
 * XREFs of Usbh_HRS_PausedWaitDone @ 0x1C004B4CC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C000F610 (UsbhReleaseResetLock.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_PausedWaitDone(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920161616, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids,
      v8);
  }
  if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 7 )
  {
    v6 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 6u);
    KeSetEvent((PRKEVENT)(v4 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  return v6;
}
