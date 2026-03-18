/*
 * XREFs of VfZwAlpcCreatePort @ 0x1409464C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x14094A69C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePort(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a3, retaddr);
    ViZwCheckObjectAttributes(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR))pXdvZwAlpcCreatePort)(BugCheckParameter3, a2, a3);
}
