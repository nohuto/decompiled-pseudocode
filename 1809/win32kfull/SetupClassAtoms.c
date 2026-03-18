/*
 * XREFs of SetupClassAtoms @ 0x1C012A050
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
  unsigned int v6; // edi
  int v7; // ebp
  __int16 v8; // bx
  int v9; // ebx
  bool v10; // si
  char v11; // bl
  bool v12; // si
  char v13; // bl
  bool v14; // si
  char v15; // bl
  bool v16; // si
  unsigned __int8 v17; // bl
  int v18; // ebx
  unsigned __int16 v19; // si
  int v20; // esi
  int v21; // ebx
  int v22; // ebx
  int v23; // esi
  __int16 v24; // ax
  int v25; // esi
  BOOL v26; // ebx
  int v27; // ebx
  BOOL v28; // esi
  int v29; // esi
  BOOL v30; // ebx
  int v31; // ebx
  BOOL v32; // esi
  int v33; // esi
  BOOL v34; // ebx
  int v35; // ebx
  __int16 v36; // ax

  v0 = off_1C02C3E70;
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
  v6 = 0;
  *(_DWORD *)(gpsi + 928LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v7 = (unsigned __int8)v1 & (*(_DWORD *)(gpsi + 928LL) != 0);
  *(_WORD *)(gpsi + 1378LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v8 = *(_WORD *)(gpsi + 1378LL);
  atomCheckpointProp = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  if ( atomCheckpointProp )
    v9 = v8 != 0 ? v7 : 0;
  else
    LOBYTE(v9) = 0;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v10 = atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  if ( atomQOS )
    v11 = v10 & v9;
  else
    v11 = 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v12 = atomDDEImp != 0;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  if ( atomWndObj )
    v13 = v12 & v11;
  else
    v13 = 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v14 = atomImeLevel != 0;
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  if ( atomLayer )
    v15 = v14 & v13;
  else
    v15 = 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v16 = atomDispAffinity != 0;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  if ( atomDWMProp )
    v17 = v16 & v15;
  else
    v17 = 0;
  CSwapChainProp::s_atom = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v18 = (CSwapChainProp::s_atom != 0) & v17;
  v19 = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CHwndTargetProp::s_atom = v19;
  CInputQueueProp::s_atom = UserAddAtomEx(szCOMPOSITIONINPUTQUEUE_NAME, 1LL, 2LL);
  if ( CInputQueueProp::s_atom )
    v20 = v19 != 0 ? v18 : 0;
  else
    v20 = 0;
  v21 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiActivateShellWindow = v21;
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v22 = (guiOtherWindowCreated != 0) & (v21 != 0 ? v20 : 0);
  v23 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  guiOtherWindowDestroyed = v23;
  v24 = UserAddAtomEx(L"Message", 1LL, 2LL);
  gatomMessage = v24;
  *(_WORD *)(gpsi + 916LL) = v24;
  if ( v24 )
    v25 = v23 != 0 ? v22 : 0;
  else
    v25 = 0;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v26 = gatomShadow != 0;
  *(_WORD *)(gpsi + 914LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  if ( gaOleMainThreadWndClass )
    v27 = v25 & v26;
  else
    v27 = 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v28 = gaFlashWState != 0;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  if ( gatomTouchFlags )
    v29 = v27 & v28;
  else
    v29 = 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v30 = gatomPtrTargetFlags != 0;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  if ( gatomFeedbackSettings )
    v31 = v29 & v30;
  else
    v31 = 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v32 = gatomShutdownBlockingReason != 0;
  gatomBrokeredForeground = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  if ( gatomBrokeredForeground )
    v33 = v31 & v32;
  else
    v33 = 0;
  gatomMiPFlags = UserAddAtomEx(L"MiPFlags", 1LL, 2LL);
  v34 = gatomMiPFlags != 0;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  if ( CoreWindowProp::s_atom )
    v35 = v33 & v34;
  else
    v35 = 0;
  v36 = UserAddAtomEx(L"MonitorInheritance", 1LL, 2LL);
  LOBYTE(v6) = v36 != 0;
  gatomMonitorInheritance = v36;
  gatomLastPinned = v36;
  return v35 & v6;
}
