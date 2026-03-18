/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1400043B0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001040 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001220 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001BB0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001D10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     __scrt_common_main_seh @ 0x140002C80 (__scrt_common_main_seh.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140003140 (__scrt_initialize_thread_safe_statics.c)
 *     _Init_thread_notify @ 0x140003388 (_Init_thread_notify.c)
 *     _Init_thread_wait @ 0x1400033E0 (_Init_thread_wait.c)
 *     _RTC_Initialize @ 0x1400039D0 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x140003A20 (_RTC_Terminate.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x140006120 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
