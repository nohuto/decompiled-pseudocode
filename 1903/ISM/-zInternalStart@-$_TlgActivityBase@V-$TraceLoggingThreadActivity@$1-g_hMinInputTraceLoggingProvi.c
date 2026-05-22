/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800AFD78
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800AE894 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingThreadActivity<&_TlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        __int64 a1)
{
  _QWORD *v1; // rdi
  ULONG result; // eax

  v1 = (_QWORD *)(a1 + 8);
  if ( (unsigned int)hProvider <= 5 )
  {
    result = 0;
    *v1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(a1 + 8));
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v1;
    result = EventActivityIdControl(4u, (LPGUID)(a1 + 24));
    *(_BYTE *)(a1 + 4) = 1;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
