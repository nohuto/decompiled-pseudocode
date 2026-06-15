/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180016BA8
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800157CC (--1CProcess@@MEAA@XZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001BE40 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E234 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001EFC8 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  __int64 v4; // rdx
  char *v5; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 55) )
  {
    v4 = *((_QWORD *)this + 55);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        &WPP_27554cd5659639419dce4f92de6452d1_Traceguids,
        *((_DWORD *)this + 48));
      v4 = *((_QWORD *)this + 55);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      v4,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 55));
    *((_QWORD *)this + 55) = 0LL;
    if ( a2 )
    {
      v5 = (char *)*((_QWORD *)this + 23);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v5);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 23) = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
      (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
    }
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return 0LL;
}
