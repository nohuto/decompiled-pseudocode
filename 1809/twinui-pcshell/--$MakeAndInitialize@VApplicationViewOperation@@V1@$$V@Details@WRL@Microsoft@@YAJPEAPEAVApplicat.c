/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x180095D04
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180095FA8 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 * Callees:
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x1800289E8 (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@Z @ 0x1801408B4 (-Attach@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAAXPEAVApplicationViewOperation@@@.c)
 *     ?InternalAddRef@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEBAXXZ @ 0x180141C34 (-InternalAddRef@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewOperation,ApplicationViewOperation,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  ApplicationViewOperation *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = ApplicationViewOperation::ApplicationViewOperation((ApplicationViewOperation *)v3);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::Attach(&v6, v4);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalAddRef(&v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v6);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v7);
  return v2;
}
