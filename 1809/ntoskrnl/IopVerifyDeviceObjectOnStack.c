/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x140019C74
 * Callers:
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IopCheckTopDeviceHint @ 0x1405DDC9C (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3)
{
  KIRQL v3; // al

  v3 = 0;
  if ( a3 )
    v3 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 != a2 )
  {
    a1 = *(_QWORD *)(a1 + 24);
    if ( !a1 )
    {
      if ( a3 )
        KeReleaseQueuedSpinLock(0xAuLL, v3);
      return 0;
    }
  }
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  return 1;
}
