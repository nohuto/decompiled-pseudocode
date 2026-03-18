/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0191F9C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01944C4 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0197F3C (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  int v6; // r10d
  int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  int v10; // r12d
  int v11; // r15d
  int v12; // r14d
  int v13; // ebp
  int v14; // r14d
  __int64 v15; // r10
  int v16; // ebx
  int v17; // r15d
  int v18; // r9d
  unsigned __int64 v19; // rtt
  unsigned int v20; // edi
  double v21; // xmm1_8
  double v23[2]; // [rsp+30h] [rbp-38h] BYREF
  double v24; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 12) != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 743) != 1 )
    return 0LL;
  v6 = *((_DWORD *)a3 + 10);
  v7 = *((_DWORD *)a3 + 11);
  v8 = *((_QWORD *)a3 + 3);
  v9 = *((_QWORD *)this + 12);
  v10 = v8 - v6;
  v11 = *((_DWORD *)a4 + 11);
  v12 = *((_DWORD *)a4 + 10);
  v13 = *((_QWORD *)a4 + 3) - v12;
  v14 = v12 - v6;
  v15 = *((unsigned int *)this + 94);
  v16 = HIDWORD(*((_QWORD *)a4 + 3)) - v11;
  v17 = v11 - v7;
  v18 = HIDWORD(v8) - v7;
  v19 = v15 * (*(_QWORD *)a2 - *((_QWORD *)a3 + 15));
  if ( v10 * v10 + v18 * v18 < (int)(v19 / v9 * (v19 / v9))
    || v13 * v13 + v16 * v16 < (int)(v15
                                   * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                   / v9
                                   * (v15
                                    * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                    / v9)) )
  {
    return 0LL;
  }
  v20 = 0;
  if ( ndotprod(v14, v17, v10, v18, &v24) && ndotprod(v14, v17, v13, v16, v23) )
  {
    v21 = *((double *)this + 391);
    if ( COERCE_DOUBLE(*(_QWORD *)&v24 & _xmm) >= v21 && COERCE_DOUBLE(*(_QWORD *)&v23[0] & _xmm) >= v21 )
      return v24 > 0.0 != v23[0] > 0.0;
  }
  return v20;
}
