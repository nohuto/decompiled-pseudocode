/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C00699F4
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064A70 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0067568 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C008160C (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00BB728 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ @ 0x1C00023F4 (-GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x1C00B6D8C (VidMmAllocateVirtualMemoryFromPartition.c)
 */

NTSTATUS __fastcall VidMmAllocateVirtualMemory(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  __int64 CurrentHandle; // rax

  CurrentHandle = VIDMM_PARTITION::GetCurrentHandle();
  if ( CurrentHandle == -1 )
    return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, RegionSize, AllocationType, Protect);
  else
    return VidMmAllocateVirtualMemoryFromPartition(
             CurrentHandle,
             (_DWORD)BaseAddress,
             (_DWORD)RegionSize,
             AllocationType,
             Protect);
}
