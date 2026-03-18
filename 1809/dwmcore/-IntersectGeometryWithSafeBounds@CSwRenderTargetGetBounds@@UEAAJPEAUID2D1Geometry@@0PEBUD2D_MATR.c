/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1802018E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180201848 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::IntersectGeometryWithSafeBounds(
        CSwRenderTargetGetBounds *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int DefaultD2DContext; // eax
  __int64 v10; // rcx
  struct ID2DContext *v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  struct ID2DContext *v16; // [rsp+40h] [rbp-28h] BYREF

  v16 = 0LL;
  *a6 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v16);
  v11 = v16;
  v12 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DefaultD2DContext, 0x17Au);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v16 + 248LL))(
            v16,
            a2,
            a3,
            a4,
            a5,
            a6);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x180u);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v11 + 16LL))(v11);
  return v12;
}
