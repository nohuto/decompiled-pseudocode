/*
 * XREFs of CmInitSystem2 @ 0x1409FC974
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1407574C4 (CmpRegisterTraceLoggingProvider.c)
 */

int CmInitSystem2()
{
  int result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  result = IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))VRegSetup);
  if ( result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, result, 0LL, 0LL);
  return result;
}
