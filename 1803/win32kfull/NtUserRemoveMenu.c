/*
 * XREFs of NtUserRemoveMenu @ 0x1C0106B20
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v7 = 0;
  v21 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
  }
  else
  {
    v8 = ValidateHmenu(a1);
    v21 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v20, v8);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v20)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v10 = v21;
      if ( !v21 )
        v10 = *(_QWORD *)v20[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v22;
      v22[1] = v10;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v7 = xxxRemoveDeleteMenuHelper((__int64)v20, a2, a3, 0);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v9);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v7;
}
