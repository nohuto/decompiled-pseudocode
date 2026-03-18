/*
 * XREFs of VfZwOpenFile @ 0x140947F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x14094A69C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenFile(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, ULONG_PTR, int, int))pXdvZwOpenFile)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           a5,
           a6);
}
