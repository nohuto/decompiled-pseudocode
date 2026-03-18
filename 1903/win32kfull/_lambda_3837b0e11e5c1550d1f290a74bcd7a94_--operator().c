/*
 * XREFs of _lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator() @ 0x1C007C628
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C007C3D4 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C007F61C (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C007F900 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 */

unsigned __int64 __fastcall lambda_3837b0e11e5c1550d1f290a74bcd7a94_::operator()(__int64 a1, char a2, unsigned int a3)
{
  if ( !a2
    || MapFontFiles(
         **(_DWORD **)(a1 + 16),
         **(struct _FONTFILEVIEW ****)(a1 + 24),
         **(void ****)(a1 + 32),
         **(unsigned int ***)(a1 + 40)) )
  {
    return PDEVOBJ::LoadFontFile(
             *(PDEVOBJ **)a1,
             **(_DWORD **)(a1 + 16),
             **(unsigned __int64 ***)(a1 + 24),
             **(void ****)(a1 + 32),
             **(unsigned int ***)(a1 + 40),
             **(struct tagDESIGNVECTOR ***)(a1 + 8),
             gusLanguageID,
             a3);
  }
  else
  {
    return 0LL;
  }
}
