/*
 * XREFs of MiUpdateRetpolineImportFixups @ 0x1401B582C
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 * Callees:
 *     RtlApplyImportRelocationToPage @ 0x1402F6DD8 (RtlApplyImportRelocationToPage.c)
 */

__int64 __fastcall MiUpdateRetpolineImportFixups(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  unsigned __int16 *v6; // rdi
  int v7; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // rsi
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
                 (_DWORD)qword_140439F10,
                 (__int64)(v6 + 4),
                 1,
                 1,
                 (KiSpeculationFeatures & 0x20000000000LL) == 0);
    v9 = (unsigned __int64)(v6 + 6);
    v10 = (unsigned __int64)v6 + *v6 + 12;
    while ( v9 < v10 )
    {
      result = RtlApplyImportRelocationToPage(
                 a1,
                 v7,
                 v4,
                 (_DWORD)qword_140439F10,
                 v9,
                 1,
                 0,
                 (KiSpeculationFeatures & 0x20000000000LL) == 0);
      v9 += 4LL;
    }
  }
  return result;
}
