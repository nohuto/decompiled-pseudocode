/*
 * XREFs of WinMain @ 0x14002C0BC
 * Callers:
 *     __scrt_common_main_seh @ 0x140015CE0 (__scrt_common_main_seh.c)
 * Callees:
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x14002ACE4 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B798 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     McGenEventRegister @ 0x14002BD48 (McGenEventRegister.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x14002BEA0 (WPP_SF_S.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140040D1C (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 *v6; // rbx
  void **v7; // rdi
  void *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  const unsigned __int16 *CommandLineW; // rax
  int *v17; // r8
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  LPVOID Context[2]; // [rsp+40h] [rbp-28h] BYREF

  byte_140085FD0 = 0;
  qword_140086368 = 0LL;
  v6 = &WPP_MAIN_CB;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v7 = (void **)&WPP_REGISTRATION_GUIDS;
  WPP_MAIN_CB = 0LL;
  qword_140086370 = 1LL;
  do
  {
    v8 = *v7;
    Context[0] = v8;
    ++v7;
    Context[1] = 0LL;
    v6[4] = (__int64)v8;
    EtwRegisterTraceGuidsW(WppControlCallback, v6, v8);
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, lpCmdLine);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  McGenEventRegister(v12, v11, v13, v14);
  if ( gMaxSize )
  {
    v15 = -2147023649;
  }
  else
  {
    gInitialSize = 0x200000LL;
    gMinSize = 4LL;
    gMaxSize = 0x8000LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, Context) )
    {
      if ( ATL::CAtlBaseModule::m_bInitFailed )
      {
        v15 = -1;
      }
      else
      {
        v15 = 0;
        CommandLineW = GetCommandLineW();
        if ( CAudioDGModule::ParseCommandLine((wil::details **)&_AtlModule, CommandLineW, v17) == 1 )
          v15 = ATL::CAtlExeModuleT<CAudioDGModule>::Run((CAudioDGModule *)&_AtlModule, nShowCmd);
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x19u,
          (__int64)&WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids,
          v15);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v15 = -2147024882;
    }
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v18 )
    {
      v19 = v18[1];
      if ( v19 )
      {
        EtwUnregisterTraceGuids(v19);
        v18[1] = 0LL;
      }
      v18 = (_QWORD *)*v18;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v15;
}
