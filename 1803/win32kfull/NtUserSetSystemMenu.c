/*
 * XREFs of NtUserSetSystemMenu @ 0x1C012D060
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C012D17C (xxxSetSystemMenu.c)
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
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  _QWORD v23[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v23;
    v23[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
    v22 = 0LL;
    v11 = ValidateHmenu(a2);
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, v11);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    {
      v13 = v22;
      if ( !v22 )
        v13 = *(_QWORD *)v21[0];
      v24[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v24;
      v24[1] = v13;
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v9 = xxxSetSystemMenu(v10, v21);
      ThreadUnlock1(v15, v14, v16);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v12);
    ThreadUnlock1(v18, v17, v19);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
