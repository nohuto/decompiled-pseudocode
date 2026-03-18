/*
 * XREFs of VerifierExfAcquirePushLockShared @ 0x140981CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x140981FDC (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEAuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfAcquirePushLockShared)(a1);
}
