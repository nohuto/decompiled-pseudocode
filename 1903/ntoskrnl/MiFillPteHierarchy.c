/*
 * XREFs of MiFillPteHierarchy @ 0x14005F010
 * Callers:
 *     MiLockPoolCommitPageTable @ 0x140022C50 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiInitializePageFaultPacket @ 0x1400A48EC (MiInitializePageFaultPacket.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiFindActualFaultingPte @ 0x1401021F4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 *     MiBitmapRangeZeroEx @ 0x14011A320 (MiBitmapRangeZeroEx.c)
 *     MiGetPhysicalAddress @ 0x140124020 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x140124120 (MiVaToPfn.c)
 *     MiSmallVaStillMapsFrame @ 0x140139038 (MiSmallVaStillMapsFrame.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0BB0 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x1406796F4 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MxMapVa @ 0x1409F36A4 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
