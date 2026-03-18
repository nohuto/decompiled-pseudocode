/*
 * XREFs of LeaveCrit @ 0x1C0028BF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void LeaveCrit()
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v1; // rbx
  int v2; // eax
  bool v3; // zf
  int v4; // [rsp+30h] [rbp-78h] BYREF
  __int128 v5; // [rsp+38h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  int *v8; // [rsp+80h] [rbp-28h]
  int v9; // [rsp+88h] [rbp-20h]
  int v10; // [rsp+8Ch] [rbp-1Ch]

  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v1 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v2 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      v3 = *(_DWORD *)(v1 + 44) == 0;
      v4 = v2;
      if ( (!v3 || *(_DWORD *)(v1 + 48) || v2 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&pDesc, L"LeaveCrit");
        v10 = 0;
        v8 = &v4;
        v9 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v1 + 28), 0LL, 4u, &pData);
      }
      *(_DWORD *)(v1 + 44) = 0;
      v5 = 0uLL;
      *(_OWORD *)(v1 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
