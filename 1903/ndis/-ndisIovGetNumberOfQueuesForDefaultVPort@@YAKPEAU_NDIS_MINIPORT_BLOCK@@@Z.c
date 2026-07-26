/*
 * XREFs of ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A884
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A8B0 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovGetNumberOfQueuesForDefaultVPort(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v1; // rcx

  if ( ndisIovHWvRSSSupported(a1) )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3568) + 128LL);
  else
    return 1LL;
}
