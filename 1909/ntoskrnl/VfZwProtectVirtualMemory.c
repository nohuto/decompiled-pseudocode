/*
 * XREFs of VfZwProtectVirtualMemory @ 0x1409881A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140965A64 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwProtectVirtualMemory(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  VfCheckPageProtection(a4, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, ULONG_PTR, _QWORD, ULONG_PTR))pXdvZwProtectVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           BugCheckParameter3);
}
