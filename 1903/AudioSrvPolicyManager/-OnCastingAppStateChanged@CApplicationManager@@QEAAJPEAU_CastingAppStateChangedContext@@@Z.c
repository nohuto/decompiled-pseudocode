/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001CE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800041BC (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x18000D974 (WPP_SF_Sd.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800107FC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1D4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rbx
  struct CApplication *v6; // rdi
  BOOL v7; // r15d
  int v8; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *(_QWORD *)a2;
  v6 = *(struct CApplication **)(*(_QWORD *)a2 + 256LL);
  if ( v6
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), (v6 = *(struct CApplication **)(v5 + 256)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
        *(const wchar_t **)(v5 + 208),
        *((_DWORD *)a2 + 2));
    }
    v7 = *((_DWORD *)v6 + 52) != 0;
    v8 = *((_DWORD *)a2 + 2);
    if ( !*(_DWORD *)(v5 + 448) )
    {
      if ( v8 )
        --*(_DWORD *)(v5 + 540);
      else
        ++*(_DWORD *)(v5 + 540);
      if ( *(int *)(v5 + 540) >= 0 )
      {
        CApplication::CastingStateChanged(*(CApplication **)(v5 + 256), v8 != 0 ? -1 : 1);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids);
        }
        *(_DWORD *)(v5 + 540) = 0;
      }
    }
    if ( v7 != (*((_DWORD *)v6 + 52) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
