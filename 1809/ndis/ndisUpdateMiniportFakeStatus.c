/*
 * XREFs of ndisUpdateMiniportFakeStatus @ 0x1C0025384
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0011174 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     ndisMiniportXStateClearFlag @ 0x1C0025350 (ndisMiniportXStateClearFlag.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisUpdateMiniportFakeStatus(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 930);
  result = 3221225473LL;
  if ( (v1 & 4) != 0 )
  {
    result = 3223519279LL;
  }
  else if ( (v1 & 2) != 0 )
  {
    result = 3223519263LL;
  }
  else if ( (v1 & 1) != 0 )
  {
    result = 3221291021LL;
  }
  *(_DWORD *)(a1 + 540) = result;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    return WPP_SF_qdD(72LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v1, result);
  return result;
}
