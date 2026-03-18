/*
 * XREFs of zzzUpdateCursorImage @ 0x1C001E000
 * Callers:
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C001A6D0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C001DF00 (zzzCalcStartCursorHide.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 *     HideAutorunCursor @ 0x1C0197750 (HideAutorunCursor.c)
 *     _SetCursorContents @ 0x1C01B4124 (_SetCursorContents.c)
 * Callees:
 *     SetRITTimer @ 0x1C0019A20 (SetRITTimer.c)
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 *     FixupCursorForMonitor @ 0x1C001E29C (FixupCursorForMonitor.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0021038 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0139DB8 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzUpdateCursorImage()
{
  __int64 v0; // rax
  struct tagTHREADINFO *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // r8d
  _BOOL8 v11; // rcx
  unsigned int v12; // ecx
  int v13; // edx

  if ( gpqForeground )
  {
    v0 = *(_QWORD *)(gpqForeground + 104LL);
    v1 = v0 ? *(struct tagTHREADINFO **)(v0 + 16) : *(struct tagTHREADINFO **)(gpqForeground + 88LL);
    if ( TestRawInputModeCaptureMouse(v1) && *(int *)(gpqForeground + 384LL) < 0 )
      goto LABEL_18;
  }
  result = gpqCursor;
  if ( !gpqCursor )
    return result;
  if ( *(int *)(gpqCursor + 384LL) < 0 || (v3 = *(_QWORD *)(gpqCursor + 376LL)) == 0 )
  {
LABEL_18:
    v3 = 0LL;
  }
  else if ( (gtimeStartCursorHide || gtmridAutorunCursor)
         && (v3 == gasyscur[1] || v3 == gasyscur[33] || v3 == gasyscur[23]) )
  {
    if ( gtmridAutorunCursor )
      v3 = gasyscur[33];
    else
      v3 = gasyscur[23];
  }
  if ( v3 != gpcurLogCurrent )
  {
    EtwTraceWaitCursor(v3);
    if ( gtmridAniCursor )
    {
      FindTimer(0, gtmridAniCursor, 4, 1, 0LL);
      gtmridAniCursor = 0LL;
    }
    if ( v3 && (*(_DWORD *)(v3 + 80) & 8) != 0 && *(_QWORD *)(v3 + 112) )
    {
      *(_DWORD *)(v3 + 120) = 0;
      v4 = *(_DWORD **)(v3 + 112);
      gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * *v4 / 6u, (int)zzzAnimateCursor, 1);
    }
  }
  gpcurLogCurrent = v3;
  result = FixupCursorForMonitor(v3);
  v5 = result;
  if ( result && (*(_DWORD *)(result + 80) & 8) != 0 )
  {
    result = GetAnimatedCursorFrame(result, *(_DWORD *)(result + 120));
    v5 = result;
  }
  v6 = gpcurPhysCurrent;
  if ( v5 != gpcurPhysCurrent )
  {
    gpcurPhysCurrent = v5;
    if ( v5 )
    {
      v7 = FCursorShadowed((struct _CURSINFO *)(v3 + 80));
      v9 = v8 | 0x10;
      if ( !v7 )
        v9 = v8;
      if ( gbForceSoftwareCursor == 1 )
        v9 |= 0x20u;
      v10 = gMouseTrails;
      if ( gProtocolType )
        v10 = 0;
      GreSetPointer((struct _CURSINFO *)(v5 + 80), v9, v10);
    }
    else
    {
      SetPointer(0LL);
    }
    v11 = v5 != 0;
    if ( v11 != (v6 != 0) )
    {
      LOBYTE(v11) = v5 != 0;
      SendVisibilityChanged(v11);
    }
    if ( v5 )
      v12 = v6 != 0 ? 32780 : 32770;
    else
      v12 = 32771;
    v13 = 3;
    if ( !gdwDeferWinEvent )
      v13 = 1;
    return xxxWindowEvent(v12, v13);
  }
  return result;
}
