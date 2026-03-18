/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C
 * Callers:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     IsShellParticipatesInSizing @ 0x1C0074B18 (IsShellParticipatesInSizing.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     xxxDesktopRecalc @ 0x1C00F2340 (xxxDesktopRecalc.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C01128C0 (_EnableShellWindowManagementBehavior.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01C57A0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01D6690 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellWndManagementBehaviorEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_QWORD *)(a1 + 328) )
    return (a2 & *(_DWORD *)(a1 + 336)) != 0;
  return v2;
}
