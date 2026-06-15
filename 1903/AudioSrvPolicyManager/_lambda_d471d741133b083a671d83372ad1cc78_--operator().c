/*
 * XREFs of _lambda_d471d741133b083a671d83372ad1cc78_::operator() @ 0x180026924
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x1800268D0 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x18001E7A4 (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d471d741133b083a671d83372ad1cc78_::operator()(__int64 a1)
{
  DWORD v1; // r15d
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  struct TSSession *v7; // r13
  _DWORD *v8; // rdi
  int v9; // r12d
  int v10; // r14d
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r9
  const char *v13; // rdx
  __int64 v14; // rax
  DWORD *v15; // rax
  __int64 v16; // rcx
  DWORD *v17; // rdi
  int v18; // eax
  struct TSSession *v20; // [rsp+38h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+40h] [rbp-31h]
  __int64 v22; // [rsp+48h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+80h] [rbp+Fh]
  int v26; // [rsp+84h] [rbp+13h]
  _DWORD *v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22 = -2LL;
  v1 = **(_DWORD **)a1;
  v2 = **(_QWORD **)(a1 + 8);
  v20 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v3;
  if ( *(_DWORD *)(v2 + 16) != 4 )
    goto LABEL_5;
  v4 = *(_QWORD *)v2 - *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1;
  if ( *(_QWORD *)v2 == *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1 )
    v4 = *(_QWORD *)(v2 + 8) - *(_QWORD *)GUID_CONSOLE_LOCKED.Data4;
  if ( !v4 )
  {
    v6 = TsSessionFromSessionId(v1, 0, 0LL, &v20);
    if ( v6 )
    {
      v5 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x953,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             (const char *)v6);
    }
    else
    {
      v7 = v20;
      v8 = (_DWORD *)((char *)v20 + 232);
      v9 = *((_DWORD *)v20 + 58);
      v10 = *(_BYTE *)(v2 + 20) != 0;
      *((_DWORD *)v20 + 58) = v10;
      v11 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v11 > 4u )
      {
        v13 = "Locked Unchanged";
        if ( v9 != v10 )
          v13 = "Locked Changed";
        v14 = -1LL;
        do
          ++v14;
        while ( v13[v14] );
        v24 = v13;
        v25 = v14 + 1;
        v26 = 0;
        v27 = v8;
        v28 = 4LL;
        TlgWrite(v11, &unk_180042DB8, 0LL, v12, 4u, &pData);
      }
      if ( v9 != v10
        && (*((_DWORD *)v7 + 57) || g_bLowPowerEpoch || !*v8 || g_bApmSuspended)
        && ((v15 = (DWORD *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow),
             v17 = v15,
             (v21 = (struct _RTL_CRITICAL_SECTION *)v15) == 0LL)
          ? (v17 = 0LL)
          : (DWORD *)(*v15 = v1),
            v17
         && (v18 = QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v16, (__int64)v17),
             v5 = v18,
             v18 < 0)) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x953,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v18);
        operator delete(v17, (const struct std::nothrow_t *)4);
      }
      else
      {
        v5 = 0;
      }
    }
  }
  else
  {
LABEL_5:
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x953,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
