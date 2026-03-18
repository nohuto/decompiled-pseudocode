/*
 * XREFs of RtlApplyIndirectRelocationToImage @ 0x1401880A0
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187A28 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x14008DFC0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x14008E328 (RtlpConstructIndirectRelocationFixup.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

_BYTE *__fastcall RtlApplyIndirectRelocationToImage(
        unsigned __int64 a1,
        unsigned int a2,
        int *a3,
        __int64 a4,
        int a5,
        __int16 *a6,
        int a7)
{
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  __int16 v12; // [rsp+3Ch] [rbp-2Ch]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  RtlpConstructIndirectRelocationFixup(a5 + (*a6 & 0xFFF), a3, a4, a6, a7, (__int64)&v10);
  return RtlpApplyGenericRetpolineFixup(a1, a2, &v10, a5 + (*a6 & 0xFFFu));
}
