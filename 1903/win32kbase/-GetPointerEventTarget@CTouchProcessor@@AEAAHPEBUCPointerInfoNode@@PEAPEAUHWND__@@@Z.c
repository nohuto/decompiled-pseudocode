/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C016A688
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C016DEF0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016987C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  __int64 ThreadWin32Thread; // rax
  CInputDest *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v8 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  CTouchProcessor::GetPointerCapture(
    this,
    *((_QWORD *)a2 + 2),
    (*(_DWORD *)(ThreadWin32Thread + 1224) >> 13) & 1,
    &v8,
    0LL);
  if ( v8 )
    *a3 = CInputDest::GetWindowHandle(v8);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 25);
  return 1LL;
}
