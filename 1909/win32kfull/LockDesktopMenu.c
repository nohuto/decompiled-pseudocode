/*
 * XREFs of LockDesktopMenu @ 0x1C010D694
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C010D5C4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02411AC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v4 = 0;
  v16 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v7 = a2[2];
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL) + 24LL) + 16LL);
    if ( !v7 )
      v7 = (_QWORD *)**a2;
    HMChangeOwnerProcess(v7, v8);
    v9 = *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v15, v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL) |= 0x40u;
    v10 = v16;
    if ( !v16 )
      v10 = *(_QWORD *)v15[0];
    HMChangeOwnerProcess(v10, v8);
    v11 = a2[2];
    if ( !v11 )
      v11 = (_QWORD *)**a2;
    *((_QWORD *)&v13 + 1) = v11;
    *(_QWORD *)&v13 = a1;
    v14 = v13;
    HMAssignmentLock(&v14);
    v4 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v5, v6);
  return v4;
}
