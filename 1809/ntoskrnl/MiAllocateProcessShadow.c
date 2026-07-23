/*
 * XREFs of MiAllocateProcessShadow @ 0x1406D2D8C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14075FA5C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14013D0A0 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14013DA44 (MiMarkPfnTradable.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG_PTR *ProcessPartition; // rbx
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( (unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
  {
    v5 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1544) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
