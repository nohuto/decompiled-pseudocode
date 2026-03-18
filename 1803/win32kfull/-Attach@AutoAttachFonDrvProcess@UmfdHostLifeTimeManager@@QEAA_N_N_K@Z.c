/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N_K@Z @ 0x1C0056614
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0056514 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C025AAF8 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        char a2,
        __int64 a3)
{
  char result; // al

  if ( a2 )
  {
    if ( UmfdHostLifeTimeManager::s_Ready && a3 == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
    {
      KeStackAttachProcess(UmfdHostLifeTimeManager::s_UmfdHostProcess, (PRKAPC_STATE)((char *)this + 8));
      *((_BYTE *)this + 56) = 1;
    }
    return *((_BYTE *)this + 56);
  }
  else
  {
    KeStackAttachProcess(gpepCSRSS, (PRKAPC_STATE)((char *)this + 8));
    result = 1;
    *((_BYTE *)this + 56) = 1;
  }
  return result;
}
