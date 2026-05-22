/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800110A4
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180010FC8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18000A298 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x18000E070 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180010F78 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18004F5A4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180050778 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x18005091C (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180052660 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  int v16; // edx
  unsigned int v18; // edi
  int v20; // ebp
  int v21; // eax
  _WORD *v22; // rax
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v24; // rcx
  const struct wil::FailureInfo *v25; // r9
  const char *ModuleName; // rax
  BOOL IsDebuggerPresent; // eax

  v16 = 0;
  v18 = a8;
  v20 = 0;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v21 = wil::details::RecordReturn((wil::details *)a8);
        break;
      case 2:
        if ( (a8 & 0x80000000) == 0 )
        {
          v18 = -2147024228;
          wil::details::ReportFailure_Hr(a1, a2, a3, a4, a5, a6);
        }
        v21 = wil::details::RecordLog((wil::details *)v18, v16);
        break;
      case 3:
        v21 = wil::details::RecordFailFast((wil::details *)a8);
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    v21 = wil::details::RecordException((wil::details *)a8, 0);
  }
  v20 = v21;
LABEL_5:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v18;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v22 = a9;
  if ( !a9 || !*a9 )
    v22 = 0LL;
  *(_QWORD *)(a15 + 16) = v22;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  *(_DWORD *)(a15 + 56) = a2;
  *(_DWORD *)(a15 + 60) = v20;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset_0((void *)(a15 + 72), 0, 0x30uLL);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  else
    ModuleName = 0LL;
  *(_QWORD *)(a15 + 120) = ModuleName;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure((struct wil::FailureInfo *)a15, a13, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback((const struct wil::FailureInfo *)a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v24);
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( wil::g_fIsDebuggerPresent )
    goto LABEL_40;
  if ( wil::g_pfnIsDebuggerPresent )
  {
    IsDebuggerPresent = wil::g_pfnIsDebuggerPresent();
  }
  else
  {
    if ( ::IsDebuggerPresent() )
      goto LABEL_40;
    IsDebuggerPresent = 0;
  }
  if ( !IsDebuggerPresent )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_40:
  if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
    g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
  if ( !*(_WORD *)lpOutputString )
    wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v25);
  OutputDebugStringW((LPCWSTR)lpOutputString);
LABEL_22:
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
