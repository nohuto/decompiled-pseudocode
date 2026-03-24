/*
 * XREFs of MmEnableVerifierForDriver @ 0x140924BB8
 * Callers:
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140651A20 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A60 (MmAcquireLoadLock.c)
 *     VfDriverEnableVerifier @ 0x140927E78 (VfDriverEnableVerifier.c)
 */

__int64 __fastcall MmEnableVerifierForDriver(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  struct _KTHREAD *Lock; // rdi

  *a2 = 0;
  v2 = a2;
  Lock = MmAcquireLoadLock();
  LODWORD(v2) = VfDriverEnableVerifier(a1, 0LL, v2);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
