/*
 * XREFs of CmpCallbackFatalFilter @ 0x140825FC0
 * Callers:
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
