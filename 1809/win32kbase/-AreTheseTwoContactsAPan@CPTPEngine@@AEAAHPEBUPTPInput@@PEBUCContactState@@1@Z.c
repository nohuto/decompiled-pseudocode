/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0159D7C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C015C438 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C015F5E8 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C015FFDC (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  int v11; // r11d
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // r10d
  int v15; // edi
  const struct PTPInput *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v4 = *((_QWORD *)a3 + 5);
  v6 = *((_QWORD *)a3 + 3);
  v7 = *((_QWORD *)a4 + 5);
  v8 = *((_QWORD *)a4 + 3);
  v9 = HIDWORD(v7);
  v10 = HIDWORD(v8);
  if ( (HIDWORD(v4) - HIDWORD(v7)) * (HIDWORD(v4) - HIDWORD(v7)) + ((int)v4 - (int)v7) * ((int)v4 - (int)v7) > (unsigned __int64)*((unsigned int *)this + 73) )
    return 0LL;
  v11 = v8 - v7;
  v12 = HIDWORD(v6) - HIDWORD(v4);
  v13 = 0;
  v14 = v10 - v9;
  v15 = v6 - v4;
  if ( !v15 && !v12 )
    return 0LL;
  if ( !v11 && !v14 )
    return 0LL;
  if ( ndotprod(v15, v12, v11, v14, (double *)&v17) && *(double *)&v17 >= *((double *)this + 395) )
    return 1;
  return v13;
}
