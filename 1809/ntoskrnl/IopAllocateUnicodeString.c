/*
 * XREFs of IopAllocateUnicodeString @ 0x14070FF14
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14070544C (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x14070F7B0 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x14070F85C (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDEC (IopBuildGlobalSymbolicLinkString.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140757218 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x140824EBC (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x140825674 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408267D0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x14011CDFC (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)*v2, 0x75737050u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
