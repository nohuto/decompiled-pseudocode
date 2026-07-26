/*
 * XREFs of ndisInvokeUninstall @ 0x1C0117094
 * Callers:
 *     ?ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C007C10C (-ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeUninstall(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      104,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1);
  result = (*(__int64 (**)(void))(a1 + 144))();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             1,
             105,
             (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
             a1);
  return result;
}
