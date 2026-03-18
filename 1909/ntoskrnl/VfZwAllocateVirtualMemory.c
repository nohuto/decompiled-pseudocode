/*
 * XREFs of VfZwAllocateVirtualMemory @ 0x140985BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140965A64 (VfCheckPageProtection.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAllocateVirtualMemory(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        unsigned int a6)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a6, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, retaddr);
    ViZwCheckVirtualAddress(a4, retaddr);
  }
  return ((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, unsigned int))pXdvZwAllocateVirtualMemory)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
