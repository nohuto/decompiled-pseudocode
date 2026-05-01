/*
 * XREFs of ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x1800F5470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___ @ 0x1800E8C30 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA1A4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::TerminateApplication(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rbx
  HRESULT Service; // ebx
  bool v10; // bl
  IUnknown *punk; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  void *ppvOut[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  ppvOut[1] = (void *)-2LL;
  ppvOut[0] = 0LL;
  v8 = a1 - 288;
  punk = 0LL;
  LODWORD(v17) = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)v8 + 32LL))(
    v8,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_ProcessLifetimeManagerControl,
              &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
              ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, __int64))(*(_QWORD *)ppvOut[0] + 96LL))(
                ppvOut[0],
                a2,
                a3,
                a4);
    if ( Service >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = 0LL;
      v17 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      v10 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1 - 336, &v17, &v14, 0LL) >= 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      if ( v10 )
      {
        punk = (IUnknown *)(a1 - 336);
        v13 = v14;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
        CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_ec20f1c18de424a8cf5f8595593a6052___(
          a1 + 288,
          (__int64)&punk);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Service = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x936,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return (unsigned int)Service;
}
