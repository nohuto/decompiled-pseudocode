/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C022FC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024D8B0 (xxxHiliteMenuItem.c)
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
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v27[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h]
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int64 v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+60h] [rbp-10h]

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    v30 = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
    v28 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v12, v13, v14);
    }
    else
    {
      v18 = ValidateHmenu(a2);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v27, v18);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v19 = v28;
        if ( !v28 )
          v19 = *(_QWORD *)v27[0];
        v32 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v32;
        v33 = v19;
        HMLockObject(v19);
        v10 = xxxHiliteMenuItem(v11, v27, a3, a4);
        ThreadUnlock1(v21, v20, v22);
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v15, v16, v17);
    ThreadUnlock1(v24, v23, v25);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
