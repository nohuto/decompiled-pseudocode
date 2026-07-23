/*
 * XREFs of MiApplyRetpolineFixups @ 0x140854968
 * Callers:
 *     MiPerformFixups @ 0x1405E0B58 (MiPerformFixups.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     RtlApplyImportRelocationToPage @ 0x1402F6DD8 (RtlApplyImportRelocationToPage.c)
 *     RtlApplyIndirectRelocationToPage @ 0x1402F6E80 (RtlApplyIndirectRelocationToPage.c)
 *     RtlApplySwitchJumpRelocationToPage @ 0x1402F6F1C (RtlApplySwitchJumpRelocationToPage.c)
 */

void __fastcall MiApplyRetpolineFixups(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6,
        char a7)
{
  BOOL v9; // esi
  bool IsRetpolineEnabled; // al
  int v11; // r8d
  char *v12; // r13
  char *v13; // rdi
  char *v14; // rbx
  char *v15; // rbp
  bool v16; // al

  v9 = (a7 & 1) == 0;
  switch ( a6[3] )
  {
    case 3u:
      IsRetpolineEnabled = MiIsRetpolineEnabled();
      RtlApplyImportRelocationToPage(a1, a4, a5, (int)qword_140439F10, (_DWORD *)a6 + 2, v9, v11, !IsRetpolineEnabled);
      break;
    case 4u:
      RtlApplyIndirectRelocationToPage(a1, a4, a5, (int)qword_140439F10, a6 + 4, (a7 & 1) == 0, 1);
      break;
    case 5u:
      RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (int)qword_140439F10, a6 + 4, (a7 & 1) == 0, 1);
      break;
  }
  v12 = (char *)(a6 + 6);
  v13 = (char *)a6 + *a6 + 12;
  v14 = &v13[a6[1]];
  v15 = &v14[a6[2]];
  while ( v12 < v13 )
  {
    v16 = MiIsRetpolineEnabled();
    RtlApplyImportRelocationToPage(a1, a4, a5, (int)qword_140439F10, v12, v9, 0, !v16);
    v12 += 4;
  }
  while ( v13 < v14 )
  {
    RtlApplyIndirectRelocationToPage(a1, a4, a5, (int)qword_140439F10, v13, v9, 0);
    v13 += 2;
  }
  while ( v14 < v15 )
  {
    RtlApplySwitchJumpRelocationToPage(a1, a4, a5, (int)qword_140439F10, v14, v9, 0);
    v14 += 2;
  }
}
