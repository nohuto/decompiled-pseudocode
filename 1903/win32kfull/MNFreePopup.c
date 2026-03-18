/*
 * XREFs of MNFreePopup @ 0x1C0210A24
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C0210930 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C0223038 (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 16));
  v3 = v2;
  if ( v2 && (void *const)**a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( *(_QWORD *)(v2 + 16) )
    {
      v4 = **a1;
      if ( *(_QWORD *)(v2 + 16) != v4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    }
    *(_QWORD *)(v3 + 16) = **a1;
  }
  HMAssignmentUnlock(**a1 + 24);
  HMAssignmentUnlock(**a1 + 32);
  UnlockPopupMenu(a1, **a1 + 40);
  UnlockPopupMenu(a1, **a1 + 48);
  HMAssignmentUnlock(**a1 + 8);
  HMAssignmentUnlock(**a1 + 56);
  HMAssignmentUnlock(**a1 + 16);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v5, v6, v7);
}
