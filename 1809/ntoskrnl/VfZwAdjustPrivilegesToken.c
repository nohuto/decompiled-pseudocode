/*
 * XREFs of VfZwAdjustPrivilegesToken @ 0x140947130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAdjustPrivilegesToken(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6)
{
  __int64 v10; // rdx
  ULONG_PTR v11; // r8
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v11, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a6, retaddr);
  }
  LOBYTE(v10) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, ULONG_PTR, ULONG_PTR))pXdvZwAdjustPrivilegesToken)(
           a1,
           v10,
           a3,
           a4,
           BugCheckParameter3,
           a6);
}
