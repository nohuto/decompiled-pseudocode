/*
 * XREFs of ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F48F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800A316C (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1801F4788 (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801F4A48 (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::SetOriginOffsetProperty(
        CRadialGradientBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  bool IsCenteredGradient; // si
  const struct AnimationHelper::AnimatedProperty *v5; // rdx
  CResource *v6; // rcx
  const void *v7; // r8
  CRadialGradientBrush *v8; // rcx
  unsigned int v9; // edx

  IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
  if ( CResource::ModifyProperty(v6, v5, v7) )
  {
    CResource::InvalidateAnimationSources(this);
    if ( IsCenteredGradient == CRadialGradientBrush::IsCenteredGradient(this) )
    {
      v9 = 6;
    }
    else
    {
      wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset((char *)this + 184);
      v9 = 14;
      v8 = this;
    }
    CResource::NotifyOnChanged((__int64)v8, v9, 0LL);
  }
  return 0LL;
}
