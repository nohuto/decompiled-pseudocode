/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18002A390
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180008980 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180008164 (WPP_SF_.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x18002185C (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnLowPowerEpochStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rsi
  _QWORD *v1; // rax
  _DWORD *v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rdi

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v1 = qword_18004FCF8;
  while ( v1 )
  {
    v2 = (_DWORD *)v1[2];
    v1 = (_QWORD *)*v1;
    if ( *v2 && v2[84] )
    {
      if ( v2[57] || g_bLowPowerEpoch || !v2[58] || g_bApmSuspended )
      {
        ProcessHeap = GetProcessHeap();
        v5 = HeapAlloc(ProcessHeap, 0, 4uLL);
        if ( v5 )
          *v5 = *v2;
        else
          v5 = 0LL;
        if ( v5 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v4, (__int64)v5) < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids);
          }
          operator delete(v5, (const struct std::nothrow_t *)4);
        }
      }
      break;
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
}
