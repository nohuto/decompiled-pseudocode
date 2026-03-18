/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x14028A4F8
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x140289970 (HvlSvmAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x14028A6C8 (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvcallpExtendedFastHypercall(v5, a2, (unsigned int)(40 * a1));
  *a3 = WORD2(result) & 0xFFF;
  return result;
}
