/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18023DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::IntersectGeometryWithSafeBounds(
        CSwRenderTargetGetBounds *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  signed int DefaultD2DContext; // eax
  __int64 v11; // rcx
  struct ID2DContext *v12; // rdi
  unsigned int v13; // ebx
  signed int v14; // eax
  __int64 v15; // rcx
  struct ID2DContext *v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v17 = 0LL;
  *a6 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v17);
  v12 = v17;
  v13 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DefaultD2DContext, 0x177u, 0LL);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v17 + 248LL))(
            v17,
            a2,
            a3,
            a4,
            a5,
            v6);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17Du, 0LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v12 + 16LL))(v12);
  return v13;
}
