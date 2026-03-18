/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14033AA18
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14082D0C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14033ACD8 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
