/*
 * XREFs of ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000E00C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000E0EC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@IEBA?AVMatrix3x2F@D2D1@@XZ @ 0x18017C080 (-GetTransformToLayerSpace@CTreeEffectLayer@@IEBA-AVMatrix3x2F@D2D1@@XZ.c)
 */

void __fastcall CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // xmm0_8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + 88LL) + 72LL) + 48LL);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v4 )
      {
        v5 = 0LL;
        v6 = v4;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)this + 30) + 112LL);
          v8 = *(_QWORD *)(v5 + v7);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 48LL))(
                   *(_QWORD *)(v5 + v7),
                   176LL) )
            {
              CTreeEffectLayer::GetTransformToLayerSpace(this, &v10);
              v9 = v11;
              *(_OWORD *)(v8 + 112) = v10;
              *(_QWORD *)(v8 + 128) = v9;
            }
          }
          v5 += 8LL;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
