/*
 * XREFs of IopAllocateUnicodeString @ 0x140734310
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14072E2B0 (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x140733B9C (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140733C48 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407341F8 (IopBuildGlobalSymbolicLinkString.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077F688 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14085EA0C (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14085F228 (PiGetDriverMutableStateDirectory.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860310 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     RtlUShortAdd @ 0x14011FAFC (RtlUShortAdd.c)
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
