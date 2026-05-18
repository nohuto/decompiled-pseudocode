/*
 * XREFs of _guard_dispatch_icall_nop @ 0x180006620
 * Callers:
 *     _TlgEnableCallback @ 0x180001010 (_TlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000246C (-FallBackToBDD@@YA_NXZ.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18000396C (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004110 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x1800041A8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042F4 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x1800048A4 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180004920 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004940 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     __scrt_dllmain_exception_filter @ 0x1800051CC (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_process_attach @ 0x180006078 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x180006220 (dllmain_dispatch.c)
 *     _RTC_Initialize @ 0x1800064BC (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x180006500 (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
