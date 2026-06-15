/*
 * XREFs of ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002A4A0
 * Callers:
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000A8F0 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x18002185C (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnApmResumeSuspendStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rdi
  _QWORD *v1; // rax
  _DWORD *v2; // rsi
  _DWORD *v3; // rcx
  signed int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // r14
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v1 = qword_18004FCF8;
  v2 = 0LL;
  while ( v1 )
  {
    v3 = (_DWORD *)v1[2];
    v1 = (_QWORD *)*v1;
    if ( *v3 && v3[84] )
    {
      v2 = v3;
      break;
    }
  }
  v4 = (v2 == 0LL ? 0x490 : 0) | 0x80070000;
  if ( v2 )
    v4 = v2 == 0LL ? 0x490 : 0;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA74,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_10;
  }
  if ( v2[57] || g_bLowPowerEpoch || !v2[58] || g_bApmSuspended )
  {
    v6 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
      *v6 = *v2;
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v5, (__int64)v6);
      v4 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA74,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v7);
        operator delete(v6, (const struct std::nothrow_t *)4);
LABEL_10:
        if ( v0 )
          LeaveCriticalSection(v0);
        goto LABEL_25;
      }
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
  v4 = 0;
LABEL_25:
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA74,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
}
