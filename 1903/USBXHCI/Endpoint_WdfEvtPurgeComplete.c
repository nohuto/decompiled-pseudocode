/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C001D4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D740 (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r10
  __int64 result; // rax
  int v7; // r9d

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C00561A8);
  v5 = v3;
  if ( *(_BYTE *)(v3 + 37) && (result = *(_QWORD *)(v3 + 136)) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 16), 0xFFFFFFFF) != 1 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 32;
LABEL_8:
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v5 + 80),
        v4,
        13,
        v7,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
        *(_DWORD *)(v5 + 144),
        a2);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 33;
    goto LABEL_8;
  }
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C00576E0)(UcxDriverGlobals, a2);
}
