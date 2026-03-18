/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C019417C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C0196774 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01998B8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C019A1EC (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v5; // r10
  __int64 v6; // r9
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // r10d
  int v12; // r8d
  int v13; // r9d
  const struct PTPInput *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v5 = *((_QWORD *)a3 + 3);
  v6 = *((_QWORD *)a4 + 3);
  v8 = *((_QWORD *)a3 + 5) - *((_QWORD *)a4 + 5);
  if ( (int)((HIDWORD(*((_QWORD *)a3 + 5)) - HIDWORD(*((_QWORD *)a4 + 5)))
           * (HIDWORD(*((_QWORD *)a3 + 5)) - HIDWORD(*((_QWORD *)a4 + 5)))
           + v8 * v8) > (unsigned __int64)*((unsigned int *)this + 73) )
    return 0LL;
  v9 = 0;
  v10 = v5 - *((_DWORD *)a3 + 10);
  v11 = HIDWORD(v5) - *((_DWORD *)a3 + 11);
  v12 = v6 - *((_DWORD *)a4 + 10);
  v13 = HIDWORD(v6) - *((_DWORD *)a4 + 11);
  if ( !v10 && !v11 )
    return 0LL;
  if ( !v12 && !v13 )
    return 0LL;
  if ( ndotprod(v10, v11, v12, v13, (double *)&v15) && *(double *)&v15 >= *((double *)this + 391) )
    return 1;
  return v9;
}
