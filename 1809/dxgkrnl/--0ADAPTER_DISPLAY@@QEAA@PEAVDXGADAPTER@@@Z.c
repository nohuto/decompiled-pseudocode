/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C015CE18
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014F768 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(char *DeferredContext, struct DXGADAPTER *a2)
{
  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_QWORD *)DeferredContext + 4) = 0LL;
  *((_DWORD *)DeferredContext + 12) = 0;
  *((_DWORD *)DeferredContext + 13) = 5;
  *((_DWORD *)DeferredContext + 14) = 12;
  *((_QWORD *)DeferredContext + 5) = 0LL;
  *((_QWORD *)DeferredContext + 9) = DeferredContext + 64;
  *((_QWORD *)DeferredContext + 8) = DeferredContext + 64;
  *((_DWORD *)DeferredContext + 30) = -1;
  *((_DWORD *)DeferredContext + 31) = -1;
  *((_DWORD *)DeferredContext + 20) = 0;
  *((_QWORD *)DeferredContext + 11) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 3LL;
  *((_DWORD *)DeferredContext + 41) = -1;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 40) = 0;
  *((_QWORD *)DeferredContext + 19) = 0LL;
  *((_DWORD *)DeferredContext + 42) = 1;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_QWORD *)DeferredContext + 25) = 0LL;
  *((_QWORD *)DeferredContext + 26) = 0LL;
  *((_DWORD *)DeferredContext + 56) = 0;
  *((_DWORD *)DeferredContext + 58) = 5;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_DWORD *)DeferredContext + 57) = 16;
  *((_QWORD *)DeferredContext + 30) = 0LL;
  *((_QWORD *)DeferredContext + 32) = 0LL;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  *((_DWORD *)DeferredContext + 68) = 0;
  DeferredContext[276] = 0;
  *((_QWORD *)DeferredContext + 31) = 1LL;
  *((_QWORD *)DeferredContext + 35) = 0LL;
  *((_QWORD *)DeferredContext + 36) = 0LL;
  *((_DWORD *)DeferredContext + 76) = 0;
  *((_QWORD *)DeferredContext + 37) = 0LL;
  *((_DWORD *)DeferredContext + 77) = 75;
  *((_DWORD *)DeferredContext + 78) = 32;
  *((_DWORD *)DeferredContext + 91) = -1;
  *((_QWORD *)DeferredContext + 42) = 0LL;
  *((_QWORD *)DeferredContext + 43) = 0LL;
  *((_DWORD *)DeferredContext + 90) = 0;
  *((_QWORD *)DeferredContext + 44) = 0LL;
  *((_DWORD *)DeferredContext + 92) = 1;
  DeferredContext[376] = 0;
  *((_QWORD *)DeferredContext + 50) = 0LL;
  *((_QWORD *)DeferredContext + 51) = 0LL;
  *((_DWORD *)DeferredContext + 106) = 0;
  *((_QWORD *)DeferredContext + 52) = 0LL;
  *((_DWORD *)DeferredContext + 107) = 76;
  *((_DWORD *)DeferredContext + 108) = 7;
  *((_DWORD *)DeferredContext + 117) = -1;
  *((_QWORD *)DeferredContext + 55) = 0LL;
  *((_QWORD *)DeferredContext + 56) = 0LL;
  *((_DWORD *)DeferredContext + 116) = 0;
  *((_DWORD *)DeferredContext + 118) = 12;
  *((_QWORD *)DeferredContext + 57) = 0LL;
  *((_QWORD *)DeferredContext + 61) = DeferredContext + 480;
  *((_QWORD *)DeferredContext + 60) = DeferredContext + 480;
  *((_QWORD *)DeferredContext + 24) = DeferredContext + 184;
  *((_QWORD *)DeferredContext + 23) = DeferredContext + 184;
  memset(DeferredContext + 632, 0, 0xA0uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 504), SynchronizationTimer);
  KeInitializeDpc(
    (PRKDPC)(DeferredContext + 568),
    (PKDEFERRED_ROUTINE)ADAPTER_DISPLAY::VSyncTelemetryTimerDpc,
    DeferredContext);
  return (ADAPTER_DISPLAY *)DeferredContext;
}
