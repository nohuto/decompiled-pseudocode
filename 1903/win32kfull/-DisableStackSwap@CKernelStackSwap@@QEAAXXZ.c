/*
 * XREFs of ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C0164300
 * Callers:
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01642BC (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKernelStackSwap::DisableStackSwap(CKernelStackSwap *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( *(int *)(ThreadWin32Thread + 1508) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1508LL) )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1224LL) |= 0x40000000u;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1508LL));
}
