/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C0210B80
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, a1);
  while ( *(_QWORD *)v9[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v10, *(_QWORD *)(*(_QWORD *)v9[0] + 72LL));
    **(_DWORD **)v9[0] &= ~0x10000u;
    if ( *(_QWORD *)v9[0] != a1 )
      **(_DWORD **)v9[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v9[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v9[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v9, *(_QWORD *)v10[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v2, v3, v4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v5, v6, v7);
}
