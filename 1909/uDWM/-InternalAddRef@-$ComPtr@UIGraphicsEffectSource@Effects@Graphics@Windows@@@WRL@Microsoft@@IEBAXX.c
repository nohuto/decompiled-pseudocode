/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C800
 * Callers:
 *     ?GetSource@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x18003CB40 (-GetSource@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSour.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003D4E4 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?get_Source@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x1800BA270 (-get_Source@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSour.c)
 *     ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x1800BA330 (-put_Source@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUIGraphicsEffectSource@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
