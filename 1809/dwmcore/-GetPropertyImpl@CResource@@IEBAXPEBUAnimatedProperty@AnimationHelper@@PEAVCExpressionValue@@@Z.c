/*
 * XREFs of ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180057834
 * Callers:
 *     ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800572F0 (-GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180057580 (-GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800577C0 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCachedVisualImage@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018D0A0 (-GetProperty@CCachedVisualImage@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018E070 (-GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018E300 (-GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018EFD0 (-GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801901D0 (-GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionSkyBoxBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180191200 (-GetProperty@CCompositionSkyBoxBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180194550 (-GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801956C0 (-GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180199A30 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A4E10 (-GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A5050 (-GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B1DE0 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSpriteVectorShape@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B3920 (-GetProperty@CSpriteVectorShape@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B4170 (-GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CTextBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B5140 (-GetProperty@CTextBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B5960 (-GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CParticleEmitter@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801C6160 (-GetProperty@CParticleEmitter@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CResource::GetPropertyImpl(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct CExpressionValue *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 1);
  if ( v3 <= 69 )
  {
    if ( v3 != 69 )
    {
      v8 = v3 - 17;
      if ( !v8 )
      {
        *(_BYTE *)a3 = *((_BYTE *)this + v4);
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_7;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_7;
      }
      v10 = v9 - 17;
      if ( !v10 )
      {
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
        goto LABEL_7;
      }
      v11 = v10 - 7;
      if ( !v11 )
      {
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        goto LABEL_7;
      }
      if ( v11 == 10 )
      {
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v4 + 8);
        goto LABEL_7;
      }
LABEL_23:
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    }
    *((_DWORD *)a3 + 18) = 69;
LABEL_16:
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
    goto LABEL_7;
  }
  v5 = v3 - 70;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)a3 + 18) = 71;
    goto LABEL_16;
  }
  v7 = v6 - 33;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 18) = 104;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
    *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v4 + 16);
    goto LABEL_7;
  }
  if ( v7 != 161 )
    goto LABEL_23;
  *((_DWORD *)a3 + 18) = 265;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v4 + 16);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v4 + 32);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v4 + 48);
LABEL_7:
  *((_BYTE *)a3 + 76) = 1;
}
