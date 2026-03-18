/*
 * XREFs of LockDesktopMenu @ 0x1C01284C8
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C01283F8 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D28 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v4 = 0;
  v15 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL);
    v8 = a2[2];
    if ( !v8 )
      v8 = (_DWORD *)**a2;
    HMChangeOwnerPheProcess(
      gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v8,
      *(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL));
    v9 = *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v14, v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) |= 0x40u;
    v10 = v15;
    if ( !v15 )
      v10 = *(_DWORD **)v14[0];
    HMChangeOwnerPheProcess(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v10, v7);
    v11 = a2[2];
    if ( !v11 )
      v11 = (_QWORD *)**a2;
    v13[0] = a1;
    v13[1] = v11;
    HMAssignmentLock(v13);
    v4 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v5);
  return v4;
}
