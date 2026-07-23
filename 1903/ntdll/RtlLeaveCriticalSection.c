/*
 * XREFs of RtlLeaveCriticalSection @ 0x18003A8A0
 * Callers:
 *     sub_18000550C @ 0x18000550C (sub_18000550C.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18002C6E4 @ 0x18002C6E4 (sub_18002C6E4.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18002CAA8 @ 0x18002CAA8 (sub_18002CAA8.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 *     sub_180054024 @ 0x180054024 (sub_180054024.c)
 *     sub_180054C74 @ 0x180054C74 (sub_180054C74.c)
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 *     RtlCreateEnvironmentEx @ 0x18005CB80 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     RtlSleepConditionVariableCS @ 0x180060D90 (RtlSleepConditionVariableCS.c)
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     sub_18006BB94 @ 0x18006BB94 (sub_18006BB94.c)
 *     sub_18006D08C @ 0x18006D08C (sub_18006D08C.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     sub_18006FF90 @ 0x18006FF90 (sub_18006FF90.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     RtlReleasePebLock @ 0x180075AB0 (RtlReleasePebLock.c)
 *     RtlSetCurrentDirectory_U @ 0x180076540 (RtlSetCurrentDirectory_U.c)
 *     sub_1800766DC @ 0x1800766DC (sub_1800766DC.c)
 *     RtlGetCurrentDirectory_U @ 0x1800767A0 (RtlGetCurrentDirectory_U.c)
 *     sub_180076888 @ 0x180076888 (sub_180076888.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     sub_180079304 @ 0x180079304 (sub_180079304.c)
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 *     sub_18007FED8 @ 0x18007FED8 (sub_18007FED8.c)
 *     RtlSetEnvironmentStrings @ 0x180080C20 (RtlSetEnvironmentStrings.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_180083400 @ 0x180083400 (sub_180083400.c)
 *     LdrRegisterDllNotification @ 0x180083490 (LdrRegisterDllNotification.c)
 *     RtlSetProcessPreferredUILanguages @ 0x1800849D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180088AB0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 *     sub_18008A700 @ 0x18008A700 (sub_18008A700.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 *     RtlSetCurrentEnvironment @ 0x18008B5D0 (RtlSetCurrentEnvironment.c)
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     LdrDeleteEnclave @ 0x1800CD470 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CD500 (LdrInitializeEnclave.c)
 *     sub_1800CD600 @ 0x1800CD600 (sub_1800CD600.c)
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 *     LdrCallEnclave_0 @ 0x1800CDFC0 (LdrCallEnclave_0.c)
 *     LdrUnregisterDllNotification @ 0x1800CECB0 (LdrUnregisterDllNotification.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     sub_1800D8AB4 @ 0x1800D8AB4 (sub_1800D8AB4.c)
 *     sub_1800D95E0 @ 0x1800D95E0 (sub_1800D95E0.c)
 *     sub_1800DE4C8 @ 0x1800DE4C8 (sub_1800DE4C8.c)
 *     sub_1800DE870 @ 0x1800DE870 (sub_1800DE870.c)
 *     sub_1800DE908 @ 0x1800DE908 (sub_1800DE908.c)
 *     sub_1800DEA3C @ 0x1800DEA3C (sub_1800DEA3C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x1800EF2B0 (RtlQueryTagHeap.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     sub_1800F1150 @ 0x1800F1150 (sub_1800F1150.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_1800F3190 @ 0x1800F3190 (sub_1800F3190.c)
 *     RtlTraceDatabaseAdd @ 0x1800FBEF0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800FC130 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800FC200 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1800FC2B0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1800FC2D0 (RtlTraceDatabaseValidate.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180105AFC @ 0x180105AFC (sub_180105AFC.c)
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     sub_18010606C @ 0x18010606C (sub_18010606C.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 * Callees:
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6B30 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  LONG LockCount; // esi
  HANDLE LockSemaphore; // r9
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  int v10; // eax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+30h] [rbp+8h]

  if ( CriticalSection->RecursionCount-- != 1 )
    return 0;
  CriticalSection->OwningThread = 0LL;
  LockCount = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
  if ( LockCount == -2 )
    return 0;
  if ( (CriticalSection->LockCount & 1) != 0 )
    RtlpNotOwnerCriticalSection(CriticalSection);
  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore )
    LockSemaphore = sub_180007850((__int64)CriticalSection);
  v6 = 0;
  while ( LockCount != _InterlockedCompareExchange(
                         &CriticalSection->LockCount,
                         (LockCount & 2 | 1) + LockCount,
                         LockCount) )
  {
    v7 = v6;
    if ( v6 )
    {
      if ( v6 < 0x1FFF )
        v7 = 2 * v6;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_18;
      v7 = 64;
    }
    v6 = v7;
    v8 = __rdtsc();
    v12 = 0;
    v9 = 10 * (((v7 - 1) & (unsigned int)v8) + v7) / MEMORY[0x7FFE02D6];
    if ( v9 )
    {
      do
      {
        _mm_pause();
        ++v12;
      }
      while ( v12 < v9 );
    }
LABEL_18:
    _m_prefetchw(&CriticalSection->LockCount);
    LockCount = CriticalSection->LockCount;
  }
  if ( (LockCount & 2) != 0 )
  {
    if ( LockSemaphore == (HANDLE)-1LL )
    {
      _InterlockedOr(v11, 0);
      sub_180006FCC((unsigned __int64)&CriticalSection->LockCount, 0);
    }
    else
    {
      v10 = ZwSetEvent(LockSemaphore, 0LL);
      if ( v10 < 0 )
        RtlRaiseStatus(v10);
    }
  }
  return 0;
}
