/*
 * XREFs of NtUserSetSystemMenu @ 0x1C0155590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C01556FC (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    v22 = v4;
    HMLockObject(v4);
    SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
    v20 = 0LL;
    v8 = ValidateHmenu(a2);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v19) )
    {
      v11 = v20;
      if ( !v20 )
        v11 = *(_QWORD *)v19[0];
      v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      v25 = v11;
      HMLockObject(v11);
      v6 = xxxSetSystemMenu(v7, v19);
      ThreadUnlock1(v13, v12, v14);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v9, v10);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
