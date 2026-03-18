/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0159E54
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C015C438 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C015FFDC (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  int v5; // r10d
  int v6; // eax
  __int64 v7; // r11
  unsigned __int64 v8; // r13
  int v9; // r12d
  int v10; // r15d
  int v11; // r14d
  int v12; // ebp
  int v13; // r14d
  __int64 v14; // r10
  int v15; // esi
  int v16; // r15d
  int v17; // r11d
  unsigned __int64 v18; // rtt
  unsigned int v19; // ebx
  double v20; // xmm1_8
  double v22[2]; // [rsp+30h] [rbp-38h] BYREF
  double v23; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 12) != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 751) != 1 )
    return 0LL;
  v5 = *((_DWORD *)a3 + 10);
  v6 = *((_DWORD *)a3 + 11);
  v7 = *((_QWORD *)a3 + 3);
  v8 = *((_QWORD *)this + 12);
  v9 = v7 - v5;
  v10 = *((_DWORD *)a4 + 11);
  v11 = *((_DWORD *)a4 + 10);
  v12 = *((_QWORD *)a4 + 3) - v11;
  v13 = v11 - v5;
  v14 = *((unsigned int *)this + 94);
  v15 = HIDWORD(*((_QWORD *)a4 + 3)) - v10;
  v16 = v10 - v6;
  v17 = HIDWORD(v7) - v6;
  v18 = v14 * (*(_QWORD *)a2 - *((_QWORD *)a3 + 15));
  if ( v9 * v9 + v17 * v17 < (int)(v18 / v8 * (v18 / v8))
    || v12 * v12 + v15 * v15 < (int)(v14
                                   * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                   / v8
                                   * (v14
                                    * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                    / v8)) )
  {
    return 0LL;
  }
  v19 = 0;
  if ( ndotprod(v13, v16, v9, v17, &v23) && ndotprod(v13, v16, v12, v15, v22) )
  {
    v20 = *((double *)this + 395);
    if ( COERCE_DOUBLE(*(_QWORD *)&v23 & _xmm) >= v20 && COERCE_DOUBLE(*(_QWORD *)&v22[0] & _xmm) >= v20 )
      return v23 > 0.0 != v22[0] > 0.0;
  }
  return v19;
}
