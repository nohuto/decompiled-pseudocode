/*
 * XREFs of xxxProcessKeyEvent @ 0x1C0034E70
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131ED0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131F90 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0132800 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0132BD0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0132E40 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0151FE4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01521F0 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01522F0 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UpdateRawKeyState@@YAXEH@Z @ 0x1C0035108 (-UpdateRawKeyState@@YAXEH@Z.c)
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0035C20 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C0036308 (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0036CF8 (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     xxxKENLSProcs @ 0x1C0036D90 (xxxKENLSProcs.c)
 *     xxxKELocaleProcs @ 0x1C0036DC0 (xxxKELocaleProcs.c)
 *     KEOEMProcs @ 0x1C0036E1C (KEOEMProcs.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C0094930 (ApiSetEditionGetExecutionEvironment.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C014B38C (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

__int64 __fastcall xxxProcessKeyEvent(unsigned __int16 *a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  struct tagTHREADINFO *v5; // r13
  unsigned __int8 v7; // si
  __int16 ActiveHKL; // ax
  unsigned __int16 v12; // r10
  __int64 v13; // rdi
  int v14; // r9d
  int v15; // eax
  _DWORD *v16; // r14
  __int64 v17; // rdx
  __int64 result; // rax
  char v19; // dl

  v5 = gptiCurrent;
  v7 = *((_BYTE *)a1 + 2);
  ActiveHKL = ApiSetEditionGetActiveHKL();
  v12 = a1[1];
  if ( (ActiveHKL & 0x3FF) == 0x12
    && (v12 & 0x9000) == 0x8000
    && (unsigned __int8)(*(_BYTE *)a1 + 15) <= 1u
    && ((unsigned __int8)(1 << (2 * (v7 & 3))) & gafRawKeyState[(unsigned __int64)v7 >> 2]) == 0 )
  {
    a1[1] = v12 & 0x7FFF;
  }
  else
  {
    UpdateRawKeyState(v7, v12 & 0x8000);
  }
  if ( (unsigned __int8)(v7 + 96) <= 5u )
  {
    v7 = (v7 - 160) / 2 + 16;
    UpdateRawKeyState(v7, a1[1] & 0x8000);
  }
  v13 = 0LL;
  if ( v7 < 0xADu || (v14 = 1, v7 > 0xB3u) )
    v14 = 0;
  v15 = (a3 != 0 ? 8 : 0) | 0x20;
  if ( v14 )
    v15 = a3 != 0 ? 8 : 0;
  CInputGlobals::UpdateInputGlobals(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1LL,
    0LL,
    0,
    v15);
  v16 = a1 + 2;
  if ( !a3 || !*v16 )
    *v16 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x10Au,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionHandleSonarKeyEventSupported() >= 0 )
  {
    LOBYTE(v17) = v7;
    EditionHandleSonarKeyEvent(a1, v17);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x10Bu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (a1[1] & 0x1000) != 0 )
  {
    if ( (dword_1C01CE124 & 1) != 0 )
    {
      v19 = byte_1C01CE128;
    }
    else
    {
      dword_1C01CE124 |= 1u;
      v19 = (unsigned int)ApiSetEditionGetExecutionEvironment() == 2;
      byte_1C01CE128 = v19;
    }
    if ( v19 )
      v13 = *((_QWORD *)a1 + 1);
    return xxxKeyEvent(a1[1], *a1, *v16, a2, v13, (unsigned __int64)(a1 + 8) & -(__int64)(a3 != 0), a3, a4, a5);
  }
  else
  {
    result = KEOEMProcs(a1);
    if ( (_DWORD)result )
    {
      result = xxxKELocaleProcs((struct tagKE *)a1);
      if ( (_DWORD)result )
      {
        result = xxxKENLSProcs(a1, a2);
        if ( (_DWORD)result )
        {
          result = ApiSetEditionIsGpqForegroundInaccessible(a3, v5);
          if ( !(_DWORD)result )
          {
            if ( !a4 && !a3 )
              CPTPProcessor::OnKeyEvent(v7, (a1[1] & 0x8000u) == 0);
            return xxxKeyEvent(
                     a1[1],
                     *(unsigned __int8 *)a1,
                     *v16,
                     a2,
                     *((_QWORD *)a1 + 1),
                     (__int64)(a1 + 8),
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
