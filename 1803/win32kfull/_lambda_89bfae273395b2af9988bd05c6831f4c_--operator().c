/*
 * XREFs of _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00BECD0
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00BEA68 (UmfdLoadFontFileView.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00CEF80 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 */

unsigned __int64 __fastcall lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(__int64 a1, char a2, unsigned int a3)
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
