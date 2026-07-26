/*
 * XREFs of ndisMInvokeDriverUnload @ 0x1C011781C
 * Callers:
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C009CE60 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeDriverUnload(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      231,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  }
  result = (*(__int64 (__fastcall **)(__int64))(a1 + 152))(v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v5,
             1,
             232,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             a1);
  }
  return result;
}
