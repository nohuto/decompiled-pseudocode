/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewTitlebarConfiguration@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x180095D90
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180096030 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C58 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x180119064 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x18011AA60 (-Attach@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationView.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18011D554 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTitlebarConfiguration,ApplicationViewTitlebarConfiguration,>(
        _QWORD *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  ApplicationViewTitlebarConfiguration *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r10
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v3;
  if ( v3 )
  {
    v4 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration((ApplicationViewTitlebarConfiguration *)v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::Attach(&v8, v4);
    v6 = v8;
    v9 = 0LL;
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 44), v5);
    *a1 = v6;
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v8);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v9);
  return v1;
}
