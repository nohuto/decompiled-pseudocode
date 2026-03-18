/*
 * XREFs of LockDesktopMenu @ 0x1C0132B94
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v4 = 0;
  v17 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v8 = a2[2];
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 24LL) + 16LL);
    if ( !v8 )
      v8 = (_QWORD *)**a2;
    HMChangeOwnerProcess(v8, v9);
    v10 = *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL);
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16, v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) |= 0x40u;
    v11 = v17;
    if ( !v17 )
      v11 = *(_QWORD *)v16[0];
    HMChangeOwnerProcess(v11, v9);
    v12 = a2[2];
    if ( !v12 )
      v12 = (_QWORD *)**a2;
    *((_QWORD *)&v14 + 1) = v12;
    *(_QWORD *)&v14 = a1;
    v15 = v14;
    HMAssignmentLock(&v15);
    v4 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v5, v6, v7);
  return v4;
}
