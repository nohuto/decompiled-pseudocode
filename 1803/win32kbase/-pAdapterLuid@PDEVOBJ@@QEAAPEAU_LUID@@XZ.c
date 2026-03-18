/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031D50
 * Callers:
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C004E660 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00548D0 (DrvGetWDDMAdapterInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00CB140 (NtHWCursorUpdatePointer.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00D1224 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00D48E0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( v2 == -4 )
  {
    if ( (*(_DWORD *)(v1 + 40) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 248);
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1792) + 40LL) + 2568LL) + 248LL);
  }
  else
  {
    if ( v2 && (*(_DWORD *)(v1 + 40) & 0x20000) == 0 )
      return (struct _LUID *)(v2 + 248);
    return 0LL;
  }
}
