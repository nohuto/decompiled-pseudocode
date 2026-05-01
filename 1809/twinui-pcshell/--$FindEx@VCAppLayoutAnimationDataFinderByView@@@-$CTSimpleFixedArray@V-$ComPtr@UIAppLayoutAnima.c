/*
 * XREFs of ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803B76BC
 * Callers:
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x1803B814C (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
        __int64 *a1,
        struct IUnknown **a2,
        struct IUnknown *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rbx
  struct IUnknown *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *a1;
    v12 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v10 + 24LL))(v10, &v12) >= 0 )
      v9 = SHIsSameObject(v12, *a2) == 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( !v9 )
      break;
    if ( ++v4 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
