/*
 * XREFs of VfZwAddDriverEntry @ 0x140985AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViZwCheckVirtualAddress @ 0x14098A164 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14098A1AC (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAddDriverEntry(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(BugCheckParameter3, retaddr);
    ViZwCheckVirtualAddress(a2, retaddr);
  }
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvZwAddDriverEntry)(BugCheckParameter3, a2);
}
