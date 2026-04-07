/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18000298C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028280 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180028630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002B6B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024E80 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024F58 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180025F6C (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *v2; // rbx
  unsigned int v4; // esi
  int inserted; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-20h]
  struct _MARGINS v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CVisual *v12; // [rsp+60h] [rbp+20h] BYREF
  struct CCanvasVisual *v13; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 53) )
  {
LABEL_2:
    v4 = 0;
    goto LABEL_3;
  }
  inserted = CCanvasVisual::Create(&v13);
  v1 = (volatile signed __int32 *)v13;
  v4 = inserted;
  if ( inserted < 0 )
  {
    v8 = 1069LL;
  }
  else
  {
    v7 = CTopLevelAtlasedRectsVisual::Create(&v12);
    v4 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42E,
        (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v7,
        v9);
      v2 = (volatile signed __int32 *)v12;
      goto LABEL_3;
    }
    v2 = (volatile signed __int32 *)v12;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v1 + 8), v12, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v8 = 1071LL;
    }
    else
    {
      *(_QWORD *)&v10.cxLeftWidth = 0LL;
      *(_QWORD *)&v10.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((CVisual *)v2, &v10);
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (struct CVisual *)v1, 0LL, 1, 1);
      v4 = inserted;
      if ( inserted >= 0 )
      {
        *((_QWORD *)this + 54) = v1;
        if ( v1 )
        {
          _InterlockedIncrement(v1 + 2);
          v1 = (volatile signed __int32 *)v13;
          v2 = (volatile signed __int32 *)v12;
        }
        *((_QWORD *)this + 53) = v2;
        if ( v2 )
        {
          _InterlockedIncrement(v2 + 2);
          v1 = (volatile signed __int32 *)v13;
          v2 = (volatile signed __int32 *)v12;
        }
        goto LABEL_2;
      }
      v8 = 1075LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)inserted,
    v9);
LABEL_3:
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  return v4;
}
