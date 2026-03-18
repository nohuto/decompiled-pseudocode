/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140721F78
 * Callers:
 *     PiCollapseEnumRequests @ 0x1401773BC (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x140721EC4 (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140623BC8 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
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
