/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x140720410
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406B3A40 (NtSetThreadExecutionState.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PopDispatchFullWake @ 0x14072AFC0 (PopDispatchFullWake.c)
 *     PopUserPresentSetWorker @ 0x140749E10 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408BCF70 (TtmNotifyConsoleUserPresent.c)
 */

ULONG __fastcall PopNotifyConsoleUserPresent(unsigned __int8 a1, char a2, unsigned int a3)
{
  ULONG result; // eax
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  ULONG v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  LOBYTE(v7) = a2;
  result = (unsigned int)memset(v6, 0, 0x28uLL);
  v8 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    result = RtlGetActiveConsoleId();
    v7 = result;
    if ( result != -1 )
    {
      if ( TtmpEnabled == 1 )
      {
        return TtmNotifyConsoleUserPresent(result, a3);
      }
      else
      {
        LODWORD(v6[3]) = 0;
        v6[4] = 0LL;
        v6[2] = &v8;
        LOWORD(v8) = a1;
        HIDWORD(v8) = a3;
        LODWORD(v6[0]) = 1;
        BYTE4(v6[0]) = 0;
        LODWORD(v6[1]) = 8;
        return PopInvokeWin32Callout(5, (__int64)v6, 1, (int *)&v7);
      }
    }
  }
  return result;
}
