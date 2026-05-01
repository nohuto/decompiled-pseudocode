/*
 * XREFs of ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1800EDCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA100 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1800F6840 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800F6E9C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplication(CApplicationManager *this, const unsigned __int16 *a2)
{
  char v4; // di
  CApplicationManager *i; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v8; // [rsp+48h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v7 = 0LL;
  v8 = a2;
  for ( i = (CApplicationManager *)((char *)this - 152); ; CApplicationManager::_ForgetApplicationNoLock(i, v7, 2LL) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((__int64)i, &v8, &v7) < 0 )
      break;
    v4 = 1;
  }
  CApplicationManager::_DeleteApplicationData(i, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return v4 == 0 ? 0x80070490 : 0;
}
