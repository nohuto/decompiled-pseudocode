/*
 * XREFs of NtUserDeleteMenu @ 0x1C0110010
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h] BYREF
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h]
  __int64 v30; // [rsp+48h] [rbp-8h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  v13 = 0;
  v26 = 0LL;
  v25 = (__int64 *)gSmartObjNullRef;
  v26 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v26;
  v27 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v10, v11, v12);
  }
  else
  {
    v14 = ValidateHmenu(a1);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v25, v14);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v25)
      && (*(_DWORD *)(*(_QWORD *)(*v25 + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v25 + 40) + 40LL) & 0x200) == 0 )
    {
      v18 = v27;
      if ( !v27 )
        v18 = *v25;
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
      v28 = *(_QWORD *)(v19 + 408);
      *(_QWORD *)(v19 + 408) = &v28;
      v29 = v18;
      if ( v18 )
        HMLockObject(v18);
      v13 = xxxRemoveDeleteMenuHelper((__int64)&v25, a2, a3, 1u);
      ThreadUnlock1(v21, v20, v22);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v25, v15, v16, v17);
  UserSessionSwitchLeaveCrit(v23);
  return v13;
}
