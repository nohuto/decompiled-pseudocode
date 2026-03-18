/*
 * XREFs of ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0059130
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 */

struct tagMONITOR *__fastcall NormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6)
{
  struct tagMONITOR *v10; // rbx
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  v10 = xxxNormalizeRect(a1, a2, a3, a4, a5, a6, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  return v10;
}
