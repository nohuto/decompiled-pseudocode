/*
 * XREFs of MiLocateVadEvent @ 0x140027BCC
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiCheckUserVirtualAddress @ 0x140098EA0 (MiCheckUserVirtualAddress.c)
 *     MiWsleFlush @ 0x1400B32F0 (MiWsleFlush.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401256BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiMarkMdlComplete @ 0x1402AF314 (MiMarkMdlComplete.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405DF71C (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405EF4F0 (MmFreeVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406513D4 (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EC0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiGetReadyInPageBlock @ 0x14084F30C (MiGetReadyInPageBlock.c)
 *     MiCopyLargeVad @ 0x14085CD74 (MiCopyLargeVad.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result && (a2 & (_DWORD)result[8]) == 0; result = (__int64 **)*result )
    ;
  return result;
}
