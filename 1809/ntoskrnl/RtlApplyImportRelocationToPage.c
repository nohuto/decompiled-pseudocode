/*
 * XREFs of RtlApplyImportRelocationToPage @ 0x1402F6BE8
 * Callers:
 *     MiUpdateRetpolineImportFixups @ 0x1401B56EC (MiUpdateRetpolineImportFixups.c)
 *     MiApplyRetpolineFixups @ 0x140853708 (MiApplyRetpolineFixups.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1402F755C (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructImportRelocationFixup @ 0x1402F77A0 (RtlpConstructImportRelocationFixup.c)
 */

__int64 __fastcall RtlApplyImportRelocationToPage(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // ebx
  _BYTE v12[16]; // [rsp+40h] [rbp-38h] BYREF

  v10 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v10 = a2 + (*a5 & 0xFFF);
  RtlpConstructImportRelocationFixup(v10, a3, a4, (_DWORD)a5, a6, a8, (__int64)v12);
  return RtlpApplyGenericRetpolineFixup(a1, 4096LL, v12, (unsigned int)(v10 - a2));
}
