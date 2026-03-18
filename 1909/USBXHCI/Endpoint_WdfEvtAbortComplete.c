/*
 * XREFs of Endpoint_WdfEvtAbortComplete @ 0x1C001D400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_WdfEvtAbortComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             off_1C00561A8);
  if ( *(_BYTE *)(result + 37) )
  {
    v4 = *(_QWORD *)(result + 136);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) != 1 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 36;
LABEL_7:
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(result + 80),
        v4,
        13,
        v5,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
        *(_DWORD *)(result + 144),
        a2);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 37;
    goto LABEL_7;
  }
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C00576E8)(UcxDriverGlobals, a2);
}
