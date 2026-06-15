/*
 * XREFs of ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x180029184
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x180020520 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::CreateInstance(
        int a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 ***a4)
{
  HANDLE ProcessHeap; // rax
  unsigned __int16 **v9; // rax
  unsigned __int16 **v10; // rbx
  int v11; // edi
  int v12; // eax

  ProcessHeap = GetProcessHeap();
  v9 = (unsigned __int16 **)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    *v9 = (unsigned __int16 *)&CTransportControlRouterWorkItem::`vftable';
    *((_DWORD *)v9 + 2) = a1;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( a2 )
    {
      v12 = CoAllocString(a2, v10 + 2);
      v10[3] = a3;
      v11 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v12);
        }
        AudPolicyLogError("CTransportControlRouterWorkItem::Initialize", 806, v11);
      }
      if ( v11 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v11 = -2147467261;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
  {
    *v10 = (unsigned __int16 *)&WORKER_THREAD_EVENT::`vftable';
    operator delete(v10, (const struct std::nothrow_t *)0x20);
  }
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v11);
    }
    AudPolicyLogError("CTransportControlRouterWorkItem::CreateInstance", 780, v11);
  }
  return (unsigned int)v11;
}
