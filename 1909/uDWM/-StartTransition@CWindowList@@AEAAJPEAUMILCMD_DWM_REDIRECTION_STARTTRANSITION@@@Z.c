/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002EFE4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18000BFD8 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002EF74 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 */

__int64 __fastcall CWindowList::StartTransition(CWindowList *this, struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *a2)
{
  __int64 v3; // rcx
  const struct _GUID *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v3, &UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
  v5 = *((_QWORD *)a2 + 1);
  if ( !v5 )
    v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v4 = (const struct _GUID *)((char *)a2 + 8);
    CWindowList::BeginTelemetryScenario(
      (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)((char *)a2 + 8),
      (const struct _GUID *)((char *)a2 + 8),
      *((_QWORD *)a2 + 5));
  }
  v6 = CAnimationScheduler::OnBeginTransitionRequest(
         *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
         *((_DWORD *)a2 + 1),
         v4,
         (struct _GUID *)((char *)a2 + 24));
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11AAu, v9);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v7;
}
