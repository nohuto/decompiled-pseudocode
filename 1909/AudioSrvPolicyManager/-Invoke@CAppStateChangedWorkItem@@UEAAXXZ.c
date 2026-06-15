/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_Sd @ 0x18000D944 (WPP_SF_Sd.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000E4FC (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B29C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(const wchar_t **this)
{
  BOOL v2; // r14d
  struct CApplication *v3; // r15
  unsigned int v4; // ebp
  int v5; // r13d
  unsigned __int64 v6; // rbx
  const unsigned __int16 *v7; // rdi
  CApplicationManager *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // r12
  int Application; // ebx
  int v11; // [rsp+A0h] [rbp+8h] BYREF
  int v12; // [rsp+A8h] [rbp+10h] BYREF
  CApplication *v13; // [rsp+B0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v3 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
      this[1],
      *((_DWORD *)this + 4));
  }
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 4);
  v6 = (unsigned __int64)this[3];
  v7 = this[1];
  v8 = g_ApplicationManager;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v9;
  v11 = 0;
  v12 = 0;
  Application = CApplicationManager::GetApplication(v8, v7, v6, v4, &v13, 1, &v11);
  if ( Application >= 0 )
  {
    v3 = v13;
    CApplication::UpdateAppState(v13, v5, &v12);
    v2 = v11 || v12;
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        Application);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::Invoke", 577, Application);
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
