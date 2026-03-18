/*
 * XREFs of ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C0180664
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0180738 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0036AEC (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C01803BC (-Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C01815D0 (-TransformRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        const struct CompositionInputObject *a3,
        struct tagRECT *a4)
{
  CPalmRejectZoneInfo *v6; // rcx
  int v8; // [rsp+20h] [rbp-19h] BYREF
  __int64 v9; // [rsp+24h] [rbp-15h]
  __int64 v10; // [rsp+2Ch] [rbp-Dh]
  int v11; // [rsp+34h] [rbp-5h]
  __int64 v12; // [rsp+38h] [rbp-1h]
  __int64 v13; // [rsp+40h] [rbp+7h]
  int v14; // [rsp+48h] [rbp+Fh]
  __int64 v15; // [rsp+4Ch] [rbp+13h]
  __int64 v16; // [rsp+54h] [rbp+1Bh]
  int v17; // [rsp+5Ch] [rbp+23h]
  struct tagRECT v18; // [rsp+60h] [rbp+27h] BYREF
  __int128 v19; // [rsp+70h] [rbp+37h] BYREF
  int v20; // [rsp+80h] [rbp+47h]
  int v21; // [rsp+84h] [rbp+4Bh]

  v8 = 1065353216;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 1065353216;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 1065353216;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 1065353216;
  if ( a3 )
    CompositionInputObject::QueryTransform(a3, (struct tagINPUT_TRANSFORM *)&v8);
  v20 = 0;
  v21 = 0;
  v19 = _xmm;
  CPalmRejectZoneInfo::Convert3dTo2dMatrix(
    this,
    (const struct tagINPUT_TRANSFORM *)&v8,
    (struct D2D_MATRIX_3X2_F *)&v19);
  v18 = *a4;
  CPalmRejectZoneInfo::TransformRect(v6, retstr, &v18, (struct D2D_MATRIX_3X2_F *)&v19);
  return retstr;
}
