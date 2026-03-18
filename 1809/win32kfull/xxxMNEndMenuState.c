/*
 * XREFs of xxxMNEndMenuState @ 0x1C01F9F80
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01F8FE0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01F98FC (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C01F9D84 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01F9EC0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FA0A0 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, 0LL);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_DWORD **)a1);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v5, *(_QWORD *)a1);
      **(_DWORD **)v5[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, *(_QWORD *)a1);
      MNFreePopup(v6);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( !*(_QWORD *)v5[0] || (**(_DWORD **)v5[0] & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)v5[0] )
        **(_DWORD **)v5[0] &= ~0x20000000u;
    }
    else if ( *(void *const *)v5[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v3 = *(_QWORD *)v5[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v5[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v3);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v2);
}
