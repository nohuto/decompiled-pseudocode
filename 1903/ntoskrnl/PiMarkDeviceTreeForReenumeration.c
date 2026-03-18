/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1407200D8
 * Callers:
 *     PiCollapseEnumRequests @ 0x140176C8C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140720024 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1406A38F8 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
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
