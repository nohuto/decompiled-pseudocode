/*
 * XREFs of ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801915F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x18006BAEC (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x1800A2AA8 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     tanf_0 @ 0x1800F0057 (tanf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801B695C (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  bool v3; // zf
  char DoesIntersectUnsafe; // di
  float v8; // xmm1_4
  float v9; // xmm7_4
  struct _LIST_ENTRY *v10; // rcx
  int WorldTransform; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  struct _LIST_ENTRY *v18; // rcx
  float v19; // xmm3_4
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // r11
  char v25; // si
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // eax
  struct CVisual *v31; // [rsp+38h] [rbp-D0h] BYREF
  float v32; // [rsp+40h] [rbp-C8h] BYREF
  float v33; // [rsp+44h] [rbp-C4h] BYREF
  float v34[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v35[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  float v37; // [rsp+A8h] [rbp-60h] BYREF
  float v38; // [rsp+ACh] [rbp-5Ch]
  float v39; // [rsp+B0h] [rbp-58h]
  float v40; // [rsp+B4h] [rbp-54h]
  float v41[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v42[4]; // [rsp+C8h] [rbp-40h] BYREF
  float v43[4]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = *((_BYTE *)this + 154) == 0;
  v31 = a3;
  DoesIntersectUnsafe = 1;
  if ( v3 )
    return 0;
  if ( *((float *)this + 68) == 0.0 && *((float *)this + 69) == 0.0 && *((float *)this + 70) == -1.0 )
  {
    v8 = *((float *)this + 72);
    if ( *((float *)this + 71) <= v8 && v8 <= 1.5707952 )
    {
      CVisual::GetEffectiveOffset(a3, v34, &v33, &v32);
      v9 = *((float *)this + 67) - v32;
      v36 = 0;
      WorldTransform = CVisual::GetWorldTransform(v10, (__int64)a2, 1, (__int64)v35, 0LL, 0LL);
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, WorldTransform, 0x267u);
        return DoesIntersectUnsafe;
      }
      if ( CMILMatrix::Is2DAffine<1>((__int64)v35, 1) )
      {
        if ( v9 <= 0.0 || *((float *)this + 72) <= 0.0 )
        {
          DoesIntersectUnsafe = 0;
LABEL_18:
          v22 = DynArray<CVisual *,0>::Contains((__int64)this + 168, &v31);
          if ( DoesIntersectUnsafe )
          {
            if ( v22 )
              DynArray<CVisual *,0>::Remove((__int64 *)v24, &v31);
          }
          else
          {
            v25 = v22 ^ 1;
            DoesIntersectUnsafe = v22 ^ 1;
            if ( !v22 )
            {
              v26 = *(_DWORD *)(v24 + 24);
              v27 = v26 + 1;
              v28 = v26 + 1 < v26 ? 0x80070216 : 0;
              if ( v26 + 1 < v26 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v28, 0xB5u);
              }
              else if ( v27 > *(_DWORD *)(v24 + 20) )
              {
                v30 = DynArrayImpl<0>::AddMultipleAndSet(v24, 8, 1, &v31);
                v28 = v30;
                if ( v30 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v30, 0xC0u);
              }
              else
              {
                v29 = v26;
                *(_QWORD *)(*(_QWORD *)v24 + 8LL * v26) = v31;
                *(_DWORD *)(v24 + 24) = v27;
              }
              DoesIntersectUnsafe = v25;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x2A9u);
            }
          }
          return DoesIntersectUnsafe;
        }
        v13 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, float *))(*(_QWORD *)v31 + 192LL))(v31, 0LL, v41);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x277u);
        }
        else
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)v35, v41, v42);
          v15 = tanf_0(*((float *)this + 72));
          v16 = *((float *)this + 66);
          v17 = *((float *)this + 65);
          v18 = (struct _LIST_ENTRY *)*((_QWORD *)this + 20);
          v36 = 0;
          v19 = (float)(v15 * v9) + (float)(v15 * v9);
          v37 = v17 - (float)(v15 * v9);
          v38 = v16 - (float)(v15 * v9);
          v40 = v19 + v38;
          v39 = v19 + v37;
          v20 = CVisual::GetWorldTransform(v18, (__int64)a2, 1, (__int64)v35, 0LL, 0LL);
          if ( v20 >= 0 )
          {
            CMILMatrix::Transform2DBoundsHelper<1>((__int64)v35, &v37, v43);
            DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v43, v42);
            goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x289u);
        }
        return DoesIntersectUnsafe;
      }
    }
  }
  return 1;
}
