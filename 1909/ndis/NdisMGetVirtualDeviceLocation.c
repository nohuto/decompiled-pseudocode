/*
 * XREFs of NdisMGetVirtualDeviceLocation @ 0x1C00B1220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall NdisMGetVirtualDeviceLocation(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6))(__int64, _QWORD, __int64, __int64, __int64)
{
  unsigned __int16 v8; // bp
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax
  __int64 v11; // rcx

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      117,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(a1 + 4800);
  if ( result )
  {
    v11 = *(_QWORD *)(a1 + 4816);
    if ( v11 )
      result = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(v11, v8, a3, a4, a6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))WPP_RECORDER_SF_q(
                                                                                 *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                                                 a2,
                                                                                 26,
                                                                                 118,
                                                                                 (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
                                                                                 a1);
  }
  return result;
}
