/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015E360
 * Callers:
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015E2E0 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  bool v5; // zf

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  v5 = *(_DWORD *)(ThreadWin32Thread + 1484) == 0;
  if ( *(int *)(ThreadWin32Thread + 1484) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    ThreadWin32Thread = *((_QWORD *)this + 1);
    v5 = *(_DWORD *)(ThreadWin32Thread + 1484) == 0;
  }
  if ( v5 )
  {
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
    ThreadWin32Thread = *((_QWORD *)this + 1);
  }
  ++*(_DWORD *)(ThreadWin32Thread + 1484);
}
