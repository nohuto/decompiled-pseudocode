/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1800778A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_36e878146ca460f5691af832288ddb88___ @ 0x18008EED0 (Windows--Internal--ComTaskPool--QueueTask__lambda_36e878146ca460f5691af832288ddb88___.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V?$ComPtr@UIHolographicViewTransitionNotification@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18008F370 (--1Iterator@-$ObjectArrayAdapterImpl@UIHolographicViewTransitionNotification@@V-$ComPtr@UIHologr.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 68);
  if ( v2 )
  {
    v3 = *v2;
    *(_QWORD *)v6 = a2;
    v7 = v2;
    (*(void (__fastcall **)(_QWORD *, HWND))(v3 + 8))(v2, a2);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_36e878146ca460f5691af832288ddb88___(v4, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1016,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    details::ObjectArrayAdapterImpl<IHolographicViewTransitionNotification,Microsoft::WRL::ComPtr<IHolographicViewTransitionNotification>>::Iterator::~Iterator(v6);
  }
}
