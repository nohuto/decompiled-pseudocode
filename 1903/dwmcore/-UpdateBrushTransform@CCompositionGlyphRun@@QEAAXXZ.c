/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@QEAAXXZ @ 0x1801D1190
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D0F20 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v1; // rax
  float v2; // xmm2_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float *v6; // r9
  float v7; // xmm1_4
  float v8; // xmm3_4
  __int64 v9; // r10
  _DWORD v10[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h] BYREF
  float v12; // [rsp+48h] [rbp-28h]
  float v13; // [rsp+4Ch] [rbp-24h]
  _BYTE v14[24]; // [rsp+50h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 80) )
    {
      LODWORD(v2) = *((_DWORD *)this + 18) ^ _xmm;
      LODWORD(v3) = *((_DWORD *)this + 19) ^ _xmm;
      v10[1] = 0;
      v10[2] = 0;
      v12 = v2;
      v4 = 1.0 / *((float *)this + 20);
      v5 = 1.0 / *((float *)this + 21);
      v13 = v3;
      v11 = _xmm;
      *(float *)v10 = v4;
      *(float *)&v10[3] = v5;
      *(float *)&v10[4] = 0.0 - (float)(v4 * 0.0);
      *(float *)&v10[5] = 0.0 - (float)(v5 * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v14,
        (const struct D2D1::Matrix3x2F *)&v11,
        (const struct D2D1::Matrix3x2F *)v10);
      v7 = v6[23] + v6[17];
      v8 = v6[22] + v6[16];
      v11 = _xmm;
      v13 = v7;
      v12 = v8;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v10,
        (const struct D2D1::Matrix3x2F *)v14,
        (const struct D2D1::Matrix3x2F *)&v11);
      ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803391D8)(
        *(_QWORD *)(v9 + 104) + SDWORD2(xmmword_1803391D8),
        &CComponentTransform2D::sc_TransformMatrix,
        v10);
    }
  }
}
