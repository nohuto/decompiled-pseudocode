/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E7CF4
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x1803E7778 (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E81D0 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802CD220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopR.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopRegistryHelpers>::Release(v1);
  }
  return result;
}
