/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800A3CBC (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801AA818 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z @ 0x1801AA990 (-SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801B2434 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801B2C08 (-ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONI.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801B40F0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800A57F8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ecx
  struct CResource *v7; // rcx
  char v8; // al

  v2 = 0;
  if ( a2 != this[32] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2ADu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[32]);
      v7 = *this;
      this[32] = a2;
      v8 = (*((__int64 (__fastcall **)(struct CResource **))v7 + 42))(this);
      *((_BYTE *)this + 92) &= ~1u;
      *((_BYTE *)this + 92) |= v8 & 1;
      CVisual::UpdateBackdropBlurFlag(this);
      CVisual::PropagateFlags(this, 5LL);
    }
  }
  return v2;
}
