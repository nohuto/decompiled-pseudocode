/*
 * XREFs of xxxEndMenu @ 0x1C022EED4
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C011D04C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD **v3; // rax
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, *(_QWORD *)a1);
  if ( *(_QWORD *)v8[0] )
  {
    v3 = (_DWORD **)v8[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v3 |= 0x8000u;
    v4 = *(_QWORD *)(a1 + 32);
    v2 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( *(_QWORD *)(v2 + 104) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v4 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( (v5 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v5 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v6 = **(_DWORD **)v8[0];
          xxxMNCloseHierarchy(*(_QWORD *)v8[0], a1);
          if ( (v6 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v8[0] + 16LL) )
            xxxDestroyWindow(*(volatile signed __int32 **)(*(_QWORD *)v8[0] + 16LL));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v2);
}
