/*
 * XREFs of ndisGetLowerFilterWithPnpRef @ 0x1C0016340
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B8DF0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00BDB3C (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisGetLowerFilterWithPnpRef(__int64 a1, __int64 i)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2105890;
  if ( i )
    goto LABEL_6;
  for ( i = *(_QWORD *)(a1 + 2064);
        i && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(i + 320));
        i = *(_QWORD *)(i + 112) )
  {
LABEL_6:
    ;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return i;
}
