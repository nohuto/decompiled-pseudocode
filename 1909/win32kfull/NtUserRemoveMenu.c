/*
 * XREFs of NtUserRemoveMenu @ 0x1C01084B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+48h] [rbp-8h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v9 = 0;
  v21 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7, v8);
  }
  else
  {
    v10 = ValidateHmenu(a1);
    v21 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v20, v10);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v20)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v13 = v21;
      if ( !v21 )
        v13 = *(_QWORD *)v20[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
      v22 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
      v23 = v13;
      if ( v13 )
        HMLockObject(v13);
      v9 = xxxRemoveDeleteMenuHelper(v20, a2, a3, 0LL);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v11, v12);
  UserSessionSwitchLeaveCrit(v18);
  return v9;
}
