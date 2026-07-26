/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C00252A8
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0011174 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001651C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 *     ndisFilterXStateSetFlag @ 0x1C002528C (ndisFilterXStateSetFlag.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 */

char __fastcall ndisUpdateFilterFakeStatus(__int64 a1)
{
  unsigned __int8 v2; // cl
  char result; // al
  int v4; // edx

  v2 = *(_BYTE *)(a1 + 384);
  result = -(v2 & 1);
  v4 = (v2 & 1) != 0 ? -1071448033 : -1073741823;
  *(_DWORD *)(a1 + 96) = v4;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    return WPP_SF_qdD(71LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v2, v4);
  return result;
}
