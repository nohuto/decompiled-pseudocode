/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18013CA0C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18003FCD0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x18012A3F0 (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18012BD08 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18013F040 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x18013F59C (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_18013F59C.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2)
{
  _QWORD *v4; // r15
  __int64 v5; // r8
  bool v6; // bl
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned int (__fastcall *v10)(__int64, const struct CTaskWindowFinder *, __int64 *); // rdi
  bool v11; // bl
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = (_QWORD *)((char *)this + 704);
  v12 = *(_QWORD *)a2;
  v13 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v14 = *((_BYTE *)a2 + 16);
  v15 = 1;
  v6 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              (__int64)v4,
              (__int64)&v12,
              v5,
              &v18) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v6 )
  {
    v7 = v4[1];
    v8 = v18;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 8 * v8))(
      *(_QWORD *)(v7 + 8 * v8),
      &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
      &v16);
    v9 = v16;
    v10 = *(unsigned int (__fastcall **)(__int64, const struct CTaskWindowFinder *, __int64 *))(*(_QWORD *)v16 + 80LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( v10(v9, a2, &v17) == 6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 16LL))(v4, v8);
  }
  else
  {
    v12 = *(_QWORD *)a2;
    v13 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v14 = *((_BYTE *)a2 + 16);
    v15 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v11 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                 (__int64)this,
                 (__int64)&v12,
                 &v16,
                 &v18) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      CApplicationManager::_RemoveWindowFromGlom(this, a2, v16);
    }
  }
  if ( v16 )
    CApplicationManager::_UpdatePerApplicationDataIfNeeded(this, v16, v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
}
