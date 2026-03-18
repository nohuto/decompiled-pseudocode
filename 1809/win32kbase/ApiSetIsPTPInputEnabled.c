/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C0164424
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C012FEAC (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetIsPTPInputEnabled()
{
  if ( (int)IsIsPTPInputEnabledSupported() < 0 )
    return 1LL;
  else
    return IsPTPInputEnabled();
}
