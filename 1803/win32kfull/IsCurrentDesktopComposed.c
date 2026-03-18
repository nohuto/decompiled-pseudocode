/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C00C2030
 * Callers:
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     SetAppCompatFlags @ 0x1C00C1A00 (SetAppCompatFlags.c)
 *     _DwmLockScreenUpdates @ 0x1C0112960 (_DwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A09AC (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01A74D4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsCurrentDesktopComposed()
{
  unsigned int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v1 )
      return *(_DWORD *)(*(_QWORD *)v1 + 52LL) & 1;
  }
  return v0;
}
