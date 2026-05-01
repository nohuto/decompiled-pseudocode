/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18000518C
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800053CC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180001784 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000281C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180004ECC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     __security_check_cookie @ 0x180005E60 (__security_check_cookie.c)
 *     memset_0 @ 0x180006716 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180006750 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  int v9; // ebx
  int v10; // ecx
  unsigned __int16 *v11; // rdx
  wil::details::in1diag3 *v12; // rcx
  const struct wil::FailureInfo *v13; // r9
  BOOL IsDebuggerPresent; // ecx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+24h] [rbp-DCh]
  signed __int32 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h]
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-C0h]
  const char *v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  _BYTE v24[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  const char *ModuleName; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char v31[1024]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR OutputString[2048]; // [rsp+4B0h] [rbp+3B0h] BYREF

  OutputString[0] = 0;
  v31[0] = 0;
  v9 = wil::details::RecordReturn((wil::details *)a8);
  v16 = v10;
  v15 = 1;
  v18 = 0LL;
  v17 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v22 = 14;
  CurrentThreadId = GetCurrentThreadId();
  v23 = v9;
  v21 = "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp";
  v20 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v29 = a6;
  v30 = a1;
  memset_0(v24, 0, sizeof(v24));
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure((struct wil::FailureInfo *)&v15, v31, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)&v15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback((const struct wil::FailureInfo *)&v15);
  if ( v16 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v12);
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = wil::g_pfnIsDebuggerPresent()),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v15, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, v11, (__int64)&v15, v13);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v15, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
