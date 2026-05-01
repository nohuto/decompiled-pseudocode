/*
 * XREFs of ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091DA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008E008 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180090EE8 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804131E4 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewShown(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  char *v2; // rdi
  const struct _TlgProvider_t *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (char *)this - 48;
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
    1u);
  v5 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
    TlgWrite(v5, &unk_1804C4F43, 0LL, 0LL, 2u, &pData);
  v6 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (char *)this + 224,
         *((unsigned int *)this + 54),
         ((unsigned __int64)this - 40) & -(__int64)(v2 != 0LL),
         *((_QWORD *)a2 + 3));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v6);
  v7 = *((_QWORD *)this + 40);
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v7 + 56LL))(v7, a2);
  v8 = CExperienceManagerAnimationHelper::End((CBaseTrayFlyoutExperienceManager *)((char *)this + 240));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
