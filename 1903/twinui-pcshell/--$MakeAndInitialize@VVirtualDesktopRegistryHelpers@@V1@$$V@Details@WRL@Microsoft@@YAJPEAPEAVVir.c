/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x1803E7778
 * Callers:
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E81D0 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopRegistryHelpers@@QEAA@XZ @ 0x1803E7800 (--0VirtualDesktopRegistryHelpers@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E7CF4 (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x1803E8058 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(
        VirtualDesktopRegistryHelpers **a1)
{
  VirtualDesktopRegistryHelpers *v2; // rax
  int v3; // edi
  VirtualDesktopRegistryHelpers *v4; // rbx
  VirtualDesktopRegistryHelpers *v6; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopRegistryHelpers *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (VirtualDesktopRegistryHelpers *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v6 = VirtualDesktopRegistryHelpers::VirtualDesktopRegistryHelpers(v2);
    v4 = v6;
    v3 = VirtualDesktopRegistryHelpers::RuntimeClassInitialize(v6);
    if ( v3 >= 0 )
    {
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)v4 + 3);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
