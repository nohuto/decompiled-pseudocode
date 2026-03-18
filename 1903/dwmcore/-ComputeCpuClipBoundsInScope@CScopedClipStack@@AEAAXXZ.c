/*
 * XREFs of ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18017A1DC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004818 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CScopedClipStack::ComputeCpuClipBoundsInScope(CScopedClipStack *this)
{
  unsigned int v2; // edx
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int128 *v11; // r14
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17; // eax
  int TightBounds; // eax
  float v19; // xmm13_4
  float v20; // xmm12_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  _BYTE v27[64]; // [rsp+28h] [rbp-E0h] BYREF
  int v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+78h] [rbp-90h]
  float v30; // [rsp+88h] [rbp-80h]
  float v31; // [rsp+8Ch] [rbp-7Ch]
  float v32; // [rsp+90h] [rbp-78h]
  float v33; // [rsp+94h] [rbp-74h]
  const void *retaddr; // [rsp+150h] [rbp+48h]

  v2 = *((_DWORD *)this + 214);
  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v4 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v5 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v6 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v7 = *(_QWORD *)this;
  v8 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  v29 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v9 = v2 - *(_DWORD *)(v7 + 8 * v8 + 4);
  if ( v9 < v2 )
  {
    do
    {
      v10 = *((_QWORD *)this + 104) + 136LL * v9;
      v11 = (__int128 *)(v10 + 112);
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(v10 + 112)) )
      {
        if ( *(_BYTE *)(v10 + 128) )
        {
          v12 = *(float *)(v10 + 96);
          if ( v12 > v3 )
          {
            LODWORD(v29) = *(_DWORD *)(v10 + 96);
            v3 = v12;
          }
          v13 = *(float *)(v10 + 100);
          v14 = v4;
          if ( v13 > v4 )
          {
            DWORD1(v29) = *(_DWORD *)(v10 + 100);
            v4 = v13;
            v14 = v13;
          }
          v15 = v5;
          if ( v5 > *(float *)(v10 + 104) )
          {
            DWORD2(v29) = *(_DWORD *)(v10 + 104);
            v5 = *((float *)&v29 + 2);
            v15 = *((float *)&v29 + 2);
          }
          v16 = v6;
          if ( v6 > *(float *)(v10 + 108) )
          {
            HIDWORD(v29) = *(_DWORD *)(v10 + 108);
            v6 = *((float *)&v29 + 3);
            v16 = *((float *)&v29 + 3);
          }
        }
        else
        {
          v17 = *((_DWORD *)this + 6);
          v28 = 0;
          CMILMatrix::Multiply(
            (const struct CMILMatrix *)(v10 + 16),
            (const struct CMILMatrix *)(*(_QWORD *)this + 8LL + 80LL * (unsigned int)(v17 - 1)),
            (struct CMILMatrix *)v27);
          TightBounds = CShapePtr::GetTightBounds((__int64 *)v10);
          if ( TightBounds >= 0 )
          {
            v19 = v33;
            v20 = v32;
            v21 = v31;
            v22 = v30;
          }
          else
          {
            if ( TightBounds != -2003304438 )
              ModuleFailFastForHRESULT(TightBounds, retaddr);
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
            v22 = 0.0;
          }
          v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v22) & _xmm);
          if ( v23 < 8388608.0 )
            v22 = (float)(int)floorf_0(v22);
          v30 = v22;
          v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm);
          if ( v24 < 8388608.0 )
            v21 = (float)(int)floorf_0(v21);
          v31 = v21;
          v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
          if ( v25 < 8388608.0 )
            v20 = (float)(int)ceilf_0(v20);
          v32 = v20;
          v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
          if ( v26 < 8388608.0 )
            v19 = (float)(int)ceilf_0(v19);
          v33 = v19;
          if ( v22 > v3 )
          {
            v3 = v22;
            *(float *)&v29 = v22;
          }
          v14 = v4;
          if ( v21 > v4 )
          {
            v4 = v21;
            v14 = v21;
            *((float *)&v29 + 1) = v21;
          }
          v15 = v5;
          if ( v5 > v20 )
          {
            *((float *)&v29 + 2) = v20;
            v5 = v20;
            v15 = v20;
          }
          v16 = v6;
          if ( v6 > v19 )
          {
            *((float *)&v29 + 3) = v19;
            v6 = v19;
            v16 = v19;
          }
        }
        if ( v15 <= v3 || v16 <= v14 )
        {
          v3 = 0.0;
          v4 = 0.0;
          v5 = 0.0;
          v29 = 0uLL;
          v6 = 0.0;
        }
        *v11 = v29;
      }
      else
      {
        v29 = *v11;
        v6 = *((float *)&v29 + 3);
        v5 = *((float *)&v29 + 2);
        v4 = *((float *)&v29 + 1);
        v3 = *(float *)&v29;
      }
      ++v9;
    }
    while ( v9 < *((_DWORD *)this + 214) );
  }
}
