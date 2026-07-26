/*
 * XREFs of ndisInvokeOidRequestComplete @ 0x1C0016930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  int v8; // edx

  v3 = *(_QWORD *)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x6Au,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      *(_DWORD *)(a2 + 32),
      a2,
      a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 320))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v8,
             11,
             107,
             (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
             a1,
             a2);
  }
  return result;
}
