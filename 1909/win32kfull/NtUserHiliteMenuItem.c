/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C022F660
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024D170 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD v26[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+30h] [rbp-40h]
  __int64 v28; // [rsp+38h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h]
  __int64 v30; // [rsp+48h] [rbp-28h]
  __int64 v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h]
  __int64 v33; // [rsp+60h] [rbp-10h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v28;
    v29 = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
    v27 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v12, v13, v14);
    }
    else
    {
      v17 = ValidateHmenu(a2);
      v27 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v26, v17);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v26)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v18 = v27;
        if ( !v27 )
          v18 = *(_QWORD *)v26[0];
        v31 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v31;
        v32 = v18;
        HMLockObject(v18);
        v10 = xxxHiliteMenuItem(v11, v26, a3, a4);
        ThreadUnlock1(v20, v19, v21);
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v15, v16);
    ThreadUnlock1(v23, v22, v24);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
