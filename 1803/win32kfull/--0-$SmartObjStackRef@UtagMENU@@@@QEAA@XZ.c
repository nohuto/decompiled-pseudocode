/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0021080 (NtUserThunkedMenuItemInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreateWindowEx @ 0x1C0022B90 (NtUserCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserThunkedMenuInfo @ 0x1C012EC80 (NtUserThunkedMenuInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01EF340 (NtUserGetMenuItemRect.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01F6A80 (NtUserTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = 0LL;
  return a1;
}
