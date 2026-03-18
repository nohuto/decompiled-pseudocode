/*
 * XREFs of ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007E908
 * Callers:
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FA10 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadRangeAvl(char *a1, struct _RTL_BALANCED_NODE *a2)
{
  _QWORD *v3; // rax

  if ( *(_OWORD *)&a2[1].0 != *(_OWORD *)(a1 + 24) )
  {
    if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 4) <= a2[1].Children[0] )
      return 0xFFFFFFFFLL;
    if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 3) >= a2[1].Children[1] )
      return 1LL;
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[3] = 275LL;
    v3[4] = 23LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  return 0LL;
}
