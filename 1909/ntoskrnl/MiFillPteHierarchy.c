/*
 * XREFs of MiFillPteHierarchy @ 0x14005F0B0
 * Callers:
 *     MiLockPoolCommitPageTable @ 0x140023040 (MiLockPoolCommitPageTable.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiInitializePageFaultPacket @ 0x14009561C (MiInitializePageFaultPacket.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiFindActualFaultingPte @ 0x1400CBBA4 (MiFindActualFaultingPte.c)
 *     MmFreeContiguousMemory @ 0x1400F4E90 (MmFreeContiguousMemory.c)
 *     MiBitmapRangeZeroEx @ 0x1401183B0 (MiBitmapRangeZeroEx.c)
 *     MiGetPhysicalAddress @ 0x140124CA0 (MiGetPhysicalAddress.c)
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     MiSmallVaStillMapsFrame @ 0x1401396D8 (MiSmallVaStillMapsFrame.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0910 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x14067F7A8 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MxMapVa @ 0x1409F35B4 (MxMapVa.c)
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
