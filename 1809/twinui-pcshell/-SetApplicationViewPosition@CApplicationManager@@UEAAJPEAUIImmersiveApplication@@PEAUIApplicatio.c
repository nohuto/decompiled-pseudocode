/*
 * XREFs of ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x1800F2A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA1A4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800FA2C4 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::SetApplicationViewPosition(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  int First; // edi
  __int64 v10; // [rsp+A0h] [rbp+30h] BYREF
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1 - 216, &v11, &v10, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( First < 0 )
  {
    if ( !a3 && a4 == 2050 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      if ( (**a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v10) >= 0 )
        First = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 600LL))(v10, 1LL);
    }
  }
  else
  {
    CApplicationManager::_SetViewPositionHelper(
      a1 - 216,
      a3,
      0LL,
      0LL,
      a4,
      *(_DWORD *)(a1 + 736),
      0LL,
      0LL,
      1,
      0,
      a2,
      v10,
      -2LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return (unsigned int)First;
}
