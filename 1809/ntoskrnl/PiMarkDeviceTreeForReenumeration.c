/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1406FD700
 * Callers:
 *     PiCollapseEnumRequests @ 0x14016C670 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x1406FD654 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140586750 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
