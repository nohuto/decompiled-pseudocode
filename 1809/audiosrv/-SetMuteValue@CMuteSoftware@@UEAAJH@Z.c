/*
 * XREFs of ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800B6860
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMuteSoftware::SetMuteValue(CMuteSoftware *this, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+74h] [rbp+Ch]
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
      this,
      a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)this + 6) = a2;
  v6 = *((_QWORD *)this + 6);
  if ( !v6 )
    goto LABEL_13;
  v14 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v14);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::SetMuteValue", 887, v4);
  }
  else
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
        this);
    }
    *((_BYTE *)this + 104) = 1;
    v12 = -10000000;
    v13 = -1;
    if ( ThreadPool )
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 12),
        &v12,
        0LL,
        0);
  }
  if ( v11 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v11 = 0;
  }
  return (unsigned int)v4;
}
