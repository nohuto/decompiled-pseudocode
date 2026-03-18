/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C02103F0
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020F73C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0210084 (NullifyLookasideRef.c)
 *     MNFreePopup @ 0x1C02104E4 (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v9, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v9[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v9[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v10, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v9[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v10[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, *(_QWORD *)v10[0]);
    MNFreePopup(v11);
    if ( (**(_DWORD **)v10[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v10[0] &= ~0x20000000u;
    }
    else
    {
      v8 = *(_QWORD *)v10[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v10[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v8);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v3, v4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v5, v6);
}
