/*
 * XREFs of MiInitializeDummyPages @ 0x1409BA6DC
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x1409BA930 (MiAllocateDummyPage.c)
 */

unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  v2 = (__int64)((unsigned __int128)((v1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  qword_14043BEA0 = (v2 >> 63) + v2;
  MiFillPhysicalPages(qword_14043BEA0, qword_14043BEA0, 0LL);
  qword_14043BE80 = MiAllocateDummyPage();
  *(_QWORD *)(qword_14043BE80 + 16) = v0;
  qword_14043BE88 = (qword_14043BE80 + 0x58000000000LL) / 48;
  MiFillPhysicalPages(qword_14043BE88, qword_14043BE88, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = (DummyPage + 0x58000000000LL) / 48;
  qword_14043BF08 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_14043BEA0,
               1);
  MiFillPhysicalPages(v4, v6, ValidPte);
  qword_14043BF10 = ((qword_14043BF08 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                  (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                - 0x98000000000LL,
                                                                  qword_14043BEA0,
                                                                  134217729) & 0xFFFF000000000FFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = (v7 + 0x58000000000LL) / 48;
  qword_14043BF18 = v8;
  v9 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_14043BE88, 1);
  MiFillPhysicalPages(v8, v10, v9);
  result = ((qword_14043BF18 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000000LL,
                                                         qword_14043BE88,
                                                         134217729) & 0xFFFF000000000FFFuLL;
  qword_14043BF20 = result;
  return result;
}
