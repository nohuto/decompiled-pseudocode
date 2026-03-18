/*
 * XREFs of MNFreePopup @ 0x1C01F9D84
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C020A4AC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnlockPopupMenu @ 0x1C020B508 (UnlockPopupMenu.c)
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
