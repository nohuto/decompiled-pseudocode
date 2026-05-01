/*
 * XREFs of ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x180071950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180071A40 (--$FindEx@VCImmersiveAppFinderByAppId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInt.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // edi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF
  const unsigned __int16 *v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  v12 = a2;
  v10 = 0LL;
  v11 = 0LL;
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByAppId>(
         (int)this + 464,
         (unsigned int)&v12,
         (unsigned int)&v11,
         (unsigned int)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 58) + 8 * v13);
    v7 = (**v8)(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v10);
    if ( v7 >= 0 )
      v7 = (**v10)(v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
