/*
 * XREFs of IopAllocateUnicodeString @ 0x1407320B0
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14072C410 (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x14073193C (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407319E8 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140731F98 (IopBuildGlobalSymbolicLinkString.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077CD68 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14085F30C (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14085FB28 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860C10 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x14011ED4C (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
