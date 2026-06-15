/*
 * XREFs of ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x18002931C
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001F6A8 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HostedAppStateChangedContext::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        int a4,
        struct HostedAppStateChangedContext **a5)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi

  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v11 = v10;
  if ( v10 )
    *v10 = 0LL;
  else
    v11 = 0LL;
  if ( v11 )
  {
    *((_DWORD *)v11 + 2) = a3;
    *((_DWORD *)v11 + 3) = a4;
    v11[2] = a2;
    v12 = CoAllocString(a1, (unsigned __int16 **)v11);
    if ( v12 >= 0 )
    {
      *a5 = (struct HostedAppStateChangedContext *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
  {
    if ( *v11 )
    {
      CoTaskMemFree((LPVOID)*v11);
      *v11 = 0LL;
    }
    operator delete(v11, (const struct std::nothrow_t *)0x18);
  }
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids, v12);
    }
    AudPolicyLogError("HostedAppStateChangedContext::CreateInstance", 943, v12);
  }
  return (unsigned int)v12;
}
