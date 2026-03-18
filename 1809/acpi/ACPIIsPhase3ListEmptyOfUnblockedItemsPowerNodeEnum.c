/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x1C00500F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqqss @ 0x1C00504A8 (WPP_RECORDER_SF_qDqqss.c)
 */

__int64 __fastcall ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // r9d

  v3 = *(_DWORD *)(a3 + 56);
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    v4 = v3 | 0x1000000;
    *(_DWORD *)(a3 + 56) = v4;
    v5 = 44;
LABEL_6:
    WPP_RECORDER_SF_qDqqss(WPP_GLOBAL_Control->DeviceExtension, v4, a3, v5);
    return 0LL;
  }
  if ( (v3 & 0x10000000) == 0
    && (unsigned int)(_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) - 3) <= 1 )
  {
    v4 = *(_DWORD *)(a3 + 56) | 0x10000000;
    *(_DWORD *)(a3 + 56) = v4;
    v5 = 45;
    goto LABEL_6;
  }
  return 0LL;
}
