/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B820
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18007B6E0 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801C5770 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ?EnsureContent@CGlyphRunVisual@@AEAAJPEAPEAVCGlyphRunContent@@@Z @ 0x1801D4ED4 (-EnsureContent@CGlyphRunVisual@@AEAAJPEAPEAVCGlyphRunContent@@@Z.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801E98E0 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z @ 0x1801EC5F0 (-SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F8B14 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801FA350 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18007B8BC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18007BCD4 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // edi
  signed int v5; // eax
  __int64 v6; // rcx
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
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2C6u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[32]);
      v7 = *this;
      this[32] = a2;
      v8 = (*((__int64 (__fastcall **)(struct CResource **))v7 + 47))(this);
      *((_BYTE *)this + 92) &= ~1u;
      *((_BYTE *)this + 92) |= v8 & 1;
      CVisual::UpdateBackdropBlurFlag((CVisual *)this);
      CVisual::PropagateFlags((__int64)this, 5u, 0);
    }
  }
  return v2;
}
