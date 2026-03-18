/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0205A4C
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C0206920 (xxxPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     xxxDCEWindowHitTest @ 0x1C00E51FC (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 */

HWND __fastcall xxxWindowHitTestWithoutTargeting(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8)
{
  ULONG_PTR v9; // r10
  __int64 v10; // r11

  if ( (unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return xxxDCEWindowHitTest(v9, a3, v10, a5, a6, (__int64)a7, a8);
  else
    return (HWND)xxxWindowHitTest(v9, *(_QWORD *)&a6, (__int64)a7);
}
