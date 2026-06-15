/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180012250
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18001EB00 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800123E0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001EE3C (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(const wchar_t **this)
{
  int v2; // edx
  _UNKNOWN **v3; // rcx
  int started; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 108) )
  {
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, this[3]);
      v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 145) = 0;
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 147) = 1;
    *((_DWORD *)this + 141) = 2;
    *((_DWORD *)this + 142) = 1;
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 144) = 1;
    *((_DWORD *)this + 145) = 2;
    *((_DWORD *)this + 146) = 1;
    *((_DWORD *)this + 147) = 2;
    started = CApplication::StartGoodFaithPLMExemptionTimer((CApplication *)this, v2);
    if ( started >= 0 )
    {
      *((_DWORD *)this + 108) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)this, 0xA3u, 0);
      goto LABEL_15;
    }
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x40000000) != 0 && *((_BYTE *)v3 + 25) >= 2u )
    WPP_SF_d((TRACEHANDLE)v3[2], 0x12u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids, started);
  AudPolicyLogError("CApplication::GrantGoodFaithPLMExemption", 1274, started);
LABEL_15:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)started;
}
