/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180039340
 * Callers:
 *     RtlExtendMemoryZone @ 0x1800025F0 (RtlExtendMemoryZone.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180005FFC @ 0x180005FFC (sub_180005FFC.c)
 *     sub_1800062DC @ 0x1800062DC (sub_1800062DC.c)
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 *     sub_180006ECC @ 0x180006ECC (sub_180006ECC.c)
 *     sub_1800078BC @ 0x1800078BC (sub_1800078BC.c)
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000835C @ 0x18000835C (sub_18000835C.c)
 *     sub_18000844C @ 0x18000844C (sub_18000844C.c)
 *     sub_1800097B0 @ 0x1800097B0 (sub_1800097B0.c)
 *     sub_180009EE8 @ 0x180009EE8 (sub_180009EE8.c)
 *     sub_18000A060 @ 0x18000A060 (sub_18000A060.c)
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     sub_18000AB50 @ 0x18000AB50 (sub_18000AB50.c)
 *     sub_18000AC1C @ 0x18000AC1C (sub_18000AC1C.c)
 *     sub_1800170E8 @ 0x1800170E8 (sub_1800170E8.c)
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_1800222E4 @ 0x1800222E4 (sub_1800222E4.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 *     sub_18002DC10 @ 0x18002DC10 (sub_18002DC10.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     sub_18002E8CC @ 0x18002E8CC (sub_18002E8CC.c)
 *     sub_18002E988 @ 0x18002E988 (sub_18002E988.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     sub_18002FF6C @ 0x18002FF6C (sub_18002FF6C.c)
 *     sub_18002FFB0 @ 0x18002FFB0 (sub_18002FFB0.c)
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     sub_180030390 @ 0x180030390 (sub_180030390.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180030D30 (TpTimerOutstandingCallbackCount.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     TpWaitForTimer @ 0x180031D10 (TpWaitForTimer.c)
 *     AlpcGetMessageFromCompletionList @ 0x180031DF0 (AlpcGetMessageFromCompletionList.c)
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_1800356E0 @ 0x1800356E0 (sub_1800356E0.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 *     sub_180036320 @ 0x180036320 (sub_180036320.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_18004AC28 @ 0x18004AC28 (sub_18004AC28.c)
 *     sub_18004CDC4 @ 0x18004CDC4 (sub_18004CDC4.c)
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E7DC @ 0x18004E7DC (sub_18004E7DC.c)
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 *     sub_18004EC58 @ 0x18004EC58 (sub_18004EC58.c)
 *     sub_18004F1D0 @ 0x18004F1D0 (sub_18004F1D0.c)
 *     sub_18004F3A8 @ 0x18004F3A8 (sub_18004F3A8.c)
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 *     sub_180050520 @ 0x180050520 (sub_180050520.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_180050D98 @ 0x180050D98 (sub_180050D98.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     sub_1800538F4 @ 0x1800538F4 (sub_1800538F4.c)
 *     RtlFlsSetValue @ 0x1800548B0 (RtlFlsSetValue.c)
 *     sub_180054D90 @ 0x180054D90 (sub_180054D90.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     sub_180056664 @ 0x180056664 (sub_180056664.c)
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 *     sub_18005B7E8 @ 0x18005B7E8 (sub_18005B7E8.c)
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060AE0 (RtlSleepConditionVariableSRW.c)
 *     TpStartAsyncIoOperation @ 0x1800629D0 (TpStartAsyncIoOperation.c)
 *     sub_180062DB0 @ 0x180062DB0 (sub_180062DB0.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_180063920 @ 0x180063920 (sub_180063920.c)
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800668E0 (TpReleaseCleanupGroupMembers.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_180068BD4 @ 0x180068BD4 (sub_180068BD4.c)
 *     sub_18006B424 @ 0x18006B424 (sub_18006B424.c)
 *     sub_18006C688 @ 0x18006C688 (sub_18006C688.c)
 *     sub_18006DE7C @ 0x18006DE7C (sub_18006DE7C.c)
 *     sub_18006E250 @ 0x18006E250 (sub_18006E250.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 *     sub_18007025C @ 0x18007025C (sub_18007025C.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800737A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180073800 (RtlUnlockMemoryZone.c)
 *     sub_180073890 @ 0x180073890 (sub_180073890.c)
 *     sub_1800738D0 @ 0x1800738D0 (sub_1800738D0.c)
 *     RtlLockMemoryBlockLookaside @ 0x180073930 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_180073ADC @ 0x180073ADC (sub_180073ADC.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 *     sub_180074208 @ 0x180074208 (sub_180074208.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     sub_180078F1C @ 0x180078F1C (sub_180078F1C.c)
 *     sub_18007944C @ 0x18007944C (sub_18007944C.c)
 *     sub_180079B64 @ 0x180079B64 (sub_180079B64.c)
 *     sub_180079F40 @ 0x180079F40 (sub_180079F40.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D130 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrGetDllDirectory @ 0x18007D5F0 (LdrGetDllDirectory.c)
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 *     sub_18007DDBC @ 0x18007DDBC (sub_18007DDBC.c)
 *     sub_18007DF18 @ 0x18007DF18 (sub_18007DF18.c)
 *     RtlUpdateTimer @ 0x18007E540 (RtlUpdateTimer.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007E680 (TpSetDefaultPoolStackInformation.c)
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 *     LdrSetDllDirectory @ 0x18007EF40 (LdrSetDllDirectory.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_180080290 @ 0x180080290 (sub_180080290.c)
 *     sub_180080EC0 @ 0x180080EC0 (sub_180080EC0.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 *     sub_1800823E0 @ 0x1800823E0 (sub_1800823E0.c)
 *     RtlDeleteTimerQueueEx @ 0x180082570 (RtlDeleteTimerQueueEx.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180083950 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x1800839B0 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x1800843E0 (TpDisablePoolCallbackChecks.c)
 *     sub_180084520 @ 0x180084520 (sub_180084520.c)
 *     sub_180084BBC @ 0x180084BBC (sub_180084BBC.c)
 *     sub_180084C44 @ 0x180084C44 (sub_180084C44.c)
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 *     sub_180086F14 @ 0x180086F14 (sub_180086F14.c)
 *     sub_180088B88 @ 0x180088B88 (sub_180088B88.c)
 *     sub_180088C38 @ 0x180088C38 (sub_180088C38.c)
 *     RtlSetIoCompletionCallback @ 0x180088D60 (RtlSetIoCompletionCallback.c)
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 *     LdrFlushAlternateResourceModules @ 0x18008AA00 (LdrFlushAlternateResourceModules.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008C400 (LdrRemoveDllDirectory.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE7B0 (LdrQueryModuleServiceTags.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     sub_1800D5D4C @ 0x1800D5D4C (sub_1800D5D4C.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDB00 (LdrUpdatePackageSearchPath.c)
 *     RtlSetSearchPathMode @ 0x1800DDC00 (RtlSetSearchPathMode.c)
 *     sub_1800DE268 @ 0x1800DE268 (sub_1800DE268.c)
 *     sub_1800DE3D0 @ 0x1800DE3D0 (sub_1800DE3D0.c)
 *     RtlGrowFunctionTable @ 0x1800DFCA0 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E8930 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x1800E8990 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800EA5C0 (RtlDeleteBarrier.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F3FF0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F4120 (RtlRegisterSecureMemoryCacheCallback.c)
 *     sub_1800F41D0 @ 0x1800F41D0 (sub_1800F41D0.c)
 *     sub_1800F7B98 @ 0x1800F7B98 (sub_1800F7B98.c)
 *     sub_1800F85D4 @ 0x1800F85D4 (sub_1800F85D4.c)
 *     sub_1800F86AC @ 0x1800F86AC (sub_1800F86AC.c)
 *     sub_1800F8798 @ 0x1800F8798 (sub_1800F8798.c)
 *     sub_1800F88D8 @ 0x1800F88D8 (sub_1800F88D8.c)
 *     sub_1800FB36C @ 0x1800FB36C (sub_1800FB36C.c)
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 *     sub_180102028 @ 0x180102028 (sub_180102028.c)
 *     sub_1801021FC @ 0x1801021FC (sub_1801021FC.c)
 *     sub_180102250 @ 0x180102250 (sub_180102250.c)
 *     sub_180107810 @ 0x180107810 (sub_180107810.c)
 *     sub_18010A9E0 @ 0x18010A9E0 (sub_18010A9E0.c)
 *     sub_18010AA54 @ 0x18010AA54 (sub_18010AA54.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 *     sub_18010B474 @ 0x18010B474 (sub_18010B474.c)
 *     sub_18010B5E4 @ 0x18010B5E4 (sub_18010B5E4.c)
 *     sub_18010B760 @ 0x18010B760 (sub_18010B760.c)
 *     sub_18010BD2C @ 0x18010BD2C (sub_18010BD2C.c)
 *     sub_18010C01C @ 0x18010C01C (sub_18010C01C.c)
 *     sub_18010C1C4 @ 0x18010C1C4 (sub_18010C1C4.c)
 *     sub_18010E8E8 @ 0x18010E8E8 (sub_18010E8E8.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EA70 (TpSetPoolThreadCpuSets.c)
 *     sub_18010EBD0 @ 0x18010EBD0 (sub_18010EBD0.c)
 *     sub_18010F990 @ 0x18010F990 (sub_18010F990.c)
 *     sub_180114820 @ 0x180114820 (sub_180114820.c)
 *     sub_180114B68 @ 0x180114B68 (sub_180114B68.c)
 *     sub_180115154 @ 0x180115154 (sub_180115154.c)
 *     sub_1801155A4 @ 0x1801155A4 (sub_1801155A4.c)
 *     sub_180115BB0 @ 0x180115BB0 (sub_180115BB0.c)
 * Callees:
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 *     sub_180036790 @ 0x180036790 (sub_180036790.c)
 *     sub_180077EA8 @ 0x180077EA8 (sub_180077EA8.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 Ptr; // rdi
  bool v3; // cl
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  int i; // edx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  signed __int32 v19[3]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Ptr = (unsigned __int64)SRWLock->Ptr;
    while ( 1 )
    {
      if ( (Ptr & 1) != 0 )
      {
        if ( sub_180036790() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v3 = 0;
        v19[0] = 3;
        v16 = 0LL;
        if ( (Ptr & 2) != 0 )
        {
          v15 = 0LL;
          v18 = -1;
          v14 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v5 = (unsigned __int64)&v14 | Ptr & 8 | 7;
          v3 = (Ptr & 4) == 0;
        }
        else
        {
          v4 = 11LL;
          v15 = &v14;
          v18 = Ptr >> 4;
          if ( v18 <= 1 )
            v4 = 3LL;
          v5 = (unsigned __int64)&v14 | v4;
          if ( !(unsigned int)(Ptr >> 4) )
            v18 = -2;
        }
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v5, Ptr);
        v6 = Ptr == v7;
        Ptr = v7;
        if ( !v6 )
          goto LABEL_13;
        if ( v3 )
          sub_180077EA8(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v10 = __rdtsc();
            v11 = v10 + (unsigned int)dword_180163EC4;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v19[0] & 2) == 0 )
                break;
              v12 = v10;
              v13 = __rdtsc();
              v10 = v13;
              if ( v13 <= v12 || v13 >= v11 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v19[0] & 2) != 0 && i != dword_180163EC4 / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v19, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v19[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, Ptr + 1, Ptr) )
          return;
LABEL_13:
        sub_1800365A0(&v20);
        _m_prefetchw(SRWLock);
        Ptr = (unsigned __int64)SRWLock->Ptr;
      }
    }
  }
}
