/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180035FC0
 * Callers:
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180035AC0 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003B910 (-GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006B5A0 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18007E4B0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h]

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    v20 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(*a1 + 8 * v9);
    a5 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = -1;
    v19 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
           v11,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v19) >= 0 )
    {
      v16 = *a2;
      v17 = 0LL;
      v18 = 0;
      v12 = ((*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v19 + 296LL))(
               v19,
               &v16,
               *((unsigned int *)a2 + 2)) != 0)
          - 1;
      v13 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v12 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
