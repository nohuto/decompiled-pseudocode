/*
 * XREFs of xxxProcessKeyEvent @ 0x1C01843C0
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C7E0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C8A0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015D940 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015DD10 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C015DFA0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A1DC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0183240 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C0183480 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x1C0183574 (ProcessKeyboardInjectedInput.c)
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0038A30 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C005B9DC (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0066910 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     UpdateRawKeyState @ 0x1C008A61C (UpdateRawKeyState.c)
 *     KEOEMProcs @ 0x1C00918C8 (KEOEMProcs.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00923C0 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleSonarKeyEvent @ 0x1C0092888 (ApiSetEditionHandleSonarKeyEvent.c)
 *     xxxKELocaleProcs @ 0x1C0092FD0 (xxxKELocaleProcs.c)
 *     xxxKENLSProcs @ 0x1C00954B0 (xxxKENLSProcs.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00A6090 (ApiSetEditionGetExecutionEvironment.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C0179164 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned __int8 v6; // si
  unsigned int v11; // edx
  __int16 v12; // r8
  void *v13; // rdi
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int *v16; // r14
  __int64 v17; // rbp
  char v18; // dl

  v6 = a1[2];
  if ( (unsigned __int16)((ApiSetEditionGetActiveHKL() & 0x3FF) - 17) <= 1u )
  {
    v12 = *((_WORD *)a1 + 1);
    if ( (v12 & 0x9000) == 0x8000
      && (unsigned __int8)(*a1 + 15) <= 1u
      && ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[(unsigned __int64)v6 >> 2]) == 0 )
    {
      *((_WORD *)a1 + 1) = v12 & 0x7FFF;
      goto LABEL_9;
    }
    v11 = v12 & 0x8000;
  }
  else
  {
    v11 = *((_WORD *)a1 + 1) & 0x8000;
  }
  UpdateRawKeyState(v6, v11);
LABEL_9:
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    v6 = (v6 - 160) / 2 + 16;
    UpdateRawKeyState(v6, *((_WORD *)a1 + 1) & 0x8000);
  }
  v13 = 0LL;
  v14 = a3 != 0 ? 8 : 0;
  if ( a5 )
    v15 = -(*(_DWORD *)(a5 + 500) & 1);
  else
    v15 = 0;
  if ( (v6 < 0xADu || v6 > 0xB3u) && !v15 )
    v14 |= 0x20u;
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0LL,
    0,
    v14);
  v16 = (unsigned int *)(a1 + 4);
  if ( !a3 || !*v16 )
    *v16 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  ApiSetEditionHandleSonarKeyEvent((__int64)a1, v6);
  if ( a5 && (*(_DWORD *)(a5 + 184) & 0x2000) != 0 )
    v17 = a5 + 392;
  else
    v17 = 0LL;
  if ( (*((_WORD *)a1 + 1) & 0x1000) != 0 )
  {
    if ( (dword_1C02126CC & 1) != 0 )
    {
      v18 = byte_1C02126D0;
    }
    else
    {
      dword_1C02126CC |= 1u;
      v18 = (unsigned int)ApiSetEditionGetExecutionEvironment() == 2;
      byte_1C02126D0 = v18;
    }
    if ( v18 )
      v13 = (void *)*((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      *((_WORD *)a1 + 1),
      *(_WORD *)a1,
      *v16,
      a2,
      v13,
      (__int16 *)((unsigned __int64)(a1 + 16) & -(__int64)(a3 != 0)),
      a3,
      a4,
      v17,
      a6);
  }
  else if ( (unsigned int)KEOEMProcs((struct tagKE *)a1)
         && (unsigned int)xxxKELocaleProcs((struct tagKE *)a1)
         && (unsigned int)xxxKENLSProcs((__int64)a1, a2) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(a3) )
    {
      if ( !a4 && !a3 )
        CPTPProcessor::OnKeyEvent(v6, *((_WORD *)a1 + 1) >= 0);
      xxxKeyEventEx(*((_WORD *)a1 + 1), *a1, *v16, a2, *((void **)a1 + 1), (__int16 *)a1 + 8, a3, a4, v17, a6);
    }
    else
    {
      InputTraceLogging::Keyboard::DropInput();
    }
  }
}
