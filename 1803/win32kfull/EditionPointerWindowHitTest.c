/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C01CB620
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C01CC520 (xxxPointerWindowHitTest.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct tagPOINT a8,
        int *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        struct tagPOINT *a13)
{
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  _OWORD *result; // rax
  _QWORD v33[3]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v34[46]; // [rsp+78h] [rbp-C0h] BYREF

  if ( a4 )
  {
    v16 = *(_QWORD *)(a3 + 72);
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
    v33[0] = *(_QWORD *)(a2 + 408);
    *(_QWORD *)(a2 + 408) = v33;
    v33[1] = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  }
  v19 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, (struct tagWND *)v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17, v20);
  LOBYTE(v17) = 1;
  v21 = HMValidateHandleNoSecure(v19, v17);
  v22 = INPUTDEST_FROM_PWND(v34, v21);
  v23 = v22[1];
  *a1 = *v22;
  v24 = v22[2];
  a1[1] = v23;
  v25 = v22[3];
  a1[2] = v24;
  v26 = v22[4];
  a1[3] = v25;
  v27 = v22[5];
  a1[4] = v26;
  v28 = v22[6];
  a1[5] = v27;
  v29 = v22[8];
  a1[6] = v28;
  a1[7] = v22[7];
  v30 = v22[9];
  a1[8] = v29;
  v31 = v22[10];
  result = a1;
  a1[9] = v30;
  a1[10] = v31;
  return result;
}
