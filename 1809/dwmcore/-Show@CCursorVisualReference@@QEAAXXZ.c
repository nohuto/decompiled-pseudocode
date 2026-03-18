/*
 * XREFs of ?Show@CCursorVisualReference@@QEAAXXZ @ 0x18016169C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisualReference::Show(CCursorVisualReference *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  struct CEffect *EffectInternal; // rax
  CMILCOMBase *v5; // rbx
  __int64 v6; // rcx
  char v7; // al

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 16);
  if ( v3 )
  {
    EffectInternal = CVisual::GetEffectInternal(*(CVisual **)(v1 + 16));
    v5 = EffectInternal;
    if ( EffectInternal
      && (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           51LL) )
    {
      *((_QWORD *)this + 2) = v5;
      CMILCOMBase::InternalAddRef(v5);
      v6 = *((_QWORD *)this + 2);
      if ( *(double *)(v6 + 72) == 0.0 )
      {
        *(_QWORD *)(v6 + 72) = 0x3FF0000000000000LL;
        CResource::NotifyOnChanged(v6, 0, 0LL);
      }
      else
      {
        ReleaseInterface<CCompositionSurfaceInfo>((CGdiSpriteBitmap **)this + 2);
      }
    }
    v7 = *(_BYTE *)(v3 + 94);
    *(_BYTE *)(v3 + 94) = v7 & 0xEF;
    *((_BYTE *)this + 24) = (v7 & 0x10) != 0;
    *((_DWORD *)this + 7) = 1;
  }
}
