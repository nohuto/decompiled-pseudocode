/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x1C00EB7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x137u, 0LL, BugCheckParameter2, 0LL, 0LL);
}
