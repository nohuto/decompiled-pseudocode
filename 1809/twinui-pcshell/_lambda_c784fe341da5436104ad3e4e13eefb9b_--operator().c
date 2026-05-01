/*
 * XREFs of _lambda_c784fe341da5436104ad3e4e13eefb9b_::operator() @ 0x1800EC04C
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x1800EC190 (CDelayIAMOperations--CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18007E4B0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800FA1D8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_c784fe341da5436104ad3e4e13eefb9b_::operator()(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // [rsp+38h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp-10h]
  unsigned int v5; // [rsp+70h] [rbp+20h] BYREF
  __int64 v6; // [rsp+78h] [rbp+28h] BYREF
  __int64 v7; // [rsp+80h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  if ( (int)CoreEnumWindowServices(a1[1], &v5, &pv) >= 0 )
  {
    if ( v5 )
    {
      v6 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
      v3 = a1[1];
      v4 = 2;
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(*a1, &v3, &v6, 0LL);
      v2 = 5;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 384LL))(v6) == a1[1] )
        v2 = 7;
      v7 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v6)(v6, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v7);
      CApplicationManager::_SendServiceAvailabilityChangedNotification(*a1, v7, v5, pv, v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
    }
    CoTaskMemFree(pv);
  }
}
