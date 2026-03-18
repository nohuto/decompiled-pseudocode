/*
 * XREFs of Endpoint_UcxEvtEndpointPurge @ 0x1C001C4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C001DAFC (WPP_RECORDER_SF_ddqd.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointPurge(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  int v8; // edx
  _UNKNOWN **result; // rax
  unsigned int v10; // ebp

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C00561A8);
  v6 = (_QWORD *)v3;
  if ( *(_BYTE *)(v3 + 37) && (v7 = *(_QWORD *)(v3 + 136)) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 16) = v8;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_ddqd(v6[10], v8, v5, 34);
      v8 = *(_DWORD *)(v7 + 8);
    }
    v10 = 1;
    if ( v8 )
    {
      do
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1320))(
                                WPP_MAIN_CB.Dpc.ProcessorHistory,
                                *(_QWORD *)(*(_QWORD *)(104LL * (v10++ - 1) + v6[17] + 48) + 72LL),
                                Endpoint_WdfEvtPurgeComplete,
                                a2);
      while ( v10 <= *(_DWORD *)(v7 + 8) );
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v3 + 80),
        v4,
        13,
        35,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        a2);
    }
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1320))(
                          WPP_MAIN_CB.Dpc.ProcessorHistory,
                          *(_QWORD *)(v6[11] + 72LL),
                          Endpoint_WdfEvtPurgeComplete,
                          a2);
  }
  return result;
}
