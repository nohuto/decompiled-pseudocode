/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000EB64
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E6E8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F320 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180013480 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int i; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  if ( !*((_DWORD *)this + 94) )
  {
    *((_DWORD *)this + 94) = 1;
    for ( i = *((_DWORD *)this + 95); i; i = *((_DWORD *)this + 95) )
    {
      *((_DWORD *)this + 95) = 0;
      LeaveCriticalSection(v2);
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      v7 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, i);
      }
      v4 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        CProcess::NotifyPLM(v5, i);
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      EnterCriticalSection(v2);
    }
    *((_DWORD *)this + 94) = 0;
  }
  LeaveCriticalSection(v2);
}
