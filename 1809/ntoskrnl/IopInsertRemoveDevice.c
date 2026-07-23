/*
 * XREFs of IopInsertRemoveDevice @ 0x1400DA918
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInsertRemoveDevice(__int64 a1, __int64 a2, char a3)
{
  KIRQL v6; // dl
  _QWORD *i; // rcx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( a3 )
  {
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    for ( i = (_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL); *i != a2; i = (_QWORD *)(*i + 16LL) )
      ;
    *i = *(_QWORD *)(a2 + 16);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
