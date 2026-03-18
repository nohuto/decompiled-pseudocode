/*
 * XREFs of ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01BAF00 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetAltTabInfo @ 0x1C01BC2F4 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 * Callees:
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01A28BC (safe_cast_fnid_to_PSWITCHWND.c)
 */

struct tagSwitchWndInfo *__fastcall Getpswi(struct tagWND *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  struct tagSwitchWndInfo *result; // rax
  __int64 v4; // r10

  v2 = safe_cast_fnid_to_PSWITCHWND((__int64)a1);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *(unsigned int *)(v4 + 252) + 312LL == *(unsigned __int16 *)(gpsi + 340LL) && *(char *)(v4 + 19) >= 0 )
      return *(struct tagSwitchWndInfo **)(v2 + 8);
  }
  return result;
}
