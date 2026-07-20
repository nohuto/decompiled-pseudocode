/*
 * XREFs of SmpAllocateInitialCommandBuffer @ 0x140004EB4
 * Callers:
 *     SmpStartCsr @ 0x140004B40 (SmpStartCsr.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004FB0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

__int64 __fastcall SmpAllocateInitialCommandBuffer(unsigned int a1, __m128i *a2)
{
  unsigned __int16 v4; // ax
  SIZE_T v5; // rdi
  PVOID Heap; // rax
  int v8; // [rsp+20h] [rbp-58h]
  UNICODE_STRING Source; // [rsp+30h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+40h] [rbp-38h] BYREF

  v4 = _mm_cvtsi128_si32(*a2);
  Source = (UNICODE_STRING)*a2;
  v5 = SmpHelperCmd.Length + 40LL + v4;
  if ( v5 > 0xFFFF )
    return 3221225485LL;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, v5);
  if ( !Heap )
    return 3221225495LL;
  a2->m128i_i64[0] = 0LL;
  a2->m128i_i16[1] = v5;
  a2->m128i_i64[1] = (__int64)Heap;
  RtlAppendUnicodeStringToString((PUNICODE_STRING)a2, &SmpHelperCmd);
  v8 = (int)SmpSharedSection;
  RtlStringCbPrintfW(pszDest, 0x28uLL, L" %08x %08x ", a1, v8);
  RtlAppendUnicodeToString((PUNICODE_STRING)a2, pszDest);
  RtlAppendUnicodeStringToString((PUNICODE_STRING)a2, &Source);
  return 0LL;
}
