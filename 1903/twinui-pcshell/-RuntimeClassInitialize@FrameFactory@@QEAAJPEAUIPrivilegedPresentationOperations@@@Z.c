/*
 * XREFs of ?RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x18014D310
 * Callers:
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x18010BA48 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall FrameFactory::RuntimeClassInitialize(
        FrameFactory *this,
        struct IPrivilegedPresentationOperations *a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (__int64 *)this;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  ppv += 7;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(ppv);
  Instance = CoCreateInstance(
               &GUID_ddc05a5a_351a_4e06_8eaf_54ec1bc2dcea,
               0LL,
               1u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               (LPVOID *)ppv);
  v4 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)Instance);
  return v4;
}
