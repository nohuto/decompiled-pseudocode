/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x14070D6F0
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406E50DC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 776 )
    PipSetDevNodeFlags(a1, 8);
  return 0LL;
}
