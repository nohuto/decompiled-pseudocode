/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x14008D838
 * Callers:
 *     IopGetSetSpecificExtension @ 0x14008D07C (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x140166BE4 (IoSetOplockKeyContext.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140639F90 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CFA0 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 8 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
