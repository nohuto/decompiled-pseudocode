/*
 * XREFs of SetupClassAtoms @ 0x1C0108F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rdi
  char v1; // si
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int16 v4; // ax
  int v5; // eax
  int v6; // edi
  __int16 v7; // bx
  int v8; // ebx
  BOOL v9; // edi
  char v10; // bl
  BOOL v11; // edi
  char v12; // bl
  BOOL v13; // edi
  char v14; // bl
  BOOL v15; // edi
  unsigned __int8 v16; // bl
  int v17; // ebx
  unsigned __int16 v18; // di
  int v19; // edi
  int v20; // ebx
  int v21; // ebx
  int v22; // edi
  __int16 v23; // ax
  int v24; // edi
  BOOL v25; // ebx
  int v26; // ebx
  BOOL v27; // edi
  int v28; // edi
  _BOOL8 v29; // rbx
  BOOL v30; // ebx
  BOOL v31; // esi
  int v32; // esi
  BOOL v33; // edi
  int v34; // edi
  BOOL v35; // ebx
  __int16 v36; // ax
  unsigned int v37; // ebx

  v0 = off_1C02D2E00;
  v1 = 1;
  v2 = 868LL;
  v3 = 17LL;
  do
  {
    v4 = UserAddAtomEx(*v0++, 1LL, 2LL);
    *(_WORD *)(v2 + gpsi) = v4;
    v5 = -(*(_WORD *)(v2 + gpsi) != 0);
    v2 += 2LL;
    v1 &= v5;
    --v3;
  }
  while ( v3 );
  *(_WORD *)(gpsi + 904LL) = -32766;
  *(_WORD *)(gpsi + 910LL) = -32764;
  *(_WORD *)(gpsi + 912LL) = -32762;
  *(_WORD *)(gpsi + 902LL) = -32767;
  *(_WORD *)(gpsi + 908LL) = -32765;
  *(_WORD *)(gpsi + 906LL) = 0x8000;
  *(_DWORD *)(gpsi + 928LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v6 = (unsigned __int8)v1 & (*(_DWORD *)(gpsi + 928LL) != 0);
  *(_WORD *)(gpsi + 1378LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v7 = *(_WORD *)(gpsi + 1378LL);
  atomCheckpointProp = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  if ( atomCheckpointProp )
    v8 = v7 != 0 ? v6 : 0;
  else
    LOBYTE(v8) = 0;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v9 = atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  if ( atomQOS )
    v10 = v9 & v8;
  else
    v10 = 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v11 = atomDDEImp != 0;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  if ( atomWndObj )
    v12 = v11 & v10;
  else
    v12 = 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v13 = atomImeLevel != 0;
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  if ( atomLayer )
    v14 = v13 & v12;
  else
    v14 = 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v15 = atomDispAffinity != 0;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  if ( atomDWMProp )
    v16 = v15 & v14;
  else
    v16 = 0;
  CSwapChainProp::s_atom = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v17 = (CSwapChainProp::s_atom != 0) & v16;
  v18 = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CHwndTargetProp::s_atom = v18;
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  if ( CInputQueueProp::s_atom )
    v19 = v18 != 0 ? v17 : 0;
  else
    v19 = 0;
  v20 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiActivateShellWindow = v20;
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v21 = (guiOtherWindowCreated != 0) & (v20 != 0 ? v19 : 0);
  v22 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  guiOtherWindowDestroyed = v22;
  v23 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v23;
  *(_WORD *)(gpsi + 916LL) = v23;
  if ( v23 )
    v24 = v22 != 0 ? v21 : 0;
  else
    v24 = 0;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v25 = gatomShadow != 0;
  *(_WORD *)(gpsi + 914LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  if ( gaOleMainThreadWndClass )
    v26 = v24 & v25;
  else
    v26 = 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v27 = gaFlashWState != 0;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  if ( gatomTouchFlags )
    v28 = v26 & v27;
  else
    v28 = 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v29 = gatomPtrTargetFlags != 0;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  if ( gatomFeedbackSettings )
    v30 = v28 & v29;
  else
    v30 = 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v31 = gatomShutdownBlockingReason != 0;
  gatomBrokeredForeground = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  if ( gatomBrokeredForeground )
    v32 = v30 && v31;
  else
    v32 = 0;
  gatomMiPFlags = UserAddAtomEx(L"MiPFlags", 1LL, 2LL);
  v33 = gatomMiPFlags != 0;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  if ( CoreWindowProp::s_atom )
    v34 = v32 & v33;
  else
    v34 = 0;
  gatomShellWindowManagement = UserAddAtomEx(L"ShellWindowManagement", 1LL, 2LL);
  v35 = gatomShellWindowManagement != 0;
  v36 = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  gatomMonitorInheritance = v36;
  if ( v36 )
    v37 = v34 & v35;
  else
    v37 = 0;
  gatomLastPinned = v36;
  return v37;
}
