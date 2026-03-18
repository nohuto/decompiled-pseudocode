/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18007E920
 * Callers:
 *     ?GetProperty@CParticleEmitterVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801ED480 (-GetProperty@CParticleEmitterVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18007E9BC (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800CA014 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800CA038 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // r11
  float OpacityInternal; // xmm0_4
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  bool v13; // al
  FLOAT v14; // eax
  struct D2D_VECTOR_3F v15; // [rsp+30h] [rbp-28h] BYREF
  FLOAT z; // [rsp+48h] [rbp-10h]
  unsigned int v17; // [rsp+78h] [rbp+20h]
  unsigned int v18; // [rsp+7Ch] [rbp+24h]

  v3 = 0;
  v4 = a2 - 26;
  if ( v4 )
  {
    v8 = v4 - 2;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          CVisual::GetRelativeOffsetInternal(this, &v15);
          z = v15.z;
          v14 = v15.z;
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)LODWORD(v15.x), (__m128)LODWORD(v15.y)).m128_u64[0];
          *(FLOAT *)(v5 + 8) = v14;
          *(_DWORD *)(v5 + 72) = 52;
          goto LABEL_3;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          CVisual::GetRelativeLayoutSizeInternal(this);
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)v17, (__m128)v18).m128_u64[0];
          *(_DWORD *)(v5 + 72) = 35;
          goto LABEL_3;
        }
        if ( v12 != 7 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x19F5u, 0LL);
          return v3;
        }
        v13 = (*((_BYTE *)this + 95) & 4) != 0;
        *((_DWORD *)a3 + 18) = 17;
        *(_BYTE *)a3 = v13;
      }
      else
      {
        *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 31), (__m128)*((unsigned int *)this + 32)).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
      }
    }
    else
    {
      v9 = *((_DWORD *)this + 28);
      *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 26), (__m128)*((unsigned int *)this + 27)).m128_u64[0];
      *((_DWORD *)a3 + 2) = v9;
      *((_DWORD *)a3 + 18) = 52;
    }
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  OpacityInternal = CVisual::GetOpacityInternal(this);
  *(float *)v5 = OpacityInternal;
  *(_DWORD *)(v5 + 72) = 18;
LABEL_3:
  *(_BYTE *)(v5 + 76) = 1;
  return v3;
}
