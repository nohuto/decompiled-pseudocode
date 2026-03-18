/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C01EF9C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C01F0930 (xxxPointerWindowHitTest.c)
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
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  _OWORD *result; // rax
  _QWORD v32[3]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v33[46]; // [rsp+78h] [rbp-C0h] BYREF

  if ( a4 )
  {
    v16 = *(_QWORD *)(a3 + 72);
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
    v32[0] = *(_QWORD *)(a2 + 416);
    *(_QWORD *)(a2 + 416) = v32;
    v32[1] = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  }
  v19 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, (struct tagWND *)v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17);
  LOBYTE(v17) = 1;
  v20 = HMValidateHandleNoSecure(v19, v17);
  v21 = INPUTDEST_FROM_PWND(v33, v20);
  v22 = v21[1];
  *a1 = *v21;
  v23 = v21[2];
  a1[1] = v22;
  v24 = v21[3];
  a1[2] = v23;
  v25 = v21[4];
  a1[3] = v24;
  v26 = v21[5];
  a1[4] = v25;
  v27 = v21[6];
  a1[5] = v26;
  v28 = v21[8];
  a1[6] = v27;
  a1[7] = v21[7];
  v29 = v21[9];
  a1[8] = v28;
  v30 = v21[10];
  result = a1;
  a1[9] = v29;
  a1[10] = v30;
  return result;
}
