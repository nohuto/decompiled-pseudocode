/*
 * XREFs of xxxEndMenu @ 0x1C0246FFC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FE7BC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD **v4; // rax
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v9, *(_QWORD *)a1);
  if ( *(_QWORD *)v9[0] )
  {
    v4 = (_DWORD **)v9[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v4 |= 0x8000u;
    v5 = *(_QWORD *)(a1 + 32);
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(v2 + 112) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v5 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      if ( (v6 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v6 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v7 = **(_DWORD **)v9[0];
          xxxMNCloseHierarchy(*(_QWORD *)v9[0], a1);
          if ( (v7 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v9[0] + 16LL) )
            xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v9[0] + 16LL));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v2, v3);
}
