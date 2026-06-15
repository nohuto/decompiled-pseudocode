/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001E190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000FF60 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x1800184BC (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA1C (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // r8
  const char *v6; // rax
  int Application; // eax
  unsigned int v8; // esi
  int v9; // edx
  struct CApplication *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v15; // [rsp+50h] [rbp-38h]
  struct CApplication *v16; // [rsp+90h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+98h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = v4;
  v16 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = "PENDING_TERMINATION";
    if ( !*((_DWORD *)a2 + 3) )
      v6 = "LAUNCHED";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)"LAUNCHED", v5, *(const wchar_t **)a2, v6);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 2),
                  &v16,
                  0,
                  0LL);
  v8 = Application;
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Fu,
        &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnApplicationStateChanged", 3366, v8);
  }
  else
  {
    v9 = *((_DWORD *)a2 + 3);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = v16;
        if ( *((_DWORD *)v16 + 52) )
          CApplicationManager::OnApplicationClosed(
            this,
            *(unsigned __int16 **)a2,
            *((_QWORD *)v16 + 80),
            *((_DWORD *)a2 + 2));
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v10 + 32);
        v15 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v11 = (_QWORD *)*((_QWORD *)v10 + 9);
        while ( v11 )
        {
          v12 = v11[2];
          v11 = (_QWORD *)*v11;
          if ( !*(_DWORD *)(v12 + 448) )
            *(_DWORD *)(v12 + 448) = 1;
        }
        if ( v15 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v16);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8;
}
