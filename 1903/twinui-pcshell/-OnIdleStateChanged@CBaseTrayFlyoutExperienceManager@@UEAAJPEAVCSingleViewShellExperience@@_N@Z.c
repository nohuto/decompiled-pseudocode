/*
 * XREFs of ?OnIdleStateChanged@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180091300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnIdleStateChanged(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 40);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v2 + 96LL))(v2, a2);
  return 0LL;
}
