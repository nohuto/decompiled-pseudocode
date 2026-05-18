/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1800065E0
 * Callers:
 *     _TlgEnableCallback @ 0x180001010 (_TlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000245C (-FallBackToBDD@@YA_NXZ.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1800039B0 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040A0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004138 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004284 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004420 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004834 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x1800048B0 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x1800048D0 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     __scrt_dllmain_exception_filter @ 0x18000516C (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_process_attach @ 0x180006028 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x1800061DC (dllmain_dispatch.c)
 *     _RTC_Initialize @ 0x18000646C (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x1800064B0 (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
