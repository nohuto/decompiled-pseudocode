/*
 * XREFs of UsbhPortResumeComplete @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSS_SignalPdoWake @ 0x1C0001C04 (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C0001EB8 (UsbhSignalResumeEvent.c)
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (*(_DWORD *)(v7 + 2824) & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 2856) + 4LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884443469, a2, 0LL);
  UsbhWait(a1, v6);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
