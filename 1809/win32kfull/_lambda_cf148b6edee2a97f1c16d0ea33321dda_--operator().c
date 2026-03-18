/*
 * XREFs of _lambda_cf148b6edee2a97f1c16d0ea33321dda_::operator() @ 0x1C00913A8
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0091154 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C009290C (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00929C4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 */

unsigned __int64 __fastcall lambda_cf148b6edee2a97f1c16d0ea33321dda_::operator()(__int64 a1, char a2, unsigned int a3)
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
