/*
 * XREFs of VfZwQueryDirectoryFile @ 0x140988400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViZwCheckApcRequirement @ 0x14098A014 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x14098A0CC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        ULONG_PTR a6,
        int a7,
        int a8,
        char a9,
        ULONG_PTR BugCheckParameter3,
        char a11)
{
  ULONG_PTR v15; // r8
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v15, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
    ViZwCheckUnicodeString(BugCheckParameter3, retaddr);
    ViZwCheckApcRequirement(retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, ULONG_PTR, ULONG_PTR, int, int, char, ULONG_PTR, char))pXdvZwQueryDirectoryFile)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           BugCheckParameter3,
           a11);
}
