/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180005D20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180036C58 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180085F84 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180086408 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *this, struct CVisual **a2)
{
  int updated; // eax
  unsigned int v5; // edi
  CVisual *v6; // rbx
  __int64 v8; // rdx
  struct _MARGINS v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVisual *v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  updated = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v5 = updated;
  if ( updated < 0 )
  {
    v8 = 604LL;
    goto LABEL_19;
  }
  v6 = v11;
  if ( *((_DWORD *)this + 70) != 3 )
  {
    updated = CAccent::UpdateAccentPolicy(
                v11,
                (const struct tagRECT *)((char *)this + 616),
                (CAccent *)((char *)this + 280),
                *((struct CResource **)this + 52));
    v5 = updated;
    if ( updated < 0 )
    {
      v8 = 608LL;
      goto LABEL_19;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    *((_BYTE *)v6 + 398) = 1;
    *(_QWORD *)&v9.cxLeftWidth = 0LL;
    *(_QWORD *)&v9.cyTopHeight = 0LL;
    updated = CRenderDataVisual::ClearInstructions(v6);
    v5 = updated;
    if ( updated >= 0 )
    {
      CVisual::SetInsetFromParent(v6, &v9);
      *((_DWORD *)v6 + 71) = *((_DWORD *)this + 71);
      updated = CAccent::_EnsureBorderShadowAtlas(v6);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = CAccent::_UpdateBorderShadowParts(v6);
        v5 = updated;
        if ( updated >= 0 )
        {
          updated = CAccent::_UpdateBorderShadowForAccent(v6);
          v5 = updated;
          if ( updated >= 0 )
            goto LABEL_5;
          v8 = 621LL;
        }
        else
        {
          v8 = 620LL;
        }
      }
      else
      {
        v8 = 619LL;
      }
    }
    else
    {
      v8 = 616LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)updated,
      v9.cxLeftWidth);
    goto LABEL_8;
  }
LABEL_5:
  *a2 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v5 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  return v5;
}
