/*
 * XREFs of xxxProcessKeyEvent @ 0x1C0130400
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AB50 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AC10 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010B530 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010B8E0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C010BB50 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F490 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F69C (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012FB40 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0035ED0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0059258 (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0064E24 (-UpdateRawKeyState@@YAXEH@Z.c)
 *     KEOEMProcs @ 0x1C00653CC (KEOEMProcs.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00668D4 (ApiSetEditionGetActiveHKL.c)
 *     xxxKELocaleProcs @ 0x1C006724C (xxxKELocaleProcs.c)
 *     xxxKENLSProcs @ 0x1C00684A0 (xxxKENLSProcs.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C006E7E0 (ApiSetEditionGetExecutionEvironment.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C0125A18 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

__int64 __fastcall xxxProcessKeyEvent(unsigned __int8 *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  struct tagTHREADINFO *v5; // r13
  unsigned __int8 v7; // si
  __int16 ActiveHKL; // ax
  __int16 v12; // r10
  unsigned int v13; // ecx
  __int64 v14; // rdi
  int *v15; // r14
  __int64 v16; // rdx
  char v17; // dl
  __int64 result; // rax

  v5 = gptiCurrent;
  v7 = a1[2];
  ActiveHKL = ApiSetEditionGetActiveHKL();
  v12 = *((_WORD *)a1 + 1);
  if ( (ActiveHKL & 0x3FF) == 0x12
    && (v12 & 0x9000) == 0x8000
    && (unsigned __int8)(*a1 + 15) <= 1u
    && ((unsigned __int8)(1 << (2 * (v7 & 3))) & gafRawKeyState[(unsigned __int64)v7 >> 2]) == 0 )
  {
    *((_WORD *)a1 + 1) = v12 & 0x7FFF;
  }
  else
  {
    UpdateRawKeyState(v7, *((_WORD *)a1 + 1) & 0x8000);
  }
  if ( (unsigned __int8)(v7 + 96) <= 5u )
  {
    v7 = (v7 - 160) / 2 + 16;
    UpdateRawKeyState(v7, *((_WORD *)a1 + 1) & 0x8000);
  }
  v13 = (a3 != 0 ? 8 : 0) | 0x20;
  if ( (unsigned int)v7 - 173 <= 6 )
    v13 = a3 != 0 ? 8 : 0;
  v14 = 0LL;
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0LL,
    0,
    v13);
  v15 = (int *)(a1 + 4);
  if ( !a3 || !*v15 )
    *v15 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x102u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionHandleSonarKeyEventSupported() >= 0 )
  {
    LOBYTE(v16) = v7;
    EditionHandleSonarKeyEvent(a1, v16);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x103u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (*((_WORD *)a1 + 1) & 0x1000) != 0 )
  {
    if ( (dword_1C01A0CE0 & 1) != 0 )
    {
      v17 = byte_1C01A0CE4;
    }
    else
    {
      dword_1C01A0CE0 |= 1u;
      v17 = (unsigned int)ApiSetEditionGetExecutionEvironment() == 2;
      byte_1C01A0CE4 = v17;
    }
    if ( v17 )
      v14 = *((_QWORD *)a1 + 1);
    return xxxKeyEvent(
             (CAsyncKeyEventMonitor *)*((unsigned __int16 *)a1 + 1),
             *(_WORD *)a1,
             *v15,
             a2,
             v14,
             (unsigned __int16 *)((unsigned __int64)(a1 + 16) & -(__int64)(a3 != 0)),
             a3,
             a4,
             a5);
  }
  else
  {
    result = KEOEMProcs((struct tagKE *)a1);
    if ( (_DWORD)result )
    {
      result = xxxKELocaleProcs((struct tagKE *)a1);
      if ( (_DWORD)result )
      {
        result = xxxKENLSProcs((__int64)a1, a2);
        if ( (_DWORD)result )
        {
          result = ApiSetEditionIsGpqForegroundInaccessible(a3, (__int64)v5);
          if ( !(_DWORD)result )
          {
            if ( !a4 && !a3 )
              CPTPProcessor::OnKeyEvent(v7, *((_WORD *)a1 + 1) >= 0);
            return xxxKeyEvent(
                     (CAsyncKeyEventMonitor *)*((unsigned __int16 *)a1 + 1),
                     *a1,
                     *v15,
                     a2,
                     *((_QWORD *)a1 + 1),
                     (unsigned __int16 *)a1 + 8,
                     a3,
                     a4,
                     a5);
          }
        }
      }
    }
  }
  return result;
}
