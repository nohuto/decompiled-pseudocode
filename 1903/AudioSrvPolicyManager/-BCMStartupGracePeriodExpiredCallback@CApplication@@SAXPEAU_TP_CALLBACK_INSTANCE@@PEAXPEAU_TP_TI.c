/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180010730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x180015874 (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        void *a2,
        struct _TP_TIMER *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // edi

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v7 = v5;
  if ( v5 )
    *v5 = a2;
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = QueueApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>(v6, v7);
    if ( v8 >= 0 )
      v7 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  operator delete(v7, (const struct std::nothrow_t *)8);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v8);
    }
    AudPolicyLogError("CApplication::BCMStartupGracePeriodExpiredCallback", 2370, v8);
  }
}
