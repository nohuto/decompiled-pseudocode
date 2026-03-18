/*
 * XREFs of RtlApplyIndirectRelocationToPage @ 0x140097A78
 * Callers:
 *     MiApplyRetpolineFixups @ 0x14065A9C0 (MiApplyRetpolineFixups.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x140097BE0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x140097F48 (RtlpConstructIndirectRelocationFixup.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall RtlApplyIndirectRelocationToPage(__int64 a1, int a2, int a3, int a4, _WORD *a5, int a6, int a7)
{
  int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  __int16 v13; // [rsp+3Ch] [rbp-2Ch]

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v9 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v9 = a2 + (*a5 & 0xFFF);
  RtlpConstructIndirectRelocationFixup(v9, a3, a4, (_DWORD)a5, a6, (__int64)&v11);
  return RtlpApplyGenericRetpolineFixup(a1, 4096LL, &v11, (unsigned int)(v9 - a2));
}
