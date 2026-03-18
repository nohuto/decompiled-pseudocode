/*
 * XREFs of NtUserEnableMenuItem @ 0x1C010B760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v21 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6);
LABEL_8:
    v11 = -1;
    goto LABEL_7;
  }
  v7 = ValidateHmenu(a1);
  v21 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v20, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20)
    || (*(_DWORD *)(*(_QWORD *)(*v20[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v21;
  if ( !v21 )
    v9 = *v20[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v22;
  v22[1] = v9;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v11 = xxxEnableMenuItem(v20, a2, a3);
  ThreadUnlock1(v13, v12, v14);
LABEL_7:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v8);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v11;
}
