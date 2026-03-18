/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015440
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002E3A0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, __int64 a2, struct D2D_RECT_F *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  float v10; // xmm6_4
  __int64 v11; // r10
  __int64 (__fastcall *v12)(__int64, _QWORD, float *, struct D2D_RECT_F *); // rax
  int v13; // eax
  unsigned int v14; // ecx
  float v15[2]; // [rsp+30h] [rbp-50h] BYREF
  float v16; // [rsp+38h] [rbp-48h] BYREF
  float v17[4]; // [rsp+40h] [rbp-40h]
  struct D2D_RECT_F v18; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this);
  v7 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, BoundsWithEffects, 0xACu);
    return v7;
  }
  v8 = *((_QWORD *)this + 70);
  if ( v8 )
  {
    v10 = *(float *)(v8 + 88);
    *(_QWORD *)v17 = *(_QWORD *)(v8 + 96);
    if ( CDropShadow::GetMaskForLayerVisualNoRef((CDropShadow *)v8) )
    {
      if ( CVisual::GetEffectiveSize(this, v15, &v16) )
      {
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, float *, struct D2D_RECT_F *))(*(_QWORD *)v11 + 168LL);
        v15[1] = v16;
        v13 = v12(v11, 0LL, v15, &v18);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xBCu);
          return v7;
        }
      }
    }
    else
    {
      v18 = *a3;
    }
    if ( !IsEmpty(&v18) )
    {
      v18.left = (float)(v18.left - v10) + v17[0];
      v18.top = (float)(v18.top - v10) + v17[1];
      v18.right = (float)(v18.right + v10) + v17[0];
      v18.bottom = (float)(v18.bottom + v10) + v17[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v18);
    }
  }
  return v7;
}
