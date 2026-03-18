/*
 * XREFs of MiApplyRetpolineFixups @ 0x14065A9C0
 * Callers:
 *     MiPerformFixups @ 0x14065A690 (MiPerformFixups.c)
 * Callees:
 *     RtlApplyIndirectRelocationToPage @ 0x140097A78 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplyImportRelocationToPage @ 0x140097B24 (RtlApplyImportRelocationToPage.c)
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x14013624C (RtlApplySwitchJumpRelocationToPage.c)
 */

_UNKNOWN **__fastcall MiApplyRetpolineFixups(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6,
        char a7)
{
  _UNKNOWN **result; // rax
  BOOL v10; // esi
  char *v11; // r13
  char *v12; // rdi
  char *v13; // rbx
  char *v14; // rbp
  bool v15; // al
  bool IsRetpolineEnabled; // al
  int v17; // r8d
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v10 = (a7 & 1) == 0;
  switch ( a6[3] )
  {
    case 3u:
      IsRetpolineEnabled = MiIsRetpolineEnabled();
      result = (_UNKNOWN **)RtlApplyImportRelocationToPage(
                              a1,
                              a4,
                              a5,
                              (int)qword_140464868,
                              (_DWORD *)a6 + 2,
                              v10,
                              v17,
                              !IsRetpolineEnabled);
      break;
    case 4u:
      result = (_UNKNOWN **)RtlApplyIndirectRelocationToPage(a1, a4, a5, (int)qword_140464868, a6 + 4, (a7 & 1) == 0, 1);
      break;
    case 5u:
      result = (_UNKNOWN **)RtlApplySwitchJumpRelocationToPage(
                              a1,
                              a4,
                              a5,
                              (int)qword_140464868,
                              a6 + 4,
                              (a7 & 1) == 0,
                              1);
      break;
  }
  v11 = (char *)(a6 + 6);
  v12 = (char *)a6 + *a6 + 12;
  v13 = &v12[a6[1]];
  v14 = &v13[a6[2]];
  while ( v11 < v12 )
  {
    v15 = MiIsRetpolineEnabled();
    result = (_UNKNOWN **)RtlApplyImportRelocationToPage(a1, a4, a5, (int)qword_140464868, v11, v10, 0, !v15);
    v11 += 4;
  }
  while ( v12 < v13 )
  {
    result = (_UNKNOWN **)RtlApplyIndirectRelocationToPage(a1, a4, a5, (int)qword_140464868, v12, v10, 0);
    v12 += 2;
  }
  while ( v13 < v14 )
  {
    result = (_UNKNOWN **)RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (int)qword_140464868, v13, v10, 0);
    v13 += 2;
  }
  return result;
}
