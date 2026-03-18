/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800A2E28
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800A2DD8 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800299C4 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  char v5; // bp
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( a2 != this[31] )
  {
    v5 = 0;
    if ( a2 )
      v5 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 168LL))(a2);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB26u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags(this, 5LL);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v3;
}
