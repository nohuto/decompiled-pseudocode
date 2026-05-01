/*
 * XREFs of ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1803FEDF0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktop@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FEB94 (--$MakeAndInitialize@VCVirtualDesktop@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtua.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x1803FEE24 (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006ADA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@@.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach(
        volatile signed __int64 **a1,
        volatile signed __int64 *a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktop,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
