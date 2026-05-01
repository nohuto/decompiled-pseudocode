/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1800F81A0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x1800E8D54 (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA344 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1800FA078 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x1800FA5DC (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_1800FA5DC.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2)
{
  __int64 v4; // r8
  bool v5; // bl
  __int64 v6; // r15
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rbx
  bool v9; // bl
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v12 = *((_BYTE *)a2 + 16);
  v13 = 1;
  v5 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              (__int64)this + 704,
              (__int64)&v10,
              v4,
              &v16) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v6 = v16;
    v7 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 89) + 8 * v16);
    (**v7)(v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v14);
    v8 = v14;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( (*(unsigned int (__fastcall **)(__int64, const struct CTaskWindowFinder *, __int64 *))(*(_QWORD *)v8 + 80LL))(
           v8,
           a2,
           &v15) == 6 )
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 88) + 16LL))((char *)this + 704, v6);
  }
  else
  {
    v10 = *(_QWORD *)a2;
    v11 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v12 = *((_BYTE *)a2 + 16);
    v13 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v9 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                (__int64)this,
                (__int64)&v10,
                &v14,
                &v16) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      CApplicationManager::_RemoveWindowFromGlom(this, a2, v14);
    }
  }
  if ( v14 )
    CApplicationManager::_UpdatePerApplicationDataIfNeeded(this, v14, v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
}
