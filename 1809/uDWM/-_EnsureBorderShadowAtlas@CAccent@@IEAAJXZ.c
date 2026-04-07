/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180005D20 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180025AB0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  int inserted; // eax
  unsigned int v3; // esi
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdi
  struct _MARGINS *v6; // rbx
  struct _MARGINS v8; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CVisual *v10; // [rsp+60h] [rbp+20h] BYREF
  struct CCanvasVisual *v11; // [rsp+68h] [rbp+28h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 53) )
    goto LABEL_15;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  inserted = CCanvasVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
    inserted = CTopLevelAtlasedRectsVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v10);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1064LL;
      goto LABEL_10;
    }
    v5 = (volatile signed __int32 *)v11;
    v6 = (struct _MARGINS *)v10;
    inserted = VisualCollection::InsertRelative((struct CCanvasVisual *)((char *)v11 + 32), v10, 0LL, 0, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1065LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v8.cxLeftWidth = 0LL;
    *(_QWORD *)&v8.cyTopHeight = 0LL;
    CVisual::SetInsetFromParent(v6, &v8);
    inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (struct CVisual *)v5, 0LL, 1u, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 1069LL;
      goto LABEL_10;
    }
    *((_QWORD *)this + 54) = v5;
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v6 = (struct _MARGINS *)v10;
    }
    *((_QWORD *)this + 53) = v6;
    if ( v6 )
      _InterlockedIncrement(&v6->cyTopHeight);
LABEL_15:
    v3 = 0;
    goto LABEL_16;
  }
  v4 = 1063LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)inserted);
LABEL_16:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  return v3;
}
