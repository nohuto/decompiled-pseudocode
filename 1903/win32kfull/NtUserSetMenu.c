/*
 * XREFs of NtUserSetMenu @ 0x1C0154DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C0154FB4 (xxxSetMenu.c)
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
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+60h] [rbp-10h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v25 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v25;
      v26 = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
      v24 = 0LL;
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v24 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v23, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
        {
LABEL_12:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v9, v10, v11);
          ThreadUnlock1(v20, v19, v21);
          goto LABEL_13;
        }
      }
      else
      {
        SmartObjStackRefBase<tagMENU>::operator=(v23, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v23)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v23[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v12, v13, v14);
      }
      else
      {
        v15 = v24;
        if ( !v24 )
          v15 = *(_QWORD *)v23[0];
        v28 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v28;
        v29 = v15;
        if ( v15 )
          HMLockObject(v15);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v17, v16, v18);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
