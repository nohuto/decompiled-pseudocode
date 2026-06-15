/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001ECA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180008164 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001EF3C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001F91C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        CApplicationManager *this,
        struct _SESSIONMUTECHANGES *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _UNKNOWN **v5; // rcx
  int v6; // ebp
  _QWORD *v7; // rbx
  struct CApplication *v8; // rdx
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _DWORD *v11; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v6 = *((_DWORD *)a2 + 1);
  if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
  {
    WPP_SF_d((TRACEHANDLE)v5[2], 0x28u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v6);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    do
    {
      v8 = (struct CApplication *)v7[2];
      v7 = (_QWORD *)*v7;
      if ( *((_DWORD *)v8 + 53) == v6 )
        CApplicationManager::SilenceAndRevokePLMExemption(this, v8);
    }
    while ( v7 );
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v9 = *(_DWORD *)a2;
  if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    WPP_SF_d((TRACEHANDLE)v5[2], 0x29u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v9);
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v10 )
  {
    v11 = (_DWORD *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( v11[53] == v9 && !v11[149] )
    {
      v11[141] = 0;
      v11[142] = 0;
      v11[143] = 0;
      v11[144] = 0;
      v11[145] = 0;
      v11[146] = 0;
      v11[147] = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, v9, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
