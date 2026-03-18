/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140007618
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1400079B4 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x140001770 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     memset_0 @ 0x1400040EC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140007080 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x140007960 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x14000797C (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x140007998 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140007B74 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140008394 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        __int64 a10,
        WCHAR *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  const char *ModuleName; // rbp
  unsigned int v18; // edi
  int v19; // r14d
  int v20; // eax
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v23; // rcx
  const struct wil::FailureInfo *v24; // r9
  void (*v25)(struct wil::FailureInfo *, char *, unsigned __int64); // rax
  int v27; // [rsp+88h] [rbp+10h]

  v27 = a2;
  ModuleName = 0LL;
  v18 = a8;
  v19 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = wil::details::RecordException((wil::details *)a8, a2);
      goto LABEL_11;
    case 1:
      v20 = wil::details::RecordReturn((wil::details *)a8, a2);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v18 = -2147024228;
        wil::details::ReportFailure_Hr(a1, a2);
      }
      v20 = wil::details::RecordLog((wil::details *)v18, a2);
      goto LABEL_11;
    case 3:
      v20 = wil::details::RecordFailFast((wil::details *)a8);
LABEL_11:
      v19 = v20;
      break;
  }
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v18;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_DWORD *)(a15 + 56) = v27;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  *(_DWORD *)(a15 + 60) = v19;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset_0((void *)(a15 + 72), 0, 0x30uLL);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  v25 = wil::details::g_pfnGetContextAndNotifyFailure;
  *(_QWORD *)(a15 + 120) = ModuleName;
  if ( v25 )
    ((void (__fastcall *)(unsigned __int64, _BYTE *, __int64))v25)(a15, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback((const struct wil::FailureInfo *)a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v23);
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( wil::g_fIsDebuggerPresent )
    goto LABEL_30;
  if ( wil::g_pfnIsDebuggerPresent )
  {
    if ( wil::g_pfnIsDebuggerPresent() )
      goto LABEL_30;
  }
  else if ( IsDebuggerPresent() )
  {
LABEL_30:
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v24);
    OutputDebugStringW(lpOutputString);
    goto LABEL_36;
  }
  if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
    g_pfnResultLoggingCallback(a15, 0LL, 0LL);
LABEL_36:
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
