/*
 * XREFs of MiGetVirtualFaultPageInfo @ 0x1402D2A3C
 * Callers:
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     MiValidVirtualizationFault @ 0x1402D30A4 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVirtualFaultPageInfo(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // r9

  v2 = *(unsigned __int64 **)(a1 + 8);
  v3 = *v2;
  if ( a2 < *v2 || a2 >= v3 + v2[1] )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 40) + 8 * ((a2 - v3) >> 12);
}
