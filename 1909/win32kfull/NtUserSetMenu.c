/*
 * XREFs of NtUserSetMenu @ 0x1C0155BA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C0155D74 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      v25 = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
      v23 = 0LL;
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v23 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v22, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
        {
LABEL_12:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v9, v10);
          ThreadUnlock1(v19, v18, v20);
          goto LABEL_13;
        }
      }
      else
      {
        SmartObjStackRefBase<tagMENU>::operator=(v22, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v11, v12, v13);
      }
      else
      {
        v14 = v23;
        if ( !v23 )
          v14 = *(_QWORD *)v22[0];
        v27 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v27;
        v28 = v14;
        if ( v14 )
          HMLockObject(v14);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v16, v15, v17);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
