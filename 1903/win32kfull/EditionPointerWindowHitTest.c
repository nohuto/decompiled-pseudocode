/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C0205DF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C0206BD0 (xxxPointerWindowHitTest.c)
 */

__int64 __fastcall EditionPointerWindowHitTest(
        __int64 a1,
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
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _DWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 result; // rax
  __int64 v31; // [rsp+60h] [rbp-98h] BYREF
  struct tagWND *v32; // [rsp+68h] [rbp-90h]
  __int64 v33; // [rsp+70h] [rbp-88h]
  _DWORD v34[30]; // [rsp+78h] [rbp-80h] BYREF

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( a4 )
  {
    v16 = *(struct tagWND **)(a3 + 80);
  }
  else
  {
    v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
    v31 = *(_QWORD *)(a2 + 408);
    *(_QWORD *)(a2 + 408) = &v31;
    v32 = v16;
    if ( v16 )
      HMLockObject(v16);
  }
  v19 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17, v20);
  LOBYTE(v17) = 1;
  v22 = HMValidateHandleNoSecure(v19, v17, v20, v21);
  v23 = INPUTDEST_FROM_PWND(v34, v22);
  v24 = *((_OWORD *)v23 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v23;
  v25 = *((_OWORD *)v23 + 2);
  *(_OWORD *)(a1 + 16) = v24;
  v26 = *((_OWORD *)v23 + 3);
  *(_OWORD *)(a1 + 32) = v25;
  v27 = *((_OWORD *)v23 + 4);
  *(_OWORD *)(a1 + 48) = v26;
  v28 = *((_OWORD *)v23 + 5);
  *(_OWORD *)(a1 + 64) = v27;
  v29 = *((_OWORD *)v23 + 6);
  *(_OWORD *)(a1 + 80) = v28;
  *(_QWORD *)&v28 = *((_QWORD *)v23 + 14);
  result = a1;
  *(_OWORD *)(a1 + 96) = v29;
  *(_QWORD *)(a1 + 112) = v28;
  return result;
}
