/*
 * XREFs of NtUserEnableMenuItem @ 0x1C01351D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
  v22 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7, v8);
LABEL_8:
    v15 = -1;
    goto LABEL_7;
  }
  v9 = ValidateHmenu(a1);
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v21, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21)
    || (*(_DWORD *)(*(_QWORD *)(*v21[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v13 = v22;
  if ( !v22 )
    v13 = *v21[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v23 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
  v24 = v13;
  HMLockObject(v13);
  v15 = xxxEnableMenuItem(v21, a2, a3);
  ThreadUnlock1(v17, v16, v18);
LABEL_7:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v10, v11, v12);
  UserSessionSwitchLeaveCrit(v19);
  return v15;
}
