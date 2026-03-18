/*
 * XREFs of VfZwConnectPort @ 0x140946A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckUnicodeString @ 0x14094A6EC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwConnectPort(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3a,
        ULONG_PTR a6,
        ULONG_PTR a7,
        ULONG_PTR a8)
{
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckUnicodeString(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3a, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckVirtualAddress(a7, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))pXdvZwConnectPort)(
           BugCheckParameter3,
           a2,
           a3,
           a4,
           BugCheckParameter3a,
           a6,
           a7,
           a8);
}
