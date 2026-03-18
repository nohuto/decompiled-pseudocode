/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140A0FDEC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A0FB40 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A0FED8 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x140A10080 (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140A11858 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     VslConnectSwInterrupt @ 0x140A118DC (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x140A11978 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_1404253D0 = (__int64)off_140426798;
  qword_1404253D8 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x100uLL);
  PspKernelRanges = 0LL;
  qword_140426F98 = 0LL;
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1, v2);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
