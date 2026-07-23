/*
 * XREFs of MiUseLargeDriverPage @ 0x140684420
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402B9210 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1402CB3E4 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x1402F7264 (RtlPerformRetpolineRelocationsOnImage.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     MiChargeSystemImageCommitment @ 0x1406843BC (MiChargeSystemImageCommitment.c)
 *     LdrRelocateImageWithBias @ 0x14072B948 (LdrRelocateImageWithBias.c)
 *     MiUnmapLargeDriver @ 0x14085EBDC (MiUnmapLargeDriver.c)
 */

char *__fastcall MiUseLargeDriverPage(__int64 a1, unsigned int a2, const void *a3, const UNICODE_STRING *a4)
{
  __int64 v6; // rsi
  int v8; // edi
  __int64 i; // rbx
  unsigned __int64 v10; // r13
  unsigned __int64 j; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  char *PageTablesForLargeMap; // rbx
  __int64 v15; // rsi
  unsigned int v16; // r15d
  char *v17; // r12
  PIMAGE_NT_HEADERS v18; // rax
  const CHAR *v19; // r8
  ULONG v20; // r9d
  PIMAGE_NT_HEADERS v21; // rsi
  unsigned int VirtualAddress; // eax
  LONGLONG v23; // rdx
  bool IsRetpolineEnabled; // al
  int v25; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  ULONG Conflict; // [rsp+20h] [rbp-B8h]
  ULONG Invalid; // [rsp+28h] [rbp-B0h]
  ULONG_PTR v31; // [rsp+60h] [rbp-78h] BYREF
  __int64 v32; // [rsp+68h] [rbp-70h]
  char *AnyMultiplexedVm; // [rsp+70h] [rbp-68h]
  char *v34; // [rsp+78h] [rbp-60h]
  _QWORD v35[6]; // [rsp+80h] [rbp-58h] BYREF

  v6 = a2;
  memset(v35, 0, 0x28uLL);
  if ( (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( !byte_140439F8D )
  {
    v8 = 0;
    for ( i = qword_140439F98; (__int64 *)i != &qword_140439F98; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(a4, (PCUNICODE_STRING)(i + 16), 1u) )
      {
        v8 = 1;
        break;
      }
    }
    if ( !v8 )
      return 0LL;
  }
  if ( a1 )
  {
    v10 = MiSectionControlArea(a1);
    for ( j = v10 + 128; j; j = *(_QWORD *)(j + 16) )
    {
      if ( (*(_BYTE *)(j + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v32 = v6;
  v12 = (v6 + (unsigned int)dword_140439EF4 + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v13 = MiRoundUpToPowerOf2SizeT(v12);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              0x200uLL,
              0xFFFFFFFFFuLL,
              v13,
              v13,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              (__int64 *)&v31) < 0 )
    return 0LL;
  if ( v13 > v12 )
    MiFreeContiguousPages((__int64)&MiSystemPartition, v12 + v31, v13 - v12);
  PageTablesForLargeMap = (char *)MiGetPageTablesForLargeMap(v12, 0xCu);
  v34 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    MiFreeContiguousPages((__int64)&MiSystemPartition, v31, v12);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)PageTablesForLargeMap, v31, v12, 1, 6, 1);
  v15 = (unsigned int)((_DWORD)v6 << 12);
  v16 = v15;
  memmove(PageTablesForLargeMap, a3, (unsigned int)v15);
  v17 = &PageTablesForLargeMap[(unsigned int)v15];
  memset(v17, 0, (unsigned int)(dword_140439EF4 << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&PageTablesForLargeMap[v15], qword_140439F10, (unsigned int)(dword_140439F20 << 12));
  v18 = RtlImageNtHeader(PageTablesForLargeMap);
  v21 = v18;
  if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 5
    || (VirtualAddress = v18->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
    && ((v23 = VirtualAddress + v21->OptionalHeader.DataDirectory[5].Size, (unsigned int)v23 > v16)
     || (LdrRelocateImageWithBias(PageTablesForLargeMap, v23, v19, v20, Conflict, Invalid) & 0x80000000) != 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v25 = RtlPerformRetpolineRelocationsOnImage(
                 PageTablesForLargeMap,
                 (__int64)PageTablesForLargeMap,
                 v16,
                 (__int64)v17,
                 (__int64)qword_140439F10,
                 IsRetpolineEnabled),
         (int)(v25 + 0x80000000) >= 0)
     && v25 != -1073741637) )
  {
    MiUnmapLargeDriver(PageTablesForLargeMap, v32);
    return 0LL;
  }
  v21->OptionalHeader.ImageBase = (unsigned __int64)PageTablesForLargeMap;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v10, PteAddress, v32, 1, v35);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)PageTablesForLargeMap, 0LL, inited, v12);
  }
  return PageTablesForLargeMap;
}
