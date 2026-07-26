/*
 * XREFs of ndisMiniportXStateClearFlag @ 0x1C0025350
 * Callers:
 *     ndisMRestoreOpenHandlers @ 0x1C0010C30 (ndisMRestoreOpenHandlers.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001651C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C0025384 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

char __fastcall ndisMiniportXStateClearFlag(__int64 a1, char a2)
{
  unsigned __int8 v2; // dl
  bool v3; // zf

  v2 = ~a2;
  v3 = (v2 & *(_BYTE *)(a1 + 930)) == 0;
  *(_BYTE *)(a1 + 930) &= v2;
  if ( v3 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_q(73LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
    return 1;
  }
  else
  {
    ndisUpdateMiniportFakeStatus(a1);
    return 0;
  }
}
