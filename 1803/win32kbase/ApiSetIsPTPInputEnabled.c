/*
 * XREFs of ApiSetIsPTPInputEnabled @ 0x1C0140E88
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
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
