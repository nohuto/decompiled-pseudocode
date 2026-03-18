/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x140098B44
 * Callers:
 *     IopGetSetSpecificExtension @ 0x14009A238 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x14016D4D4 (IoSetOplockKeyContext.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140604A70 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140856728 (IopSetFileMemoryPartitionInformation.c)
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
