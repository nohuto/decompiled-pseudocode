/*
 * XREFs of MiFillPteHierarchy @ 0x1400990E0
 * Callers:
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiInitializePageFaultPacket @ 0x140096218 (MiInitializePageFaultPacket.c)
 *     MiBitmapRangeZero @ 0x140097470 (MiBitmapRangeZero.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiVaToPfn @ 0x140099010 (MiVaToPfn.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiSynchronizeSystemVa @ 0x1400E9F68 (MiSynchronizeSystemVa.c)
 *     MiLockStealUserVm @ 0x1400EDC14 (MiLockStealUserVm.c)
 *     MiGetPhysicalAddress @ 0x1401210F8 (MiGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x140122FC0 (MmFreeContiguousMemory.c)
 *     MiSmallVaStillMapsFrame @ 0x1401349F4 (MiSmallVaStillMapsFrame.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BA990 (MiDbgCopyMemoryTarget.c)
 *     MiUpdateForkMaps @ 0x1402CAC08 (MiUpdateForkMaps.c)
 *     MiMapProcessExecutable @ 0x140677C48 (MiMapProcessExecutable.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MxMapVa @ 0x1409BB8F8 (MxMapVa.c)
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
