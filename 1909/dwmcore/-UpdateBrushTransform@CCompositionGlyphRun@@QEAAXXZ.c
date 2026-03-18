/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@QEAAXXZ @ 0x1801CF9F0
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CF780 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int64 v10; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  float v13; // [rsp+48h] [rbp-28h]
  float v14; // [rsp+4Ch] [rbp-24h]
  _BYTE v15[24]; // [rsp+50h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 80);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 176LL) )
      {
        if ( *(_QWORD *)(v1 + 80) )
        {
          LODWORD(v4) = *((_DWORD *)this + 18) ^ _xmm;
          LODWORD(v5) = *((_DWORD *)this + 19) ^ _xmm;
          v11[1] = 0;
          v11[2] = 0;
          v13 = v4;
          v6 = 1.0 / *((float *)this + 20);
          v7 = 1.0 / *((float *)this + 21);
          v14 = v5;
          v12 = _xmm;
          *(float *)v11 = v6;
          *(float *)&v11[3] = v7;
          *(float *)&v11[4] = 0.0 - (float)(v6 * 0.0);
          *(float *)&v11[5] = 0.0 - (float)(v7 * 0.0);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)v15,
            (const struct D2D1::Matrix3x2F *)&v12,
            (const struct D2D1::Matrix3x2F *)v11);
          v8 = *((float *)this + 23) + *((float *)this + 17);
          v9 = *((float *)this + 22) + *((float *)this + 16);
          v12 = _xmm;
          v14 = v8;
          v13 = v9;
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)v11,
            (const struct D2D1::Matrix3x2F *)v15,
            (const struct D2D1::Matrix3x2F *)&v12);
          ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803361D8)(
            *(_QWORD *)(v10 + 104) + SDWORD2(xmmword_1803361D8),
            &CComponentTransform2D::sc_TransformMatrix,
            v11);
        }
      }
    }
  }
}
