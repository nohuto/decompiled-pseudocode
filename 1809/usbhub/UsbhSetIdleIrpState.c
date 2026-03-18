/*
 * XREFs of UsbhSetIdleIrpState @ 0x1C000153C
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001458 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C005A3A0 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C005A518 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C005A614 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005A73C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005AA0C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C005AE50 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, int a3, int a4, KIRQL NewIrql)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  v7 = PdoExt(a2);
  v8 = 32 * (*(unsigned int *)(v7 + 1788) + 56LL);
  *(_DWORD *)(v8 + v7) = a3;
  *(_DWORD *)(v7 + 1536) = a4;
  *(_DWORD *)(v8 + v7 + 8) = a4;
  *(_DWORD *)(v7 + 1788) = ((unsigned __int8)*(_DWORD *)(v7 + 1788) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2048), NewIrql);
}
