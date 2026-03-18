/*
 * XREFs of traceFrame @ 0x1C00F8888
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C00F9078 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00E5F04 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     tracePointerFlags @ 0x1C00F8968 (tracePointerFlags.c)
 */

__int64 __fastcall traceFrame(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = 0;
  result = WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x15u,
             45 - (*(_DWORD *)(a1 + 56) != 0),
             (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 88) + 48LL);
    do
    {
      LODWORD(v6) = *((unsigned __int16 *)v4 - 20);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x2Eu,
        (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids,
        v6);
      LODWORD(v8) = v4[1];
      LODWORD(v7) = *v4;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        0x15u,
        0x2Bu,
        (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids,
        v7,
        v8);
      result = tracePointerFlags((unsigned int)*(v4 - 5));
      ++v2;
      v4 += 42;
    }
    while ( v2 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
