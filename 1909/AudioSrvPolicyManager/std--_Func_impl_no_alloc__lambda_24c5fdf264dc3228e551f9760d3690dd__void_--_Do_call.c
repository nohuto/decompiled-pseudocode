/*
 * XREFs of std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Do_call @ 0x180007DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x18000D944 (WPP_SF_Sd.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x1800109CC (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191C0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1E4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r14
  CApplicationManager *v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // rdi
  BOOL v6; // r15d

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_BYTE *)(a1 + 16);
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = *(struct CApplication **)(v1 + 256);
  if ( v5
    || (CApplicationManager::Register(v3, (struct CProcess *)v1), (v5 = *(struct CApplication **)(v1 + 256)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), v2);
    }
    v6 = *((_DWORD *)v5 + 52) != 0;
    if ( !*(_DWORD *)(v1 + 448) )
    {
      if ( v2 )
        ++*(_DWORD *)(v1 + 548);
      else
        --*(_DWORD *)(v1 + 548);
      if ( *(int *)(v1 + 548) >= 0 )
        CApplication::DialogSessionStateChanged(*(CApplication **)(v1 + 256), v2 != 0 ? 1 : -1);
      else
        *(_DWORD *)(v1 + 548) = 0;
    }
    if ( v6 != (*((_DWORD *)v5 + 52) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(v3, v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
