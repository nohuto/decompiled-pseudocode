/*
 * XREFs of ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008CEAC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18009FAA8 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 */

__int64 __fastcall CWindowList::TransitionBitmap(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *a2,
        const struct _REMOTE_PORT_VIEW *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(_QWORD *)((char *)a2 + 4);
  v6 = -2147467259;
  if ( v5 )
  {
    v7 = 0;
    if ( *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) >= 0 )
      v7 = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
    if ( v7 > 0 )
    {
      v8 = 0;
      if ( *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13) >= 0 )
        v8 = *((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13);
      if ( v8 > 0 )
      {
        if ( a3->ViewSize )
        {
          if ( a3->ViewBase )
          {
            v9 = CTransitionVisualController::RegisterTransitionBitmap(
                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31),
                   v5,
                   *((unsigned int *)a2 + 3));
            v6 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1187u);
          }
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v6;
}
