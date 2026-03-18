/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14031BA08
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407F37B8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14031BCC8 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
