/*
 * XREFs of ??1?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x18018CE60
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018DE1C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18018CDF8 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

TLG_STATUS __fastcall TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::~TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>(
        __int64 a1)
{
  TLG_STATUS result; // eax

  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    result = _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return result;
}
