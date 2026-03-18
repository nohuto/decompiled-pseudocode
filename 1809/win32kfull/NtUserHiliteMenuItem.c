/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C0217DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0234C70 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+30h] [rbp-40h]
  _QWORD v28[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v28;
    v28[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
    v27 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v15, v16, v17);
    }
    else
    {
      v19 = ValidateHmenu(a2);
      v27 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v26, v19);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v26)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v20 = v27;
        if ( !v27 )
          v20 = *(_QWORD *)v26[0];
        v29[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v29;
        v29[1] = v20;
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v13 = xxxHiliteMenuItem(v14, v26, a3, a4);
        ThreadUnlock1(v22, v21);
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v18);
    ThreadUnlock1(v24, v23);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
