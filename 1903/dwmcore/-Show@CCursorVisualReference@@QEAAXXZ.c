/*
 * XREFs of ?Show@CCursorVisualReference@@QEAAXXZ @ 0x18018D000
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x180080904 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisualReference::Show(CCursorVisualReference *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  struct CEffect *EffectInternal; // rax
  CMILCOMBase *v5; // rbx
  float *v6; // rcx
  float v7; // xmm1_4
  __int64 v8; // rax
  char v9; // al

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 16);
  if ( v3 )
  {
    EffectInternal = CVisual::GetEffectInternal(*(CVisual **)(v1 + 16));
    v5 = EffectInternal;
    if ( EffectInternal
      && (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           53LL) )
    {
      *((_QWORD *)this + 2) = v5;
      CMILCOMBase::InternalAddRef(v5);
      v6 = (float *)*((_QWORD *)this + 2);
      v7 = v6[18];
      if ( v7 == 0.0 )
      {
        if ( 1.0 != v7 )
        {
          v8 = *(_QWORD *)v6;
          v6[18] = 1.0;
          (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v8 + 64))(v6, 0LL, 0LL);
        }
      }
      else
      {
        ReleaseInterface<MoveOptimizationInfo>((CGdiSpriteBitmap **)this + 2);
      }
    }
    v9 = *(_BYTE *)(v3 + 94);
    *(_BYTE *)(v3 + 94) = v9 & 0xF7;
    *((_BYTE *)this + 24) = (v9 & 8) != 0;
    *((_DWORD *)this + 7) = 1;
  }
}
