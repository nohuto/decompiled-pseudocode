/*
 * XREFs of ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191C0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Do_call @ 0x180007C80 (std--_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_::_Do_call @ 0x180007DD0 (std--_Func_impl_no_alloc__lambda_24c5fdf264dc3228e551f9760d3690dd__void_--_Do_call.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180018E58 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180018F3C (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180019018 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800190F4 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001CEA0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call @ 0x1800219D0 (std--_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000DFF8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B29C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001B6D0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001C88C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180025340 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct CProcess *a2)
{
  int Application; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct CApplication *v6; // r14
  int v8; // [rsp+80h] [rbp+8h] BYREF
  struct CApplication *v9; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+90h] [rbp+18h]

  Application = 0;
  v9 = 0LL;
  v8 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = v5;
  if ( !*((_QWORD *)a2 + 32) )
  {
    Application = CApplicationManager::GetApplication(
                    this,
                    *((const unsigned __int16 **)a2 + 26),
                    *((_QWORD *)a2 + 30),
                    *((_DWORD *)a2 + 49),
                    &v9,
                    1,
                    &v8);
    if ( Application < 0 || (v6 = v9, Application = CApplication::LinkProcess(v9, a2), Application < 0) )
    {
      if ( v8 )
        CApplicationManager::RemoveApplication(this, &v9);
    }
    else if ( (unsigned int)TsSessionIdIsMuted(*((_DWORD *)a2 + 49)) && !*((_DWORD *)v6 + 150) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(this, v6);
    }
    if ( Application < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x16u,
          &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids,
          Application);
      }
      AudPolicyLogError("CApplicationManager::Register", 851, Application);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)Application;
}
