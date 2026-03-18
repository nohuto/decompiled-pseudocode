/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x14029E860
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x140860710 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
