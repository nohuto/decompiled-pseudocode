/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD **a2,
        struct _TP_TIMER *a3)
{
  int v4; // ebx
  _QWORD *v5; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, struct _TP_TIMER *))(*a2[68] + 16LL))(a2[68], a2, a3);
  if ( v4 < 0 )
  {
    v5 = a2[68];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  a2[68] = 0LL;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v4);
    }
    AudPolicyLogError("CApplication::DelayedInteractivityNotificationTimerExpiredCallback", 1604, v4);
  }
}
