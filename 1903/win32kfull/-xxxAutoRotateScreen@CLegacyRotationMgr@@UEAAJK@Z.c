/*
 * XREFs of ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D53E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00B6F90 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0131820 (-AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C01CF2F0 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01CF3EC (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01D4B3C (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01D4D40 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D5550 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxAutoRotateScreen(CLegacyRotationMgr *this, unsigned int a2)
{
  int AutoRotationState; // eax
  unsigned int *v6; // rdx
  CLegacyRotationMgr *v7; // rcx
  CLegacyRotationMgr *v8; // rcx
  unsigned int v9; // edi
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)(gPowerDisplayState[16] - 1) > 1 )
    return 0xFFFFFFFFLL;
  gAutoRotationInfo = a2;
  dword_1C0327D98 = 1;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState
    && (((AutoRotationState - 64) & 0xFFFFFF3F) != 0
     || AutoRotationState == 256
     || a2 != (unsigned int)CLegacyRotationMgr::GetDockedOrientationValue(this, v6)) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent();
    return 3221225506LL;
  }
  else
  {
    if ( (unsigned int)CLegacyRotationMgr::IsOrientationWithinPreferences(v7, a2) )
    {
      v9 = CLegacyRotationMgr::xxxRotateScreen(v8, a2, 1, &v10);
      if ( v10 )
        TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0);
      else
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          15LL);
    }
    else
    {
      TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0);
      v9 = 0;
    }
    if ( !v9 )
      CLegacyRotationMgr::AutoRotationUpdateRegistry(this);
    return v9;
  }
}
