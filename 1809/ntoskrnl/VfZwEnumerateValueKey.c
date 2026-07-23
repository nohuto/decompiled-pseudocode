/*
 * XREFs of VfZwEnumerateValueKey @ 0x140948780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwEnumerateValueKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v10; // r9
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v10, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, int, ULONG_PTR))pXdvZwEnumerateValueKey)(
           a1,
           a2,
           a3,
           a4,
           a5,
           BugCheckParameter3);
}
