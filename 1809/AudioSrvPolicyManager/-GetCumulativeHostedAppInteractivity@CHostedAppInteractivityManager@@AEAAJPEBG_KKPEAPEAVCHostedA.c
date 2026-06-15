/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180022DFC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180022CB0 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x1800186B8 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180022B84 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CHostedAppInteractivity **a5)
{
  int Instance; // ebx
  _QWORD *v6; // r10
  struct CHostedAppInteractivity *v7; // rcx
  LPVOID *v8; // rdi
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  struct CHostedAppInteractivity *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h]

  v11[1] = (struct CHostedAppInteractivity *)-2LL;
  Instance = 0;
  v11[0] = 0LL;
  v6 = (_QWORD *)qword_18004FD38;
  while ( v6 )
  {
    v7 = (struct CHostedAppInteractivity *)v6[2];
    v6 = (_QWORD *)*v6;
    v11[0] = v7;
    if ( *((_DWORD *)v7 + 2) == a4 && *((_QWORD *)v7 + 2) == a3 )
      goto LABEL_9;
  }
  Instance = CHostedAppInteractivity::CreateInstance(a2, a3, a4, v11);
  if ( Instance < 0 )
    goto LABEL_10;
  try
  {
    Instance = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_18004FD38,
      v11);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *(_DWORD *)v10;
    Instance = *(_DWORD *)v10;
    if ( v13 >= 0 )
      goto LABEL_8;
LABEL_10:
    v8 = (LPVOID *)v11[0];
LABEL_11:
    if ( v8 )
    {
      if ( *v8 )
      {
        CoTaskMemFree(*v8);
        *v8 = 0LL;
      }
      operator delete(v8, (const struct std::nothrow_t *)0x18);
    }
    if ( Instance < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids, Instance);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 457, Instance);
    }
    result = (unsigned int)Instance;
  }
LABEL_8:
  v7 = v11[0];
LABEL_9:
  *a5 = v7;
  v8 = 0LL;
  goto LABEL_11;
}
