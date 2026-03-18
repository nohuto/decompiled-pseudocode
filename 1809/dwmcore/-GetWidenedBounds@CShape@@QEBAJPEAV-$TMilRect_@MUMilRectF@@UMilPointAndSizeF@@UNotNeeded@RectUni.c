/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18021DE08
 * Callers:
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B39A0 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800176F0 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A19E0 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  float *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-31h]
  __int64 v13; // [rsp+40h] [rbp-11h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-9h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v13);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, 0LL, &v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    v12 = 924;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _DWORD, _OWORD *))(*(_QWORD *)v13 + 40LL))(
         v13,
         v14,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         v14);
  v9 = v7;
  if ( v7 < 0 )
  {
    v12 = 933;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v12);
    goto LABEL_10;
  }
  v14[1] = v14[0];
  *(_OWORD *)a2 = v14[0];
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
  {
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v10) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v9 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, -2003304438, 0x3ABu);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v13);
  return v9;
}
