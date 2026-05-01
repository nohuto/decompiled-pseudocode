/*
 * XREFs of ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804395B8
 * Callers:
 *     ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1804398C0 (-GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  *a4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 8 * v4) + 32LL))(*(_QWORD *)(*a1 + 8 * v4)) != *a2 )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
