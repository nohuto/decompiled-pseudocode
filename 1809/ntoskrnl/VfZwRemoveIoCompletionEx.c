/*
 * XREFs of VfZwRemoveIoCompletionEx @ 0x14094A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwRemoveIoCompletionEx(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        char a6)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, _QWORD, ULONG_PTR, ULONG_PTR, char))pXdvZwRemoveIoCompletionEx)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3,
           a6);
}
