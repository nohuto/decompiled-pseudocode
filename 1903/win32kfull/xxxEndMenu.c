/*
 * XREFs of xxxEndMenu @ 0x1C024773C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0123E8C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD **v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v10, *(_QWORD *)a1);
  if ( *(_QWORD *)v10[0] )
  {
    v5 = (_DWORD **)v10[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v5 |= 0x8000u;
    v6 = *(_QWORD *)(a1 + 32);
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(v2 + 112) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v6 )
    {
      v7 = *(_DWORD *)(a1 + 8);
      if ( (v7 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v7 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v8 = **(_DWORD **)v10[0];
          xxxMNCloseHierarchy(*(_QWORD *)v10[0], a1);
          if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v10[0] + 16LL) )
            xxxDestroyWindow(*(__int64 **)(*(_QWORD *)v10[0] + 16LL));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v2, v3, v4);
}
