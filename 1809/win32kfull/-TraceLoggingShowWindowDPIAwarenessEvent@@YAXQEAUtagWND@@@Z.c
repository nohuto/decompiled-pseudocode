/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0117ADC
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0117C10 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 i; // rdx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v6 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    if ( (v6 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v1) + 328); i; i = *(_QWORD *)(i + 664) )
      {
        if ( (**(_DWORD **)(i + 480) & 0x20000000) != 0 )
        {
          v6 = 128;
          break;
        }
      }
    }
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v11 = 0;
        v9 = &v6;
        v10 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D44F3, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
