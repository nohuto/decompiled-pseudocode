/*
 * XREFs of ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x1800F61D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z @ 0x1800E9AA0 (--$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z.c)
 */

__int64 __fastcall CApplicationManager::WaitForReconstitution(CApplicationManager *this, char a2)
{
  unsigned int v2; // ebx

  v2 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) == 0 ? 0x8007000C : 0;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    WaitOnAddressHelper<bool>((char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5, a2);
  return v2;
}
