/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18024BCD0
 * Callers:
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FB368 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800178B0 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180083B38 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *); // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  float *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *a1;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v15);
  v9 = v8(a1, 0LL, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 920;
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _DWORD, _OWORD *))(*(_QWORD *)v15 + 40LL))(
         v15,
         v16,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 929;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14, 0LL);
    goto LABEL_10;
  }
  v16[1] = v16[0];
  *(_OWORD *)a2 = v16[0];
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues() )
  {
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v12) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v11 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, 0x8898000A, 0x3A7u, 0LL);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v15);
  return v11;
}
