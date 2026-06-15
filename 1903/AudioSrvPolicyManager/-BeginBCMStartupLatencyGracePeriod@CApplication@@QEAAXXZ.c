/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180010414
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1D4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x1800087C4 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000EF38 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000FBEC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800101A4 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800105BC (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(const wchar_t **this)
{
  signed int v2; // edi
  __int64 v3; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+64h] [rbp+Ch]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 55);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupBCMStartupLatencyGracePeriod((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, this[3]);
  }
  if ( this[60]
    || (v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::BCMStartupGracePeriodExpiredCallback,
               this),
        (this[60] = (const wchar_t *)v3) != 0LL) )
  {
    v7 = -100000000;
    v8 = -1;
    *((_DWORD *)this + 122) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
      CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)this);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[60],
      &v7,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v2);
    }
    AudPolicyLogError("CApplication::BeginBCMStartupLatencyGracePeriod", 2302, v2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
