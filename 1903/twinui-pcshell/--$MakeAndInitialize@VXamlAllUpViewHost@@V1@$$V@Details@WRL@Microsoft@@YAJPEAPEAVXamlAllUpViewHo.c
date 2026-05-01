/*
 * XREFs of ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x1802BFC94
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA?AV?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@XZ @ 0x1802BFD58 (--$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA-AV-$ComPtr@VXamlAllUpViewHost@@@WRL@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlAllUpViewHost@@QEAA@XZ @ 0x1802C3304 (--0XamlAllUpViewHost@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z @ 0x1802C6B18 (-Attach@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CB058 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x1802CD98C (-RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAllUpViewHost,XamlAllUpViewHost,>(
        XamlAllUpViewHost **a1)
{
  XamlAllUpViewHost *v2; // rax
  int v3; // edi
  XamlAllUpViewHost *v4; // rax
  XamlAllUpViewHost *v5; // rbx
  XamlAllUpViewHost *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (XamlAllUpViewHost *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlAllUpViewHost::XamlAllUpViewHost(v2);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<XamlAllUpViewHost>::Attach(&v7, v4);
    v8 = 0LL;
    v5 = v7;
    v3 = XamlAllUpViewHost::RuntimeClassInitialize(v7);
    if ( v3 >= 0 )
    {
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v5 + 39);
        v5 = v7;
      }
      *a1 = v5;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
