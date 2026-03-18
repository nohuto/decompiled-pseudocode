/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x14078CFC4
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140690034 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
