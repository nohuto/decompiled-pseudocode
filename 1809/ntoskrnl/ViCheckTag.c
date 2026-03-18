/*
 * XREFs of ViCheckTag @ 0x14092CFBC
 * Callers:
 *     ViCheckAdapterBuffers @ 0x14092CCBC (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x14092CE08 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x14092D6BC (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // rsi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = a2;
  v6 = a2;
  v9 = (void *)a1;
  v10 = (const void *)(a2 + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_1404054A4,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_1404054A4);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140405498,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140405498);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}
