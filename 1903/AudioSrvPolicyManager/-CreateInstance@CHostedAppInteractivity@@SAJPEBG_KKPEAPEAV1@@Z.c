/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001F244
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001F0FC (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001F4AC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  int v11; // edi

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    v9[2] = -1;
    v9[3] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v10[2] = a3;
    *((_QWORD *)v10 + 2) = a2;
    v11 = CoAllocString(a1, (unsigned __int16 **)v10);
    if ( v11 >= 0 )
    {
      *a4 = (struct CHostedAppInteractivity *)v10;
      v10 = 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      CoTaskMemFree(*(LPVOID *)v10);
      *(_QWORD *)v10 = 0LL;
    }
    operator delete(v10, (const struct std::nothrow_t *)0x18);
  }
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, v11);
    }
    AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 322, v11);
  }
  return (unsigned int)v11;
}
