/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180007810
 * Callers:
 *     <none>
 * Callees:
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800078B0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014220 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004DD74 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 */

__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  unsigned int *v5; // rdi
  int started; // eax
  int v8; // ebx
  __int64 v9; // rcx
  CWindowData *v10; // rdi
  CWindowData *i; // rbx
  bool v12; // r8
  char *v13; // rax
  void *v14; // [rsp+28h] [rbp-10h]
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    v4 = *((_DWORD *)a2 + 2);
    v5 = (unsigned int *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
    if ( v4 == v5[144] )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop);
      v5[144] = -1;
    }
    else if ( v4 == v5[145] )
    {
      if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
        McTemplateU0d(v9, &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info, v5[74]);
      v5[145] = -1;
    }
    else
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x646u, v14);
    }
  }
  else if ( *(_DWORD *)a2 == 5 )
  {
    v8 = *((_DWORD *)a2 + 3);
    v16 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v8 == 1 )
    {
      RestartKey = 0LL;
      while ( 1 )
      {
        v13 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        if ( !v13 )
          break;
        v10 = (CWindowData *)(v13 + 80);
        for ( i = (CWindowData *)*((_QWORD *)v13 + 10); i != v10; i = *(CWindowData **)i )
          CWindowData::ClearSnapshot(i, 1, v12, 1);
      }
      CDesktopManager::ReleaseCVICache();
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
    return 0;
  }
  else
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x64Fu, v14);
  }
  return v2;
}
