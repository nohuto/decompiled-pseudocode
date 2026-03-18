/*
 * XREFs of ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180229080
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x180030458 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180030524 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x180180C70 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransformAndYUVRects(
        __int64 a1,
        char a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        float *a6)
{
  CBitmapRealization *v7; // rdi
  _BYTE v9[64]; // [rsp+20h] [rbp-39h] BYREF
  int v10; // [rsp+60h] [rbp+7h]
  __int128 v11; // [rsp+70h] [rbp+17h] BYREF

  *a4 = (float)*(int *)(a1 - 216);
  a4[1] = (float)*(int *)(a1 - 212);
  a4[2] = (float)*(int *)(a1 - 208);
  a4[3] = (float)*(int *)(a1 - 204);
  *(_DWORD *)a5 = 0;
  *(_DWORD *)(a5 + 4) = 0;
  *(float *)(a5 + 8) = (float)*(int *)(a1 - 172);
  *(float *)(a5 + 12) = (float)*(int *)(a1 - 168);
  *a6 = (float)*(int *)(a1 - 164);
  a6[1] = (float)*(int *)(a1 - 160);
  a6[2] = (float)*(int *)(a1 - 156);
  a6[3] = (float)*(int *)(a1 - 152);
  if ( !a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 272) + 40LL))(a1 - 272, a3, 0LL);
  v7 = (CBitmapRealization *)(a1 - 416);
  v10 = 0;
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_WORD *)(a3 + 64) = 32085;
  *(_OWORD *)a3 = _xmm;
  *(_OWORD *)(a3 + 16) = _xmm;
  *(_OWORD *)(a3 + 32) = _xmm;
  *(_OWORD *)(a3 + 48) = _xmm;
  if ( CBitmapRealization::GetSourceRect(a1 - 416, &v11) )
    CMILMatrix::Translate((CMILMatrix *)a3, COERCE_FLOAT(v11 ^ _xmm), COERCE_FLOAT(DWORD1(v11) ^ _xmm));
  if ( CBitmapRealization::CalcRotationTransform(
         v7,
         *((float *)&v11 + 2) - *(float *)&v11,
         *((float *)&v11 + 3) - *((float *)&v11 + 1),
         (struct CMILMatrix *)v9) )
  {
    CMILMatrix::Multiply((CMILMatrix *)a3, (const struct CMILMatrix *)v9);
  }
  if ( CBitmapRealization::CalcImageTransform(v7, (struct CMILMatrix *)v9) )
    CMILMatrix::Multiply((CMILMatrix *)a3, (const struct CMILMatrix *)v9);
  return CMILMatrix::IsIdentity<0>(a3) == 0;
}
