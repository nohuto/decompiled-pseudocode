/*
 * XREFs of VfZwDuplicateToken @ 0x140948560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x14094B69C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x14094B784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094B7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateToken(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        int a5,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(v10, retaddr);
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  }
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, int, ULONG_PTR))pXdvZwDuplicateToken)(
           a1,
           a2,
           a3,
           v11,
           a5,
           BugCheckParameter3);
}
