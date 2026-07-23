/*
 * XREFs of RtlEnterCriticalSection @ 0x18001B380
 * Callers:
 *     sub_18000550C @ 0x18000550C (sub_18000550C.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_18002C6E4 @ 0x18002C6E4 (sub_18002C6E4.c)
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18002CAA8 @ 0x18002CAA8 (sub_18002CAA8.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
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
 *     RtlSetCurrentDirectory_U @ 0x180076540 (RtlSetCurrentDirectory_U.c)
 *     sub_180076888 @ 0x180076888 (sub_180076888.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     sub_180079304 @ 0x180079304 (sub_180079304.c)
 *     RtlAcquirePebLock @ 0x180079750 (RtlAcquirePebLock.c)
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
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 *     LdrUnregisterDllNotification @ 0x1800CECB0 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     sub_1800D8AB4 @ 0x1800D8AB4 (sub_1800D8AB4.c)
 *     sub_1800D95E0 @ 0x1800D95E0 (sub_1800D95E0.c)
 *     sub_1800DE4C8 @ 0x1800DE4C8 (sub_1800DE4C8.c)
 *     sub_1800DE870 @ 0x1800DE870 (sub_1800DE870.c)
 *     sub_1800DE908 @ 0x1800DE908 (sub_1800DE908.c)
 *     sub_1800DEA3C @ 0x1800DEA3C (sub_1800DEA3C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     RtlQueryTagHeap @ 0x1800EF2B0 (RtlQueryTagHeap.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_1800F3190 @ 0x1800F3190 (sub_1800F3190.c)
 *     RtlTraceDatabaseAdd @ 0x1800FBEF0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800FC130 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800FC200 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1800FC280 (RtlTraceDatabaseLock.c)
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
 *     sub_18001B3D0 @ 0x18001B3D0 (sub_18001B3D0.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  HANDLE UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return sub_18001B3D0();
  }
  return result;
}
