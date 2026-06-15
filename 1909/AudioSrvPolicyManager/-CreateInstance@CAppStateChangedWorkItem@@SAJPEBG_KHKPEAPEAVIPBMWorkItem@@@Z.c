/*
 * XREFs of ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180028AC0
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001DE44 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAppStateChangedWorkItem::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        int a4,
        struct IPBMWorkItem **a5)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi
  int v13; // eax
  void *v14; // rcx

  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v11 = v10;
  if ( v10 )
  {
    v10[1] = 0LL;
    *v10 = &CAppStateChangedWorkItem::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a3;
    *((_DWORD *)v11 + 5) = a4;
    v11[3] = a2;
    v13 = CoAllocString(a1, (unsigned __int16 **)v11 + 1);
    v12 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v13);
      }
      AudPolicyLogError("CAppStateChangedWorkItem::Initialize", 536, v12);
    }
    if ( v12 >= 0 )
    {
      *a5 = (struct IPBMWorkItem *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
  {
    v14 = (void *)v11[1];
    *v11 = &CAppStateChangedWorkItem::`vftable';
    if ( v14 )
    {
      CoTaskMemFree(v14);
      v11[1] = 0LL;
    }
    *v11 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v12);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::CreateInstance", 516, v12);
  }
  return (unsigned int)v12;
}
