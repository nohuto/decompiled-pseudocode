/*
 * XREFs of MiUpdateRetpolineImportFixups @ 0x140155CC4
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140155AE8 (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x14008DF0C (RtlApplyImportRelocationToPage.c)
 */

__int64 __fastcall MiUpdateRetpolineImportFixups(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  unsigned __int16 *v6; // rdi
  int v7; // ebx
  __int64 result; // rax
  _DWORD *v9; // rsi
  unsigned __int64 v10; // rdi

  v4 = a3;
  v6 = *(unsigned __int16 **)(a3 + 8LL * a4 + 56);
  if ( v6 )
  {
    v7 = a4 << 12;
    if ( v6[3] == 3 )
      result = RtlApplyImportRelocationToPage(
                 a1,
                 v7,
                 a3,
                 (int)qword_140464568,
                 (_DWORD *)v6 + 2,
                 1,
                 1,
                 (KiSpeculationFeatures & 0x2000000) == 0);
    v9 = v6 + 6;
    v10 = (unsigned __int64)v6 + *v6 + 12;
    while ( (unsigned __int64)v9 < v10 )
      result = RtlApplyImportRelocationToPage(
                 a1,
                 v7,
                 v4,
                 (int)qword_140464568,
                 v9++,
                 1,
                 0,
                 (KiSpeculationFeatures & 0x2000000) == 0);
  }
  return result;
}
