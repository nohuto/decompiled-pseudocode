/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x1801A6240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18004C408 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A5688 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A5FB0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A637C (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(CRemoteAppRenderTarget *this, bool *a2)
{
  unsigned int v2; // edi
  CDirtyRegion *v5; // rcx
  __int64 v6; // rax
  __m128 v7; // xmm1
  unsigned int v8; // eax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax

  v2 = 0;
  *((_BYTE *)this + 240) = 0;
  v5 = (CDirtyRegion *)*((_QWORD *)this + 16);
  if ( v5 && !CDirtyRegion::IsEmpty(v5) )
  {
    v6 = *((_QWORD *)this + 7);
    v7 = *(__m128 *)(v6 + 36);
    v8 = COERCE_FLOAT(HIDWORD(*(_QWORD *)(v6 + 52))) <= COERCE_FLOAT(*(_QWORD *)(v6 + 52));
    if ( _mm_shuffle_ps(v7, v7, 170).m128_f32[0] <= v7.m128_f32[0] )
      ++v8;
    if ( v7.m128_f32[3] <= v7.m128_f32[1] )
      ++v8;
    if ( v8 <= 1 )
    {
      CRemoteAppRenderTarget::CalcOcclusion((CRemoteAppRenderTarget *)((char *)this - 64));
      if ( *(_DWORD *)(*((_QWORD *)this - 6) + 1096LL) == 5 )
      {
        v11 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent((CRemoteAppRenderTarget *)((char *)this - 64));
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x93u, 0LL);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      if ( *(_DWORD *)(*((_QWORD *)this - 6) + 1096LL) == 6 )
      {
        v9 = CRemoteAppRenderTarget::RenderDirtyRegion((CRemoteAppRenderTarget *)((char *)this - 64));
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x99u, 0LL);
          goto LABEL_15;
        }
LABEL_13:
        *((_BYTE *)this + 240) = 1;
      }
    }
  }
LABEL_15:
  *a2 = *((_BYTE *)this + 240);
  result = v2;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
