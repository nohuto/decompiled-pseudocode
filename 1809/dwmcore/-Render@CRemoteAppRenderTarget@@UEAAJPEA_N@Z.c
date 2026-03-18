/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015FF60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398 (-GetBounds@CVisualTree@@QEAAXPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F428 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015FCF0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(CRemoteAppRenderTarget *this, bool *a2)
{
  unsigned int v2; // edi
  CDirtyRegion *v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax
  float v12[6]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  *((_BYTE *)this + 240) = 0;
  v5 = (CDirtyRegion *)*((_QWORD *)this + 16);
  if ( v5 && !CDirtyRegion::IsEmpty(v5) )
  {
    CVisualTree::GetBounds(*((struct CVisualTree **)this + 7), (__int64)v12);
    v6 = v12[5] <= v12[4];
    if ( v12[2] <= v12[0] )
      ++v6;
    if ( v12[3] <= v12[1] )
      ++v6;
    if ( v6 <= 1 )
    {
      CRemoteAppRenderTarget::CalcOcclusion((CRemoteAppRenderTarget *)((char *)this - 64));
      if ( *(_DWORD *)(*((_QWORD *)this - 6) + 1080LL) == 5 )
      {
        v9 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent((CRemoteAppRenderTarget *)((char *)this - 64));
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x93u);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
      if ( *(_DWORD *)(*((_QWORD *)this - 6) + 1080LL) == 6 )
      {
        v7 = CRemoteAppRenderTarget::RenderDirtyRegion((CRemoteAppRenderTarget *)((char *)this - 64));
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x99u);
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
