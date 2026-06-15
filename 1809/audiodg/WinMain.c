/*
 * XREFs of WinMain @ 0x140014070
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BA90 (__scrt_common_main_seh.c)
 * Callees:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140013FDC (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     McGenEventRegister @ 0x1400141D8 (McGenEventRegister.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_S @ 0x140032878 (WPP_SF_S.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140043B18 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 *v6; // rbx
  void **v7; // rdi
  void *v8; // r8
  unsigned int v9; // eax
  int v10; // edi
  _QWORD *v11; // rbx
  LPVOID Context[2]; // [rsp+40h] [rbp-28h] BYREF

  byte_140088E80 = 0;
  qword_140088FD8 = 0LL;
  v6 = &WPP_MAIN_CB;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v7 = (void **)&WPP_REGISTRATION_GUIDS;
  WPP_MAIN_CB = 0LL;
  qword_140088FE0 = 1LL;
  do
  {
    v8 = *v7;
    Context[0] = v8;
    ++v7;
    Context[1] = 0LL;
    v6[4] = (__int64)v8;
    EtwRegisterTraceGuidsW(WppControlCallback, v6, v8, 1LL);
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids,
      lpCmdLine,
      (unsigned int)Context,
      0);
  }
  HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  McGenEventRegister();
  if ( gMaxSize )
  {
    v10 = -2147023649;
  }
  else
  {
    gInitialSize = 0x200000LL;
    gMinSize = 4LL;
    gMaxSize = 0x8000LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, Context) )
    {
      v9 = ATL::CAtlExeModuleT<CAudioDGModule>::WinMain((CAudioDGModule *)&_AtlModule, nShowCmd);
      v10 = v9;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids, v9);
      }
      AERTMemoryShutdown();
    }
    else
    {
      v10 = -2147024882;
    }
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v11 )
    {
      if ( v11[1] )
      {
        EtwUnregisterTraceGuids();
        v11[1] = 0LL;
      }
      v11 = (_QWORD *)*v11;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v10;
}
