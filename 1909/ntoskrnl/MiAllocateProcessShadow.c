/*
 * XREFs of MiAllocateProcessShadow @ 0x14064495C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140788140 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14008F414 (MiAcquireNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14008F460 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14008FE98 (MiMarkPfnTradable.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
  {
    v5 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 640) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1544) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
