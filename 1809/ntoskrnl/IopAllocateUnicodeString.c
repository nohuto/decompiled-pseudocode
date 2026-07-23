/*
 * XREFs of IopAllocateUnicodeString @ 0x140711194
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x1407066CC (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x140710A30 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140710ADC (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14082609C (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x140826854 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408279B0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x14011CE8C (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
