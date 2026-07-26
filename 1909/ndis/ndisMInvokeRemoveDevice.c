/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C009AFF8
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C0118868 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ndisMInvokeRemoveDevice(__int64 a1))(_QWORD)
{
  __int64 v1; // rsi
  __int64 (__fastcall *result)(_QWORD); // rax
  int v4; // r9d

  v1 = *(_QWORD *)(a1 + 3760);
  result = *(__int64 (__fastcall **)(_QWORD))(v1 + 792);
  if ( !result )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v4 = 217;
    return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_SF_qq(
                                             *((_QWORD *)WPP_GLOBAL_Control + 8),
                                             4,
                                             1,
                                             v4,
                                             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                                             v1,
                                             a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      215,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v1,
      a1);
    result = *(__int64 (__fastcall **)(_QWORD))(v1 + 792);
  }
  result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 4112));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 216;
    return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_SF_qq(
                                             *((_QWORD *)WPP_GLOBAL_Control + 8),
                                             4,
                                             1,
                                             v4,
                                             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                                             v1,
                                             a1);
  }
  return result;
}
