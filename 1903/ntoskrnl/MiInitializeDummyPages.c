/*
 * XREFs of MiInitializeDummyPages @ 0x140A1AC5C
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     MiAllocateDummyPage @ 0x140A1AEB0 (MiAllocateDummyPage.c)
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
  qword_140466860 = (v2 >> 63) + v2;
  MiFillPhysicalPages(qword_140466860, qword_140466860, 0LL);
  qword_140466840 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140466840 + 16) = v0;
  qword_140466848 = (qword_140466840 + 0x58000000000LL) / 48;
  MiFillPhysicalPages(qword_140466848, qword_140466848, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = (DummyPage + 0x58000000000LL) / 48;
  qword_1404668C8 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140466860,
               1);
  MiFillPhysicalPages(v4, v6, ValidPte);
  qword_1404668D0 = ((qword_1404668C8 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                  (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                - 0x98000000000LL,
                                                                  qword_140466860,
                                                                  134217729) & 0xFFFF000000000FFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = (v7 + 0x58000000000LL) / 48;
  qword_1404668D8 = v8;
  v9 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140466848, 1);
  MiFillPhysicalPages(v8, v10, v9);
  result = ((qword_1404668D8 & 0xFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                         (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                       - 0x98000000000LL,
                                                         qword_140466848,
                                                         134217729) & 0xFFFF000000000FFFuLL;
  qword_1404668E0 = result;
  return result;
}
