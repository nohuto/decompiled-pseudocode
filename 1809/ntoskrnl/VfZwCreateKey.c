/*
 * XREFs of VfZwCreateKey @ 0x140947E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x14094B69C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x14094B6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateKey(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3a,
        int a6,
        ULONG_PTR a7)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, _QWORD, ULONG_PTR, int, ULONG_PTR))pXdvZwCreateKey)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           BugCheckParameter3a,
           a6,
           a7);
}
