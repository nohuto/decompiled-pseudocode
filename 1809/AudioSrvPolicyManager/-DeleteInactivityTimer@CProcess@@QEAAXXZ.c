/*
 * XREFs of ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180016384
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002B680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18002C370 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::DeleteInactivityTimer(CProcess *this)
{
  __int64 v2; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v4; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 352);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 49) )
  {
    v2 = *((_QWORD *)this + 49);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        &WPP_27554cd5659639419dce4f92de6452d1_Traceguids,
        *((_DWORD *)this + 48));
      v2 = *((_QWORD *)this + 49);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v2,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 49),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 49));
    *((_QWORD *)this + 49) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
      (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
    }
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
