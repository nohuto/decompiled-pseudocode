/*
 * XREFs of NtUserSetSystemMenu @ 0x1C01547D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C015493C (xxxSetSystemMenu.c)
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
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v22 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v22;
    v23 = v4;
    HMLockObject(v4);
    SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
    v21 = 0LL;
    v8 = ValidateHmenu(a2);
    v21 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v20, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
    {
      v12 = v21;
      if ( !v21 )
        v12 = *(_QWORD *)v20[0];
      v25 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v25;
      v26 = v12;
      HMLockObject(v12);
      v6 = xxxSetSystemMenu(v7, v20);
      ThreadUnlock1(v14, v13, v15);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v9, v10, v11);
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
