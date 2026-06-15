/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001D020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_Sis @ 0x1800183FC (WPP_SF_Sis.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B29C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2,
        __int64 a3)
{
  BOOL v5; // r14d
  struct CApplication *v6; // rbp
  const char *v7; // rax
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  const unsigned __int16 *v11; // rsi
  int Application; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // [rsp+90h] [rbp+8h] BYREF
  struct CApplication *v19; // [rsp+98h] [rbp+10h] BYREF
  char *v20; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *((_DWORD *)a2 + 3) )
      v7 = "HAC_INTERACTIVE";
    WPP_SF_Sis(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, a3, *(const wchar_t **)a2, *((_QWORD *)a2 + 2), v7);
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_QWORD *)a2 + 2);
  v11 = *(const unsigned __int16 **)a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v20 = (char *)this + 32;
  v18 = 0;
  Application = CApplicationManager::GetApplication(this, v11, v10, v9, &v19, 1, &v18);
  if ( Application >= 0 )
  {
    v6 = v19;
    v13 = *((_DWORD *)v19 + 52);
    if ( v8 )
      v14 = v13 | 4;
    else
      v14 = v13 & 0xFFFFFFFB;
    *((_DWORD *)v19 + 52) = v14;
    v15 = (v13 & 6) != 0;
    v16 = (v14 & 6) != 0;
    Application = 0;
    v5 = v18 || v15 != v16;
  }
  if ( this != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnHostedAppStateChanged", 2813, Application);
  }
  else if ( v5 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  return (unsigned int)Application;
}
