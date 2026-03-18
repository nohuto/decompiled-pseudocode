/*
 * XREFs of NtUserSetMenu @ 0x1C014D990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C014DB3C (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct tagWND *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  _QWORD v24[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v24[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v24;
      v24[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
      v23 = 0LL;
      if ( a2 )
      {
        v11 = ValidateHmenu(a2);
        v23 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v22, v11);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
        {
LABEL_12:
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v12);
          ThreadUnlock1(v20, v19);
          goto LABEL_13;
        }
      }
      else
      {
        v23 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v22, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v13, v14, v15);
      }
      else
      {
        v16 = v23;
        if ( !v23 )
          v16 = *(_QWORD *)v22[0];
        v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v25;
        v25[1] = v16;
        if ( v16 )
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v9 = xxxSetMenu(v10);
        ThreadUnlock1(v18, v17);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
