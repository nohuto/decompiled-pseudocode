/*
 * XREFs of MiAllocateProcessShadow @ 0x14068D5F8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140785DE0 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1400E31E0 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1400E3C18 (MiMarkPfnTradable.c)
 *     MiAcquireNonPagedResources @ 0x1400E3D00 (MiAcquireNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG_PTR *ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( (unsigned int)MiAcquireNonPagedResources(ProcessPartition, 1uLL) )
  {
    v5 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 640) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1544) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL);
  }
  return 3221225626LL;
}
