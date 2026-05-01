/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x180095E20
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x1800960B8 (--$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA-AV-$Co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C58 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180123104 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x18012332C (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x1801236B4 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,CCommonApplicationViewPosition,Geometry::CRect &>(
        _QWORD *a1,
        __int128 *a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  CCommonApplicationViewPosition *v6; // rax
  __int128 v7; // xmm0
  Microsoft::WRL::Details *v8; // rcx
  volatile int *v9; // rdx
  __int64 v10; // r10
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v5);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v12, v6);
    v7 = *a2;
    v13 = 0LL;
    v8 = (Microsoft::WRL::Details *)(v12 + 68);
    *(_OWORD *)(v12 + 16) = v7;
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v8, v9);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(&v12);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v13);
  return v2;
}
