/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800123E0
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180012250 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(const wchar_t **this)
{
  signed int v2; // ebx
  __int64 v3; // rdx
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+64h] [rbp+Ch]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 48);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, this[3]);
  }
  if ( !this[53] )
  {
    v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    this[53] = (const wchar_t *)v3;
    if ( v3 )
    {
      v8 = -200000000;
      v9 = -1;
      *((_DWORD *)this + 109) = 1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v3,
        &v8,
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
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, v2);
      }
      AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1314, v2);
    }
  }
  if ( v7 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v7 = 0;
  }
  return (unsigned int)v2;
}
