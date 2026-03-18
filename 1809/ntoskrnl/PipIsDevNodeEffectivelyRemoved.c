/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x140288918
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x140826BD0 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
