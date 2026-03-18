/*
 * XREFs of VerifierExfReleasePushLockShared @ 0x140981D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x140981FDC (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfReleasePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEBuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfReleasePushLockShared)(a1);
}
