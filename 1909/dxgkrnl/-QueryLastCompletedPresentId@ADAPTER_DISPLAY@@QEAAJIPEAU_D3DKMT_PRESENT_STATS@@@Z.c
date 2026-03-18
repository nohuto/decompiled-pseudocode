/*
 * XREFs of ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C01F37FC
 * Callers:
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C022FFAC (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryLastCompletedPresentId(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // r9
  __int64 v6; // rdi

  v3 = *((_QWORD *)this + 46);
  if ( !v3 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v3 + 8) + 2760LL * a2;
  KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
  *(_OWORD *)&a3->PresentCount = *(_OWORD *)(v6 + 160);
  *(_OWORD *)&a3->SyncQPCTime.LowPart = *(_OWORD *)(v6 + 176);
  KeReleaseMutex((PRKMUTEX)(v6 + 104), 0);
  return 0LL;
}
