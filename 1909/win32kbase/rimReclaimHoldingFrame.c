/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C014DD84
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C005C2EC (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014CBD0 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C014D6B4 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C014D774 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C014D718 (rimFreePointerRawDataListWorker.c)
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
