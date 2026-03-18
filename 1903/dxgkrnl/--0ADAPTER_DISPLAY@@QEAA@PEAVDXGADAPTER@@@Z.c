/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C017D548
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0166BE4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(char *DeferredContext, struct DXGADAPTER *a2)
{
  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_QWORD *)DeferredContext + 4) = 0LL;
  *((_QWORD *)DeferredContext + 5) = 0LL;
  *((_DWORD *)DeferredContext + 12) = 0;
  *((_DWORD *)DeferredContext + 13) = 5;
  *((_DWORD *)DeferredContext + 14) = 12;
  *((_QWORD *)DeferredContext + 9) = DeferredContext + 64;
  *((_QWORD *)DeferredContext + 8) = DeferredContext + 64;
  *((_DWORD *)DeferredContext + 30) = -1;
  *((_DWORD *)DeferredContext + 31) = -1;
  *((_DWORD *)DeferredContext + 20) = 0;
  *((_QWORD *)DeferredContext + 11) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 32) = 3;
  *((_DWORD *)DeferredContext + 41) = -1;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_QWORD *)DeferredContext + 19) = 0LL;
  *((_DWORD *)DeferredContext + 40) = 0;
  *((_DWORD *)DeferredContext + 42) = 26;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_QWORD *)DeferredContext + 23) = 0LL;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = 0;
  *((_DWORD *)DeferredContext + 51) = -1;
  *((_DWORD *)DeferredContext + 52) = 1;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *(_DWORD *)(DeferredContext + 233) = 0;
  *((_QWORD *)DeferredContext + 30) = 0LL;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_QWORD *)DeferredContext + 32) = 0LL;
  *((_DWORD *)DeferredContext + 66) = 0;
  *((_DWORD *)DeferredContext + 67) = -1;
  *((_DWORD *)DeferredContext + 68) = 1;
  *((_QWORD *)DeferredContext + 35) = 0LL;
  *((_QWORD *)DeferredContext + 38) = 0LL;
  *((_QWORD *)DeferredContext + 39) = 0LL;
  *((_QWORD *)DeferredContext + 40) = 0LL;
  *((_DWORD *)DeferredContext + 82) = 0;
  *((_DWORD *)DeferredContext + 83) = 16;
  *((_DWORD *)DeferredContext + 84) = 5;
  *((_QWORD *)DeferredContext + 43) = 0LL;
  *((_QWORD *)DeferredContext + 44) = 1LL;
  *((_QWORD *)DeferredContext + 45) = 0LL;
  *((_QWORD *)DeferredContext + 46) = 0LL;
  *((_DWORD *)DeferredContext + 94) = 0;
  DeferredContext[380] = 0;
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_QWORD *)DeferredContext + 49) = 0LL;
  *((_QWORD *)DeferredContext + 50) = 0LL;
  *((_DWORD *)DeferredContext + 102) = 0;
  *((_DWORD *)DeferredContext + 103) = 75;
  *((_DWORD *)DeferredContext + 104) = 32;
  *((_QWORD *)DeferredContext + 55) = 0LL;
  *((_QWORD *)DeferredContext + 56) = 0LL;
  *((_QWORD *)DeferredContext + 57) = 0LL;
  *((_DWORD *)DeferredContext + 116) = 0;
  *((_DWORD *)DeferredContext + 117) = -1;
  *((_DWORD *)DeferredContext + 118) = 1;
  DeferredContext[480] = 0;
  *((_QWORD *)DeferredContext + 63) = 0LL;
  *((_QWORD *)DeferredContext + 64) = 0LL;
  *((_QWORD *)DeferredContext + 65) = 0LL;
  *((_DWORD *)DeferredContext + 132) = 0;
  *((_DWORD *)DeferredContext + 133) = 76;
  *((_DWORD *)DeferredContext + 134) = 7;
  *((_QWORD *)DeferredContext + 68) = 0LL;
  *((_DWORD *)DeferredContext + 143) = -1;
  *((_QWORD *)DeferredContext + 69) = 0LL;
  *((_QWORD *)DeferredContext + 70) = 0LL;
  *((_DWORD *)DeferredContext + 142) = 0;
  *((_DWORD *)DeferredContext + 144) = 12;
  *((_QWORD *)DeferredContext + 74) = DeferredContext + 584;
  *((_QWORD *)DeferredContext + 73) = DeferredContext + 584;
  *((_QWORD *)DeferredContext + 37) = DeferredContext + 288;
  *((_QWORD *)DeferredContext + 36) = DeferredContext + 288;
  memset(DeferredContext + 736, 0, 0xA0uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 608), SynchronizationTimer);
  KeInitializeDpc(
    (PRKDPC)(DeferredContext + 672),
    (PKDEFERRED_ROUTINE)ADAPTER_DISPLAY::VSyncTelemetryTimerDpc,
    DeferredContext);
  return (ADAPTER_DISPLAY *)DeferredContext;
}
