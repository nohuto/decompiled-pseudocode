/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01CB56C
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C01CC520 (xxxPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 */

HWND __fastcall xxxWindowHitTestWithoutTargeting(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8)
{
  struct tagWND *v9; // r10
  __int64 v10; // r11

  if ( (unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return xxxDCEWindowHitTest(v9, a3, v10, a5, *(_QWORD *)&a6, (__int64)a7, a8);
  else
    return (HWND)xxxWindowHitTest((ULONG_PTR)v9, *(_QWORD *)&a6, (__int64)a7);
}
