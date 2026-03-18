/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18007F788
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007F620 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x1802629F0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  char v2; // r8
  int v3; // xmm4_4
  int v4; // xmm3_4
  int v5; // xmm2_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // eax

  v2 = 0;
  *(_OWORD *)a2 = _xmm;
  *((_WORD *)a2 + 32) = 32085;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  if ( *((int *)this + 68) >= 2 )
  {
    v3 = *((_DWORD *)this + 60);
    v4 = *((_DWORD *)this + 59);
    v5 = *((_DWORD *)this + 58);
    v6 = *((_DWORD *)this + 57);
    v7 = *((_DWORD *)this + 56);
    v8 = *((_DWORD *)this + 55);
    *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
    *((_DWORD *)a2 + 1) = v7;
    *((_DWORD *)a2 + 4) = v6;
    *((_DWORD *)a2 + 5) = v5;
    *((_DWORD *)a2 + 12) = v4;
    *((_DWORD *)a2 + 13) = v3;
    *((_BYTE *)a2 + 65) = 64;
    *(_DWORD *)a2 = v8;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_DWORD *)a2 + 14) = 0;
    return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
  }
  return v2;
}
