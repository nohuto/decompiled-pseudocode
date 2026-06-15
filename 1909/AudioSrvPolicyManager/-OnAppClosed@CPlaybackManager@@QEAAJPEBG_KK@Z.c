/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18002006C
 * Callers:
 *     PbmReportAppClosing @ 0x1800204C0 (PbmReportAppClosing.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  LPVOID v5; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rdi
  int v10; // ebx
  int v11; // eax

  v5 = 0LL;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    *(_QWORD *)v9 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 4) = a4;
    v10 = 0;
    *((_QWORD *)v9 + 3) = a3;
    if ( a2 )
    {
      v11 = CoAllocString(a2, (unsigned __int16 **)v9 + 1);
      v10 = v11;
      if ( v11 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v11);
        }
        AudPolicyLogError("CAppClosedWorkItem::Initialize", 881, v10);
      }
    }
    if ( v10 >= 0 )
    {
      v5 = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v10 >= 0 )
      v5 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v10);
    }
    AudPolicyLogError("CAppClosedWorkItem::CreateInstance", 856, v10);
  }
  if ( v5 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_1f870d16066833bfd0de78f1b1f0ec8d_Traceguids, v10);
    }
    AudPolicyLogError("CPlaybackManager::OnAppClosed", 252, v10);
  }
  return (unsigned int)v10;
}
