/*
 * XREFs of PoSetHiberRange @ 0x1401448D0
 * Callers:
 *     IoGetDumpHiberRanges @ 0x1401447D8 (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x140276B2C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140276B8C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140277368 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140277438 (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiMarkKernelPageTablePte @ 0x1402AA980 (MiMarkKernelPageTablePte.c)
 *     RtlMarkHiberPhase @ 0x1402FAF30 (RtlMarkHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 *     BgkResumePrepare @ 0x14056C58C (BgkResumePrepare.c)
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x14056CC3C (PopBootLoaderTraceCopyPfnList.c)
 *     KdMarkHiberPhase @ 0x14057BE38 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14057BEC8 (KeMarkHiberPhase.c)
 *     MiGatherHiberRange @ 0x14057CF90 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPte @ 0x14057D070 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x14057D260 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x14057D328 (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x14057DFF4 (PopMarkHiberPhase.c)
 *     PopHiberInitializeResources @ 0x1406E04E4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1406E0790 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     VslAllocateSecureHibernateResources @ 0x140818E78 (VslAllocateSecureHibernateResources.c)
 *     BgpFwMarkHiberPhase @ 0x140954F40 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MmMarkImageForHiberPhase @ 0x14057D5C8 (MmMarkImageForHiberPhase.c)
 *     MmGetSectionRange @ 0x140850008 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  PVOID v5; // rbp
  __int16 v6; // bx
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r15
  PHYSICAL_ADDRESS v12; // r12
  __int64 v13; // r14
  _DWORD v14[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID BugCheckParameter3; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = (unsigned __int64)Address;
  BugCheckParameter3 = MemoryMap;
  v5 = MemoryMap;
  v6 = Flags;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) != 0 )
      goto LABEL_29;
  }
  else
  {
    v5 = (PVOID)BugCheckParameter4;
    BugCheckParameter3 = (PVOID)BugCheckParameter4;
    if ( !BugCheckParameter4 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(BugCheckParameter4 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
LABEL_29:
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    v8 = Flags & 0x10000;
  }
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v16);
      return;
    }
    if ( (int)MmGetSectionRange(v16, &v16, v14) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA119DuLL, 0LL, 0LL);
    Length = v14[0];
  }
  if ( (v6 & 4) != 0 )
    v6 = v6 & 0xFFF9 | 2;
  if ( (v6 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v5, Tag);
  }
  else
  {
    v9 = v16 >> 12;
    v10 = (Length + v16 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v11 = v9 + 1;
      v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v13 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v11 + v12.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v13 << 12))).QuadPart >> 12 )
            break;
          ++v13;
          ++v11;
        }
        while ( v11 < v10 );
        v5 = BugCheckParameter3;
      }
      PopSetRange((ULONG_PTR)v5, Tag);
      v9 += v13;
    }
  }
}
