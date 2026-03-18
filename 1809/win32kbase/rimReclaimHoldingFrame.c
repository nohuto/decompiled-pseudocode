/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C0123E10
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C0089614 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0123810 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01238D0 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0123874 (rimFreePointerRawDataListWorker.c)
 */

void __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a3 + 72);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  rimFreePointerRawDataListWorker(*(_QWORD *)(a3 + 56), a2, a3);
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
}
