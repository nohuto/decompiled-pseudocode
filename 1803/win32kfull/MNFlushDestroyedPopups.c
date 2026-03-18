/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C01D50C0
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01D45B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01D4D98 (NullifyLookasideRef.c)
 *     MNFreePopup @ 0x1C01D51B4 (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v7[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v7[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v7[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v8[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, *(_QWORD *)v8[0]);
    MNFreePopup(v9);
    if ( (**(_DWORD **)v8[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v8[0] &= ~0x20000000u;
    }
    else
    {
      v6 = *(_QWORD *)v8[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v6);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v3);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, v4);
}
