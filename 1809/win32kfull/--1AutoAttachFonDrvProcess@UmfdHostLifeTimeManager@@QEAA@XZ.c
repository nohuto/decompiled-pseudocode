/*
 * XREFs of ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C026D734
 * Callers:
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026E284 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C029D0C0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  ULONG v2; // ecx

  if ( *((_BYTE *)this + 56) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
    v2 = *((_DWORD *)this + 15);
    if ( v2 )
      EngSetLastError(v2);
  }
  if ( *(_QWORD *)this )
  {
    GreReleasePushLockShared(*(_QWORD *)this);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
