/*
 * XREFs of ndisMInvokeCancelDirectOidRequest @ 0x1C009AE60
 * Callers:
 *     ndisDoCancelDirectOidRequest @ 0x1C006A6E0 (ndisDoCancelDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeCancelDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      260,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 256))(*(_QWORD *)(a1 + 24), v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v6,
             11,
             261,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             a1);
  }
  return result;
}
