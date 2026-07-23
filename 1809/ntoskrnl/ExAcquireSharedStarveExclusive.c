/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1400ADFE0
 * Callers:
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcPinMappedData @ 0x1406395C0 (CcPinMappedData.c)
 * Callees:
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1950 (ExpAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031BA78 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // r9
  BOOLEAN v3; // bl
  BOOLEAN v4; // r11
  __int16 v5; // r9
  struct _KTHREAD *CurrentThread; // r8

  Flag = Resource->Flag;
  v3 = Wait;
  v4 = 2 - (Wait != 0);
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v5 = Flag & 1;
  if ( v5 )
  {
    *(_QWORD *)&Wait = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( Wait > v4 )
      KeBugCheckEx(0x1C6u, 0LL, Wait, v4, 0LL);
    if ( Wait >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !Wait && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  Wait = v3;
  if ( v5 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
  else
    return ExpAcquireSharedStarveExclusive(Resource, Wait);
}
