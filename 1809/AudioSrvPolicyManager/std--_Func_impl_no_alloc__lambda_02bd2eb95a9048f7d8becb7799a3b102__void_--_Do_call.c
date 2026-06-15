/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call @ 0x180025330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180015F60 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C350 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call(__int64 a1)
{
  struct CProcess *v1; // rsi
  int v2; // ebp
  int v3; // r14d
  CApplicationManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx

  v1 = *(struct CProcess **)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = g_ApplicationManager;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = CApplicationManager::Register(v4, v1);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v6);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 800, v6);
  }
  else
  {
    CProcess::SetHasSmtcSubscription((__int64)v1 + 16, v3, v2);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
