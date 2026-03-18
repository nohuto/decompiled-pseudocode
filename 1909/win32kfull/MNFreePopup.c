/*
 * XREFs of MNFreePopup @ 0x1C02104E4
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C02103F0 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnlockPopupMenu @ 0x1C0222AF8 (UnlockPopupMenu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

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
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v5, v6);
}
