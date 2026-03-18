/*
 * XREFs of KiUmsExceptionEntry @ 0x1401D6640
 * Callers:
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsExceptionEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49)
{
  __int64 v49; // rbp
  __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD v57[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+28h] [rbp-40h]
  __int64 v59; // [rsp+30h] [rbp-38h]
  char *v60; // [rsp+38h] [rbp-30h]
  __int64 v61; // [rsp+48h] [rbp-20h]
  __int64 v62; // [rsp+50h] [rbp-18h]
  __int64 *v63; // [rsp+58h] [rbp-10h]
  __int64 v64; // [rsp+70h] [rbp+8h] BYREF
  __int64 v65; // [rsp+78h] [rbp+10h]

  *(_QWORD *)(v49 - 128) = a3;
  *(_QWORD *)(v49 - 120) = a4;
  *(_QWORD *)(v49 - 112) = v50;
  *(_QWORD *)(v49 - 104) = v51;
  v64 = a1;
  v65 = a2;
  v57[4] = v49 + 272;
  v58 = v49 + 272 - (_QWORD)v57;
  v59 = v58;
  v60 = byte_1401D66C3;
  v63 = &v64;
  v62 = v49 - 128;
  v61 |= 1uLL;
  KiSwapToUmsThread(v57);
  return KiUmsFastReturnToUser(
           v53,
           v52,
           v54,
           v55,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49);
}
