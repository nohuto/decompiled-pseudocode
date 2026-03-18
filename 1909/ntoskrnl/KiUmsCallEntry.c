/*
 * XREFs of KiUmsCallEntry @ 0x1401D7080
 * Callers:
 *     KiSystemCall64 @ 0x1401D5A80 (KiSystemCall64.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsCallEntry(
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
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD v55[5]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+28h] [rbp-180h]
  __int64 v57; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v58)(); // [rsp+38h] [rbp-170h]
  __int64 v59; // [rsp+48h] [rbp-160h]
  __int64 v60; // [rsp+50h] [rbp-158h]
  char *v61; // [rsp+58h] [rbp-150h]
  char v62; // [rsp+70h] [rbp-138h] BYREF

  v55[4] = v49 + 272;
  v56 = v49 + 272 - (_QWORD)v55;
  v57 = v56 - 424;
  v58 = KiUmsCallEntryContinue;
  v61 = &v62;
  v60 = v49 - 128;
  v59 &= ~1uLL;
  KiSwapToUmsThread(v55);
  return KiUmsFastReturnToUser(
           v51,
           v50,
           v52,
           v53,
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
