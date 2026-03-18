/*
 * XREFs of NtUserDeleteMenu @ 0x1C00ECC00
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h]
  _QWORD v25[3]; // [rsp+38h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v9 = 0;
  v23 = 0LL;
  v22 = (__int64 *)gSmartObjNullRef;
  v23 = *(_QWORD *)(ThreadWin32Thread + 1456);
  *(_QWORD *)(ThreadWin32Thread + 1456) = &v23;
  v24 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v8);
  }
  else
  {
    v10 = ValidateHmenu(a1);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v22, v10);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v22)
      && (*(_DWORD *)(*(_QWORD *)(*v22 + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v22 + 40) + 40LL) & 0x200) == 0 )
    {
      v12 = v24;
      if ( !v24 )
        v12 = *v22;
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
      v25[0] = *(_QWORD *)(v13 + 408);
      *(_QWORD *)(v13 + 408) = v25;
      v25[1] = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v9 = xxxRemoveDeleteMenuHelper((__int64)&v22, a2, a3, 1u);
      ThreadUnlock1(v15, v14, v16);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v22, v11);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v9;
}
