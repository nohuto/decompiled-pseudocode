/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C001A140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001A380 (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             off_1C004F180);
  if ( *(_BYTE *)(result + 37) && (v4 = *(_QWORD *)(result + 136)) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) != 1 )
      return result;
    v5 = 32;
  }
  else
  {
    v5 = 33;
  }
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_ddq(
    *(_QWORD *)(result + 80),
    v4,
    13,
    v5,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
    *(_DWORD *)(result + 144),
    a2);
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C00506A0)(UcxDriverGlobals, a2);
}
