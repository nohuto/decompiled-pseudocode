/*
 * XREFs of SmPerformStoreSwapOperation @ 0x140143D98
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013E614 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401439E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     MmInSwapVirtualAddresses @ 0x14089B24C (MmInSwapVirtualAddresses.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, void *a2)
{
  bool v2; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    RtlpSysVolFree(a2);
    return 0LL;
  }
  else
  {
    v2 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v2 )
      return MmInSwapVirtualAddresses(Process, a2);
    else
      return MmOutSwapVirtualAddresses(Process);
  }
}
