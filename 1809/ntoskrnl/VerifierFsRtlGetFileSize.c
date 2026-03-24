/*
 * XREFs of VerifierFsRtlGetFileSize @ 0x1409312B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 VerifierFsRtlGetFileSize()
{
  return ((__int64 (*)(void))pXdvFsRtlGetFileSize)();
}
