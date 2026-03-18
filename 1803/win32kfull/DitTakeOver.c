/*
 * XREFs of DitTakeOver @ 0x1C00BA91C
 * Callers:
 *     EditionActivateMitInput @ 0x1C00BA840 (EditionActivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 DitTakeOver()
{
  if ( (int)CBaseInput::InitializeSensor(gpHidInput) < 0
    || (int)CBaseInput::RegisterDispatcherObject(gpHidInput, gpIOCPDispatcher) < 0 )
  {
    return 0LL;
  }
  EtwTraceDitEngaged();
  return 1LL;
}
