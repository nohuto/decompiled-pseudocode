/*
 * XREFs of KiUmsExceptionEntry @ 0x1401D1040
 * Callers:
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsExceptionEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        __int64 a36,
        __int64 a37,
        __int64 a38)
{
  __int64 v38; // rbp
  __int64 v39; // r10
  __int64 v40; // r11
  _QWORD v42[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+28h] [rbp-40h]
  __int64 v44; // [rsp+30h] [rbp-38h]
  char *v45; // [rsp+38h] [rbp-30h]
  __int64 v46; // [rsp+48h] [rbp-20h]
  __int64 v47; // [rsp+50h] [rbp-18h]
  __int64 *v48; // [rsp+58h] [rbp-10h]
  __int64 v49; // [rsp+70h] [rbp+8h] BYREF
  __int64 v50; // [rsp+78h] [rbp+10h]

  *(_QWORD *)(v38 - 128) = a3;
  *(_QWORD *)(v38 - 120) = a4;
  *(_QWORD *)(v38 - 112) = v39;
  *(_QWORD *)(v38 - 104) = v40;
  v49 = a1;
  v50 = a2;
  v42[4] = v38 + 272;
  v43 = v38 + 272 - (_QWORD)v42;
  v44 = v43;
  v45 = byte_1401D10C3;
  v48 = &v49;
  v47 = v38 - 128;
  v46 |= 1uLL;
  KiSwapToUmsThread(v42);
  return KiUmsFastReturnToUser();
}
