/*
 * XREFs of IovUtilIsInFdoStack @ 0x1409365F4
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409365A0 (IovUtilIsDeviceObjectMarked.c)
 */

__int64 __fastcall IovUtilIsInFdoStack(__int64 a1)
{
  unsigned int v2; // edi
  KIRQL v3; // r8

  KeAcquireQueuedSpinLock(0xAuLL);
  v2 = 0;
  do
  {
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(a1, 1) )
      break;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
  }
  while ( a1 );
  KeReleaseQueuedSpinLock(0xAuLL, v3);
  LOBYTE(v2) = a1 != 0;
  return v2;
}
