/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18007B610
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x18007B5C0 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B9BD0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800C860C (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(struct CResource **this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  char v5; // bp
  signed int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( a2 != this[31] )
  {
    v5 = 0;
    if ( a2 )
      v5 = (*(__int64 (__fastcall **)(struct CGeometry *))(*(_QWORD *)a2 + 208LL))(a2);
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB7Au, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags((__int64)this, 5u, 0);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v3;
}
