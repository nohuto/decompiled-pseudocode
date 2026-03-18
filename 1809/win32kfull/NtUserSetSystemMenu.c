/*
 * XREFs of NtUserSetSystemMenu @ 0x1C014D560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C014D6A0 (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  _QWORD v21[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v21;
    v21[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
    v20 = 0LL;
    v11 = ValidateHmenu(a2);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, v11);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v19) )
    {
      v13 = v20;
      if ( !v20 )
        v13 = *(_QWORD *)v19[0];
      v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v22;
      v22[1] = v13;
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v9 = xxxSetSystemMenu(v10, v19);
      ThreadUnlock1(v15, v14);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v12);
    ThreadUnlock1(v17, v16);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
