/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00BC9A4
 * Callers:
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00BFD6C (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v5; // r8
  __int64 i; // rdx
  GUID pRelatedActivityId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    pRelatedActivityId.Data1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5)
                                                                                                + 288LL));
    if ( (pRelatedActivityId.Data1 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v1) + 320); i; i = *(_QWORD *)(i + 656) )
      {
        if ( (**(_DWORD **)(i + 472) & 0x20000000) != 0 )
        {
          pRelatedActivityId.Data1 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)hProvider > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v12 = 0;
        p_pRelatedActivityId = &pRelatedActivityId;
        v11 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2DF9, v5, &pRelatedActivityId, 4u, &pData);
      }
    }
  }
}
