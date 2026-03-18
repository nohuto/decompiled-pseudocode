/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E9454
 * Callers:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00E95A0 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 i; // rdx
  int v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v8 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    if ( (v8 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2, v1) + 320); i; i = *(_QWORD *)(i + 656) )
      {
        if ( (**(_DWORD **)(i + 472) & 0x20000000) != 0 )
        {
          v8 = 128;
          break;
        }
      }
    }
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v13 = 0;
        v11 = &v9;
        v9 = 50331648LL;
        v12 = 8;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4, v3);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v17 = 0;
        v15 = &v8;
        v16 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5F8A, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
