/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x14089993C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiIsRetpolineEnabled @ 0x14008E268 (MiIsRetpolineEnabled.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MiIsImportOptimizationEnabled @ 0x140154A74 (MiIsImportOptimizationEnabled.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x14018D694 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C08C0 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402CF11C (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1402E5494 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x140314EF0 (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReservePrivilegedPtes @ 0x140712694 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiReleasePrivilegedPtes @ 0x140749928 (MiReleasePrivilegedPtes.c)
 *     MiUnmapLargeDriver @ 0x14089A04C (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x1408D7A54 (LdrRelocateImageWithBias.c)
 */

char *MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3, ...)
{
  __int64 v3; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 i; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  char *v12; // rbx
  int v14; // edx
  ULONG_PTR v15; // r15
  char *v16; // r15
  PIMAGE_NT_HEADERS v17; // rax
  LONGLONG v18; // rdx
  const CHAR *v19; // r8
  ULONG v20; // r9d
  PIMAGE_NT_HEADERS v21; // r15
  unsigned int VirtualAddress; // ecx
  bool IsRetpolineEnabled; // al
  int v24; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  ULONG Conflict; // [rsp+20h] [rbp-B8h]
  ULONG Invalid; // [rsp+28h] [rbp-B0h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-78h]
  _QWORD v30[13]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+8h]
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp+20h] BYREF
  va_list BugCheckParameter2a; // [rsp+F8h] [rbp+20h]
  va_list va1; // [rsp+100h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(BugCheckParameter2a, a3);
  BugCheckParameter2 = va_arg(va1, _QWORD);
  v3 = a2;
  memset(v30, 0, 0x30uLL);
  if ( a1 )
  {
    v5 = MiSectionControlArea(a1);
    for ( i = v5 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v7 = v3;
  v8 = (v3 + (unsigned int)dword_14046454C + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              512LL,
              0xFFFFFFFFFuLL,
              v9,
              v9,
              1,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              (__int64 *)BugCheckParameter2a) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + BugCheckParameter2, v9 - v8);
  v10 = MiPageToNode(BugCheckParameter2, 0);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v10 + 1);
  v12 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_12;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v12, v3);
LABEL_12:
    MiFreeContiguousPages(BugCheckParameter2, v8);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v12, BugCheckParameter2, v8, v14, 6, v14);
  v15 = (unsigned int)((_DWORD)v3 << 12);
  BugCheckParameter2 = v15;
  memmove(v12, a3, (unsigned int)v15);
  v16 = &v12[(unsigned int)v15];
  v31 = (__int64)v16;
  memset(v16, 0, (unsigned int)(dword_14046454C << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(v16, qword_140464568, (unsigned int)(dword_140464588 << 12));
  v17 = RtlImageNtHeader(v12);
  v21 = v17;
  if ( v17->OptionalHeader.NumberOfRvaAndSizes <= 5
    || (VirtualAddress = v17->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
    && (v17->OptionalHeader.DataDirectory[5].Size + VirtualAddress > (unsigned int)BugCheckParameter2
     || (LdrRelocateImageWithBias(v12, v18, v19, v20, Conflict, Invalid) & 0x80000000) != 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v24 = RtlPerformRetpolineRelocationsOnImage(
                 v12,
                 (__int64)v12,
                 BugCheckParameter2,
                 v31,
                 (__int64)qword_140464568,
                 IsRetpolineEnabled),
         (int)(v24 + 0x80000000) >= 0)
     && v24 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v12, v7);
    return 0LL;
  }
  v21->OptionalHeader.ImageBase = (unsigned __int64)v12;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v5, PteAddress, v7, 1, v30);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v12, 0LL, inited, v8);
  }
  return v12;
}
