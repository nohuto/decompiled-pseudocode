/*
 * XREFs of PoSetHiberRange @ 0x14015F820
 * Callers:
 *     IoGetDumpHiberRanges @ 0x14015F72C (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x14028AB88 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028ABE8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14028B4D8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14028B5A8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiMarkKernelPageTablePte @ 0x1402C33A0 (MiMarkKernelPageTablePte.c)
 *     PopBuildMemoryImageHeader @ 0x14059B168 (PopBuildMemoryImageHeader.c)
 *     BgkResumePrepare @ 0x14059B5B0 (BgkResumePrepare.c)
 *     PopMarkComponentsBootPhase @ 0x14059D990 (PopMarkComponentsBootPhase.c)
 *     KdMarkHiberPhase @ 0x1405AACB8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1405AAD48 (KeMarkHiberPhase.c)
 *     MiGatherHiberRange @ 0x1405ABF70 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPte @ 0x1405AC060 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1405AC250 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x1405AC318 (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1405ACEB4 (PopMarkHiberPhase.c)
 *     PopHiberInitializeResources @ 0x140726638 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1407268E4 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     VslAllocateSecureHibernateResources @ 0x1408516B8 (VslAllocateSecureHibernateResources.c)
 *     BgpFwMarkHiberPhase @ 0x140994060 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x14015F9BC (PopSetRange.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MmMarkImageForHiberPhase @ 0x1405AC5AC (MmMarkImageForHiberPhase.c)
 *     MmGetSectionRange @ 0x14088AE9C (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  PVOID v5; // rbp
  __int16 v6; // bx
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r14
  ULONG_PTR v12; // r15
  PHYSICAL_ADDRESS v13; // r12
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
      goto LABEL_28;
  }
  else
  {
    v5 = (PVOID)qword_140443080;
    BugCheckParameter3 = (PVOID)qword_140443080;
    if ( !qword_140443080 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(qword_140443080 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
LABEL_28:
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
      KeBugCheckEx(0xA0u, 2uLL, 0xA1269uLL, 0LL, 0LL);
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
      v12 = v9 + 1;
      v13.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v11 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v12 + v13.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v11 << 12))).QuadPart >> 12 )
            break;
          ++v11;
          ++v12;
        }
        while ( v12 < v10 );
        v5 = BugCheckParameter3;
      }
      PopSetRange((ULONG_PTR)v5, Tag);
      v9 += v11;
    }
  }
}
