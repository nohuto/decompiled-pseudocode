/*
 * XREFs of IoInitSystem @ 0x1409D2354
 * Callers:
 *     Phase1Initialization @ 0x14074B5D0 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x140192D98 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x14074B6C8 (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x140925D20 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x14094C904 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(__int64 a1)
{
  if ( !IoInitSystemPreDrivers(a1) )
    return 0;
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
      HdlspKernelAddLogEntry(0xBu, 0LL);
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  return 1;
}
