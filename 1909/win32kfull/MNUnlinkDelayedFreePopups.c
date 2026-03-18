/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C0210640
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, a1);
  while ( *(_QWORD *)v7[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, *(_QWORD *)(*(_QWORD *)v7[0] + 72LL));
    **(_DWORD **)v7[0] &= ~0x10000u;
    if ( *(_QWORD *)v7[0] != a1 )
      **(_DWORD **)v7[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v7[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v7[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *(_QWORD *)v8[0]);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, v2, v3);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v4, v5);
}
