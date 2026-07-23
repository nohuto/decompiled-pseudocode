/*
 * XREFs of IoInitSystem @ 0x140A0F540
 * Callers:
 *     Phase1Initialization @ 0x1407573D0 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x14019D0C8 (PnpSerializeBoot.c)
 *     IopRegistryInitializeCallbacks @ 0x140763F6C (IopRegistryInitializeCallbacks.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 */

char __fastcall IoInitSystem(_QWORD *a1)
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
