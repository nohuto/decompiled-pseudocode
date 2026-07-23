/*
 * XREFs of PopGenerateMdl @ 0x140144AD0
 * Callers:
 *     PopAllocatePages @ 0x14056CBD0 (PopAllocatePages.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140010EE0 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall PopGenerateMdl(__int64 a1)
{
  unsigned __int64 v2; // rdi
  PMDL PagesForMdl; // rax
  PMDL v4; // r8
  unsigned __int64 v5; // rax

  v2 = __rdtsc();
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, a1 << 12, MmCached, 0xDu);
  v4 = PagesForMdl;
  if ( PagesForMdl )
  {
    PagesForMdl->Next = *(struct _MDL **)(BugCheckParameter4 + 128);
    *(_QWORD *)(BugCheckParameter4 + 128) = PagesForMdl;
    *(_QWORD *)(BugCheckParameter4 + 136) += a1;
  }
  v5 = __rdtsc();
  qword_140418C48 += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v2;
  return v4;
}
