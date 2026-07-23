/*
 * XREFs of CmInitSystem2 @ 0x1409C72F8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpRegisterTraceLoggingProvider @ 0x140738AF0 (CmpRegisterTraceLoggingProvider.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 */

int CmInitSystem2()
{
  int result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v1) = 2097182;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  result = IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))VRegSetup);
  if ( result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, result, 0LL, 0LL);
  return result;
}
