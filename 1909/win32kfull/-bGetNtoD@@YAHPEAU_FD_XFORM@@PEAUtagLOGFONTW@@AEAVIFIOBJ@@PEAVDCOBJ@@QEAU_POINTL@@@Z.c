/*
 * XREFs of ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C009DB6C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C013F4B8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C009DD24 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall bGetNtoD(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        struct _POINTL *const a5)
{
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // r8
  __m128 v12; // xmm0
  int v14; // edx
  __int64 lfOrientation; // rcx
  __int64 v16; // rax
  FLOATL v17; // eax
  __int16 v18; // r15
  __int16 v19; // r13
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  __int64 y; // rax
  __int64 v26; // rax
  __int64 x; // rax
  __m128 *v29; // [rsp+28h] [rbp-69h] BYREF
  int v30; // [rsp+34h] [rbp-5Dh]
  float *v31; // [rsp+38h] [rbp-59h] BYREF
  __m128 v32; // [rsp+48h] [rbp-49h] BYREF
  __m128 v33[2]; // [rsp+70h] [rbp-21h] BYREF

  memset(v33, 0, 0x24uLL);
  memset(&v32, 0, 0x24uLL);
  v9 = 0;
  if ( !a5->x || (v10 = *(_DWORD *)(*(_QWORD *)a3 + 48LL), (v10 & 0x3000010) != 0) )
  {
    vGetNtoW((struct MATRIX *)v33, a2, a3, a4);
    v11 = *(_QWORD *)a4;
    v29 = &v32;
    v30 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 976) + 340LL) & 0x802) == 0x802 )
    {
      v12 = v33[0];
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v29, (struct MATRIX *)v33, (struct MATRIX *)(v11 + 320), 0) )
        return v9;
      v12 = _mm_mul_ps(v32, (__m128)_xmm);
    }
    v32 = v12;
    v9 = 1;
    LODWORD(a1->eXX) = v12.m128_i32[0];
    *(_QWORD *)&a1->eXY = *(unsigned __int64 *)((char *)v32.m128_u64 + 4);
    LODWORD(a1->eYY) = v32.m128_i32[3];
    return v9;
  }
  v14 = 0;
  if ( (v10 & 0x200000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      lfOrientation = (unsigned int)a2->lfOrientation;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v31, a4, 0x204u);
      v18 = (*v31 > 0.0) - (*v31 < 0.0);
      v19 = (v31[1] > 0.0) - (v31[1] < 0.0);
      v20 = (__PAIR64__(v31[2] > 0.0, *((_DWORD *)v31 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
      v21 = (unsigned int)a2->lfOrientation;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
      {
        v20 = -v20;
        v22 = 3600 - lNormAngle(v21);
      }
      else
      {
        v22 = lNormAngle(v21);
      }
      lfOrientation = (v19 & 0x384) + (v20 & 0xA8C) + (v18 & 0x708u) + v22;
    }
    v14 = (int)lNormAngle(lfOrientation) / 900;
  }
  if ( v14 )
  {
    v23 = v14 - 1;
    if ( !v23 )
    {
      x = a5->x;
      a1->eXX = 0.0;
      a1->eYY = 0.0;
      a1->eYX = *((FLOATL *)&galFloatNeg + x);
      a1->eXY = *((FLOATL *)&galFloatNeg + a5->y);
      return 1LL;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        y = a5->y;
        a1->eXX = 0.0;
        a1->eYY = 0.0;
        a1->eXY = *((FLOATL *)&galFloat + y);
        a1->eYX = *((FLOATL *)&galFloat + a5->x);
      }
      return 1LL;
    }
    v26 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloatNeg + v26);
    v17 = *((float *)&galFloat + a5->y);
  }
  else
  {
    v16 = a5->x;
    *(_QWORD *)&a1->eXY = 0LL;
    a1->eXX = *((FLOATL *)&galFloat + v16);
    v17 = *((float *)&galFloatNeg + a5->y);
  }
  a1->eYY = v17;
  return 1LL;
}
