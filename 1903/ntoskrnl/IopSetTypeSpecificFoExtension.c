/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x1400B8CD4
 * Callers:
 *     IopGetSetSpecificExtension @ 0x1400BA3C8 (IopGetSetSpecificExtension.c)
 *     IoSetOplockKeyContext @ 0x14016CDE4 (IoSetOplockKeyContext.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140857028 (IopSetFileMemoryPartitionInformation.c)
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
