/*
 * XREFs of MmEnableVerifierForDriver @ 0x140963D48
 * Callers:
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
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
