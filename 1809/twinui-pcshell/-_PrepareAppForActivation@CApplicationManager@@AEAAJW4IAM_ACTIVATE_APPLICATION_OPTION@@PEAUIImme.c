/*
 * XREFs of ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18005D988
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18005D890 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18005DAC4 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800F6E9C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_PrepareAppForActivation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int v7; // r10d
  signed int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v13[1] = -2LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *(_DWORD *)(a1 + 952);
  v8 = v7 != 2 ? 0x80070005 : 0;
  if ( v7 == 2 )
  {
    v9 = 0LL;
    v14 = 0LL;
    v12 = a3;
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = v14;
    }
    if ( v9 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v14 = 0LL;
    v15 = 0LL;
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
           (int)a1 + 632,
           (unsigned int)&v12,
           (unsigned int)&v15,
           (unsigned int)v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( v8 >= 0 )
      v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 632) + 8LL * v13[0]))(
             *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8LL * v13[0]),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( v8 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 312LL))(v14, a2, &v15);
      v8 = v10;
      if ( v10 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(a1, v14, 1LL);
      }
      else if ( v10 >= 0 && a4 )
      {
        *a4 = v15;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  return (unsigned int)v8;
}
