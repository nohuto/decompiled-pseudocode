/*
 * XREFs of ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180020E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800137D8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001EE3C (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnBCMStartupGracePeriodExpired(CApplicationManager *this, const wchar_t ***a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const wchar_t **v5; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v5[3]);
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(v5);
  CApplicationManager::ApplyPBMPolicy(this, (struct CApplication *)v5, 209, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
