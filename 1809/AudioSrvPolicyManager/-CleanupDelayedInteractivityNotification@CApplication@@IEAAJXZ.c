/*
 * XREFs of ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001299C
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x180010FF0 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x180012814 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020EE4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupDelayedInteractivityNotification(CApplication *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v6; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 496);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 67) )
  {
    v2 = *((_QWORD *)this + 67);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        &WPP_27554cd5659639419dce4f92de6452d1_Traceguids,
        *((const wchar_t **)this + 3));
      v2 = *((_QWORD *)this + 67);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v2,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 67),
      1LL);
    v3 = *((_QWORD *)this + 68);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
    *((_QWORD *)this + 68) = 0LL;
  }
  if ( v6 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v6 = 0;
  }
  return 0LL;
}
