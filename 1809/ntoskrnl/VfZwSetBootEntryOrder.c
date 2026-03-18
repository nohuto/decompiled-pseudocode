/*
 * XREFs of VfZwSetBootEntryOrder @ 0x140949B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14094A784 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14094A7CC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetBootEntryOrder(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvZwSetBootEntryOrder)(BugCheckParameter3, a2);
}
