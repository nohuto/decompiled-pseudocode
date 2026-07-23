/*
 * XREFs of RtlApplyImportRelocationToImage @ 0x1402F6D34
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1402F774C (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructImportRelocationFixup @ 0x1402F7990 (RtlpConstructImportRelocationFixup.c)
 */

__int64 __fastcall RtlApplyImportRelocationToImage(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  _BYTE v11[16]; // [rsp+40h] [rbp-38h] BYREF

  RtlpConstructImportRelocationFixup(a5 + (*a6 & 0xFFF), a3, a4, (_DWORD)a6, a7, a8, (__int64)v11);
  return RtlpApplyGenericRetpolineFixup(a1, a2, v11, a5 + (*a6 & 0xFFFu));
}
