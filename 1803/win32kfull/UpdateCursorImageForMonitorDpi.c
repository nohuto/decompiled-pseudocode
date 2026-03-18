/*
 * XREFs of UpdateCursorImageForMonitorDpi @ 0x1C006A0F8
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01A7CA8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C001DEE0 (PtiMouseFromQ.c)
 *     FixupCursorForMonitor @ 0x1C001E29C (FixupCursorForMonitor.c)
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00C0B10 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0139DB8 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall UpdateCursorImageForMonitorDpi(unsigned __int16 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // cx
  int v4; // ecx
  struct tagTHREADINFO *v5; // rax
  unsigned int *CurrentCursorFrame; // rax
  unsigned int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // r8d

  v2 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v2 )
  {
    v3 = *(_WORD *)(*(_QWORD *)(v2 + 40) + 64LL);
    LODWORD(v2) = 48;
    if ( v3 >= 0x90u )
    {
      if ( v3 >= 0xC0u )
      {
        if ( v3 >= 0x120u )
          v4 = v3 < 0x180u ? 96 : 128;
        else
          v4 = 64;
      }
      else
      {
        v4 = 48;
      }
    }
    else
    {
      v4 = 32;
    }
    if ( a1 >= 0x90u )
    {
      if ( a1 >= 0xC0u )
      {
        if ( a1 >= 0x120u )
          LODWORD(v2) = a1 < 0x180u ? 96 : 128;
        else
          LODWORD(v2) = 64;
      }
    }
    else
    {
      LODWORD(v2) = 32;
    }
    if ( v4 != (_DWORD)v2 )
    {
      if ( !gpqForeground
        || *(int *)(gpqForeground + 384LL) >= 0
        || (v5 = (struct tagTHREADINFO *)PtiMouseFromQ(gpqForeground),
            LOBYTE(v2) = TestRawInputModeCaptureMouse(v5),
            !(_BYTE)v2) )
      {
        LOBYTE(v2) = gpqCursor;
        if ( gpqCursor )
        {
          if ( *(int *)(gpqCursor + 384LL) >= 0 )
          {
            if ( *(_QWORD *)(gpqCursor + 376LL) )
            {
              LOBYTE(v2) = gpsi;
              if ( *(_DWORD *)(gpsi + 1972LL) )
              {
                if ( gpcurPhysCurrent )
                {
                  gpcurPhysCurrent = FixupCursorForMonitor(gpcurPhysCurrent);
                  CurrentCursorFrame = (unsigned int *)GetCurrentCursorFrame((struct tagCURSOR *)gpcurPhysCurrent);
                  gpcurPhysCurrent = (__int64)CurrentCursorFrame;
                  v7 = CurrentCursorFrame[20];
                  v8 = v7 & 8;
                  if ( !gbDisableAlpha
                    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000
                    && (v7 & 0x200) != 0 )
                  {
                    v8 |= 0x10u;
                  }
                  if ( gbForceSoftwareCursor == 1 )
                    v8 |= 0x20u;
                  EtwTraceCursorSize(CurrentCursorFrame[19], CurrentCursorFrame[35], CurrentCursorFrame[36]);
                  v9 = gMouseTrails;
                  if ( gProtocolType )
                    v9 = 0;
                  LOBYTE(v2) = GreSetPointer((struct _CURSINFO *)(gpcurPhysCurrent + 80), v8, v9, 0x32u);
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
