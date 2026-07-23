/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x1409CB89C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CB988 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x1409CBB40 (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1409CD25C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1409CD2D4 (PipInitializeEarlyLaunchDrivers.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x1409CD458 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(__int64 a1)
{
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_1404003D0 = (__int64)off_140401458;
  qword_1404003D8 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0xF0uLL);
  PspKernelRanges = 0LL;
  qword_140401C58 = 0LL;
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
