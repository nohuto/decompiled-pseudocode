/*
 * XREFs of MNFreePopup @ 0x1C01D51B4
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C01D50C0 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C01E55D8 (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a1 + 16LL));
  if ( v2 && *(void *const *)*a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = *(_QWORD *)*a1;
  }
  HMAssignmentUnlock(*(_QWORD *)*a1 + 24LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 32LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 40LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 48LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 8LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 56LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 16LL);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v3);
}
