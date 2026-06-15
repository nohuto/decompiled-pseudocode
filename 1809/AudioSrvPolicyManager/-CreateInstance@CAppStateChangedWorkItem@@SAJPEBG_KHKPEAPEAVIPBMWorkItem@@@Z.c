/*
 * XREFs of ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x18002C020
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020EE4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019274 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAppStateChangedWorkItem::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        int a4,
        struct IPBMWorkItem **a5)
{
  HANDLE ProcessHeap; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  LPVOID v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r9
  int v15; // eax
  void *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v12 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  if ( v12 )
  {
    *(_QWORD *)v12 = &CAppStateChangedWorkItem::`vftable';
    *((_QWORD *)v12 + 1) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    *((_DWORD *)v12 + 4) = a3;
    *((_DWORD *)v12 + 5) = a4;
    v14 = -1LL;
    *((_QWORD *)v12 + 3) = a2;
    do
      ++v14;
    while ( a1[v14] );
    v15 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v14, v18, (unsigned __int16 **)v12 + 1);
    v13 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v15);
      }
      AudPolicyLogError("CAppStateChangedWorkItem::Initialize", 536, v13);
    }
    if ( v13 >= 0 )
    {
      *a5 = (struct IPBMWorkItem *)v12;
      v12 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v12 )
  {
    v16 = (void *)*((_QWORD *)v12 + 1);
    *(_QWORD *)v12 = &CAppStateChangedWorkItem::`vftable';
    if ( v16 )
    {
      CoTaskMemFree(v16);
      *((_QWORD *)v12 + 1) = 0LL;
    }
    *(_QWORD *)v12 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v12, (const struct std::nothrow_t *)0x20);
  }
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v13);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::CreateInstance", 516, v13);
  }
  return (unsigned int)v13;
}
