/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800302F0
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
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1801E2BF0 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int128 *a3)
{
  CBitmapRealization *v5; // rbx
  bool v6; // cc
  enum DXGI_MODE_ROTATION v7; // eax
  _OWORD v9[4]; // [rsp+20h] [rbp-29h] BYREF
  int v10; // [rsp+60h] [rbp+17h]
  __int128 v11; // [rsp+70h] [rbp+27h] BYREF

  v10 = 0;
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( *(_QWORD *)(a1 + 272) )
  {
    v5 = (CBitmapRealization *)(a1 - 144);
    if ( (unsigned __int8)CBitmapRealization::GetSourceRect(a1 - 144, &v11) )
      CMILMatrix::Translate((CMILMatrix *)a2, COERCE_FLOAT(v11 ^ _xmm), COERCE_FLOAT(DWORD1(v11) ^ _xmm));
    v6 = *((_DWORD *)v5 + 68) < 2;
    v9[0] = _xmm;
    v9[1] = _xmm;
    v9[2] = _xmm;
    v9[3] = _xmm;
    LOWORD(v10) = 32085;
    if ( !v6 )
    {
      v7 = (*(unsigned int (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v5 + 72LL))(v5);
      if ( v7 != DXGI_MODE_ROTATION_IDENTITY )
      {
        CMILMatrix::SetToRotation(
          (CMILMatrix *)v9,
          *((float *)&v11 + 2) - *(float *)&v11,
          *((float *)&v11 + 3) - *((float *)&v11 + 1),
          v7);
        CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v9);
      }
    }
    if ( CBitmapRealization::CalcImageTransform(v5, (struct CMILMatrix *)v9) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v9);
  }
  if ( a3 )
    *a3 = v11;
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
