/*
 * XREFs of _W32ExceptionHandler @ 0x1C0216FFC
 * Callers:
 *     NtUserConsoleControl @ 0x1C0011E60 (NtUserConsoleControl.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserUnregisterClass @ 0x1C00EAD40 (NtUserUnregisterClass.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C0124D50 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2);
  return 1LL;
}
