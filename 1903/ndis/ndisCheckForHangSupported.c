/*
 * XREFs of ndisCheckForHangSupported @ 0x1C001CA14
 * Callers:
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(__int64 a1)
{
  _QWORD *v1; // rax
  bool v2; // zf

  v1 = *(_QWORD **)(a1 + 3760);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    if ( !v1[24] )
      return 0;
    v2 = v1[15] == 0LL;
  }
  else
  {
    if ( !v1[26] )
      return 0;
    v2 = v1[27] == 0LL;
  }
  return !v2;
}
