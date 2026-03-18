/*
 * XREFs of NtUserDeleteMenu @ 0x1C00EB3D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 *v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+48h] [rbp-8h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  v12 = 0;
  v24 = 0LL;
  v23 = (__int64 *)gSmartObjNullRef;
  v24 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v24;
  v25 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v9, v10, v11);
  }
  else
  {
    v13 = ValidateHmenu(a1);
    v25 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v23, v13);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)&v23)
      && (*(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*v23 + 40) + 40LL) & 0x200) == 0 )
    {
      v16 = v25;
      if ( !v25 )
        v16 = *v23;
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
      v26 = *(_QWORD *)(v17 + 408);
      *(_QWORD *)(v17 + 408) = &v26;
      v27 = v16;
      if ( v16 )
        HMLockObject(v16);
      v12 = xxxRemoveDeleteMenuHelper(&v23, a2, a3, 1LL);
      ThreadUnlock1(v19, v18, v20);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v23, v14, v15);
  UserSessionSwitchLeaveCrit(v21);
  return v12;
}
