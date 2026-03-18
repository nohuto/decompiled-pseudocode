/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C0210930
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020FC7C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C02105C4 (NullifyLookasideRef.c)
 *     MNFreePopup @ 0x1C0210A24 (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v11, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v11[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v11[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v12, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v11[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v12[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, *(_QWORD *)v12[0]);
    MNFreePopup(v13);
    if ( (**(_DWORD **)v12[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v12[0] &= ~0x20000000u;
    }
    else
    {
      v10 = *(_QWORD *)v12[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v12[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v10);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v3, v4, v5);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v6, v7, v8);
}
