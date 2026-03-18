/*
 * XREFs of NtUserEnableMenuItem @ 0x1C012A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v21[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
  v22 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7, v8);
LABEL_8:
    v13 = -1;
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
  v11 = v22;
  if ( !v22 )
    v11 = *v21[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
  v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v23;
  v23[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v13 = xxxEnableMenuItem(v21, a2, a3);
  ThreadUnlock1(v15, v14);
LABEL_7:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v10);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v13;
}
