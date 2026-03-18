/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EADB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EABB0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801CA294 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, _OWORD *a2, struct D2D_RECT_F *a3)
{
  signed int BoundsWithEffects; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  float v9; // xmm6_4
  __int64 v10; // r10
  __int64 (__fastcall *v11)(__int64, _QWORD, float *, struct D2D_RECT_F *); // rax
  signed int v12; // eax
  __int64 v13; // rcx
  float v15[2]; // [rsp+30h] [rbp-50h] BYREF
  float v16; // [rsp+38h] [rbp-48h] BYREF
  float v17[4]; // [rsp+40h] [rbp-40h]
  struct D2D_RECT_F v18; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this, a2, &a3->left);
  v7 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, BoundsWithEffects, 0xAAu, 0LL);
    return v7;
  }
  v8 = *((_QWORD *)this + 70);
  if ( v8 )
  {
    v9 = *(float *)(v8 + 96);
    *(_QWORD *)v17 = *(_QWORD *)(v8 + 104);
    if ( CDropShadow::GetMaskForLayerVisualNoRef((CDropShadow *)v8) )
    {
      if ( CVisual::GetEffectiveSize(this, v15, &v16) )
      {
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, float *, struct D2D_RECT_F *))(*(_QWORD *)v10 + 208LL);
        v15[1] = v16;
        v12 = v11(v10, 0LL, v15, &v18);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xBAu, 0LL);
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
      v18.left = (float)(v18.left - v9) + v17[0];
      v18.top = (float)(v18.top - v9) + v17[1];
      v18.right = (float)(v18.right + v9) + v17[0];
      v18.bottom = (float)(v18.bottom + v9) + v17[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&a3->left, &v18.left);
    }
  }
  return v7;
}
