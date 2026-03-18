/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x14078AAE4
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140661390 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
