/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1400B8A10
 * Callers:
 *     CcPinFileData @ 0x1400B4650 (CcPinFileData.c)
 *     CcPinMappedData @ 0x14064DB20 (CcPinMappedData.c)
 * Callees:
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140339F74 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // r9
  unsigned __int8 v4; // r11
  __int16 v5; // r9
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8

  Flag = Resource->Flag;
  v4 = 2 - (Wait != 0);
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v5 = Flag & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v4 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v4, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v5 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
  else
    return ExpAcquireSharedStarveExclusive((__int64)Resource, Wait);
}
