/*
 * XREFs of _W32ExceptionHandler @ 0x1C0259A94
 * Callers:
 *     NtUserUnregisterClass @ 0x1C00313D0 (NtUserUnregisterClass.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C008AB90 (NtUserGetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C0143B10 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2, v3, v4);
  return 1LL;
}
