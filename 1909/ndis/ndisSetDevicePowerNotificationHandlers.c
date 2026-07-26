/*
 * XREFs of ndisSetDevicePowerNotificationHandlers @ 0x1C0119604
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C002DCB0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      165,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1);
  }
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( *(_BYTE *)(v2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(v2 + 2) < 0x10u )
    return 3221225485LL;
  if ( *(_DWORD *)(v2 + 4) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 856) = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      166,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1);
  }
  return 0LL;
}
