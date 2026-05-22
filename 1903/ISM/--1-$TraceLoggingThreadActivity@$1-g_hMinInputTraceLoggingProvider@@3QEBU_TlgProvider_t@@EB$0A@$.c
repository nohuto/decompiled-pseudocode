/*
 * XREFs of ??1?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x1800AE2D4
 * Callers:
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$0 @ 0x1800AF769 (_LampArrayDevice--ProcessLampState_--_1_--dtor$0.c)
 * Callees:
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800AE1E0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

TLG_STATUS __fastcall TraceLoggingThreadActivity<&_TlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::~TraceLoggingThreadActivity<&_TlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>(
        __int64 a1)
{
  TLG_STATUS result; // eax

  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
      EventActivityIdControl(4u, (LPGUID)(a1 + 24));
    *(_DWORD *)a1 = 2;
    result = _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return result;
}
