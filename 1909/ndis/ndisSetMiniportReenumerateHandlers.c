/*
 * XREFs of ndisSetMiniportReenumerateHandlers @ 0x1C011919C
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C002DCB0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportReenumerateHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r8

  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  v2 = *(_BYTE *)(a1 + 24);
  if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 25) < 0x28u) )
    return 3221225659LL;
  if ( !*(_BYTE *)(a2 + 1) )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return 3221225485LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 864) = v3;
  *(_QWORD *)(a1 + 872) = *(_QWORD *)(a2 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      63,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v3);
  }
  return 0LL;
}
