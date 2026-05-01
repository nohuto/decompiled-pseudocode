/*
 * XREFs of ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800915A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008E008 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800906F8 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnSetForegroundFailed(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v4 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804C4F82, 0LL, 0LL, 2u, &pData);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v5 + 72LL))(v5, a2);
  CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  return 0LL;
}
