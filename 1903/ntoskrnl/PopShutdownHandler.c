/*
 * XREFs of PopShutdownHandler @ 0x1405ADED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     InbvAcquireDisplayOwnership @ 0x140291D30 (InbvAcquireDisplayOwnership.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140348F38 (BgDisplaySafeToPowerOffScreen.c)
 */

void __noreturn PopShutdownHandler()
{
  _disable();
  if ( !KeGetCurrentPrcb()->Number )
  {
    InbvAcquireDisplayOwnership();
    BgDisplaySafeToPowerOffScreen();
  }
  while ( 1 )
    off_140424318();
}
