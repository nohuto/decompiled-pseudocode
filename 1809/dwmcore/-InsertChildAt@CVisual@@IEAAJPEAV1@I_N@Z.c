/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18006DAE4
 * Callers:
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18006DA6C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18006DB84 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8C28 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, CVisual **a2, unsigned int a3, bool a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  CVisual *v10; // rcx

  if ( a2[10] == this )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2D4u);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (unsigned __int64)a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2D7u);
    }
    else
    {
      (*((void (__fastcall **)(CVisual **))*a2 + 1))(a2);
      v10 = a2[10];
      if ( v10 )
        CVisual::RemoveChild(v10, (struct CVisual *)a2, 0);
      a2[10] = this;
      CVisual::OnOuterTransformChanged((CVisual *)a2);
      CVisual::OnClipChanged((CVisual *)a2);
      if ( (*((_BYTE *)a2 + 95) & 8) != 0 )
        CVisual::DirtyForVisibleChild(this, (struct CVisual *)a2, a4);
    }
  }
  return v9;
}
