/*
 * XREFs of ndisSetDevicePowerNotificationHandlers @ 0x1C00F5798
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00BD790 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(__int64 a1, __int64 a2)
{
  __int64 v5; // rax

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x9Du, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 856) = v5;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x9Eu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1);
  return 0LL;
}
