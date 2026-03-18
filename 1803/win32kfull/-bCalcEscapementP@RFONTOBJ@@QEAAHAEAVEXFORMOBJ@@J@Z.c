/*
 * XREFs of ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0277B90
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcEscapementP(RFONTOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  __int64 v5; // r8
  unsigned int v6; // ecx
  _DWORD *v7; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  float v10; // [rsp+50h] [rbp+8h] BYREF
  float v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 380LL);
  if ( v6 < 0xE10 && (a3 == v6 || a3 == v6 + 1800 || a3 == v6 - 1800) )
  {
    *(_DWORD *)(v5 + 420) = a3;
    *(_QWORD *)(*(_QWORD *)this + 424LL) = *(_QWORD *)(*(_QWORD *)this + 384LL);
    *(_DWORD *)(*(_QWORD *)this + 432LL) = *(_DWORD *)(*(_QWORD *)this + 392LL);
    *(_DWORD *)(*(_QWORD *)this + 436LL) = *(_DWORD *)(*(_QWORD *)this + 396LL);
    v7 = *(_DWORD **)this;
    v7[110] = 1065353216;
    v7[111] = 0;
    if ( a3 != v7[95] )
    {
      v7[106] ^= _xmm;
      v7[107] ^= _xmm;
      v7[110] ^= _xmm;
    }
  }
  else
  {
    *(_DWORD *)(v5 + 420) = -1;
    if ( !EXFORMOBJ::bComputeUnits(
            a2,
            a3,
            (struct POINTFL *)(*(_QWORD *)this + 424LL),
            (struct EFLOAT *)(*(_QWORD *)this + 432LL),
            (struct EFLOAT *)(*(_QWORD *)this + 436LL)) )
      return 0LL;
    EFLOAT::eqCross(&v11, v9, *(_QWORD *)this + 404LL, *(_QWORD *)this + 384LL);
    if ( EFLOAT::bIsZero((EFLOAT *)&v11) )
      return 0LL;
    EFLOAT::eqCross(&v10, v9, *(_QWORD *)this + 404LL, *(_QWORD *)this + 424LL);
    *(float *)(*(_QWORD *)this + 440LL) = v10 / v11;
    EFLOAT::eqCross(&v10, v9, *(_QWORD *)this + 424LL, *(_QWORD *)this + 384LL);
    *(float *)(*(_QWORD *)this + 444LL) = v10 / v11;
    *(_DWORD *)(*(_QWORD *)this + 420LL) = a3;
  }
  return 1LL;
}
