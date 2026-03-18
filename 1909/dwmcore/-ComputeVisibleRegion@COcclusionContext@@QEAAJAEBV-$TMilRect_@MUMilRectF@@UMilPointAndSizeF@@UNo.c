/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1801707BC
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18016AF44 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18016B09C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  __int64 v8; // r10
  char v9; // dl
  __int64 (__fastcall *v10)(__int64, __int128 *, _QWORD, __int64, __int64, void *, __int64); // rbp
  char v11; // al
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF

  v7 = *a2;
  v8 = *(_QWORD *)(a1 + 400);
  v9 = *(_BYTE *)(a1 + 893);
  v16 = v7;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64, __int64, void *, __int64))(*(_QWORD *)v8 + 64LL);
  v11 = (char)(4 * v9) >> 6;
  if ( v11 )
  {
    LOBYTE(a4) = v11 == 1;
  }
  else
  {
    LOBYTE(a4) = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 828) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 840) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 848) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 856) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 888) - 1.0)) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 893) = v9 ^ (v9 ^ (-16 - 32 * a4)) & 0x30;
    if ( (_BYTE)a4 )
      *(_BYTE *)(a1 + 892) |= 0x3Fu;
  }
  v12 = v10(v8, &v16, a3, a4, a5, a6, a7);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x384u, 0LL);
  return v14;
}
