/*
 * XREFs of ndisCloseULongRef @ 0x1C005FA08
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 *     ndisMHaltMiniport @ 0x1C00EC4FC (ndisMHaltMiniport.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCloseULongRef(PKSPIN_LOCK SpinLock)
{
  char v2; // bl
  KIRQL v3; // al

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( *((_BYTE *)SpinLock + 12) )
    v2 = 0;
  else
    *((_BYTE *)SpinLock + 12) = 1;
  KeReleaseSpinLock(SpinLock, v3);
  return v2;
}
