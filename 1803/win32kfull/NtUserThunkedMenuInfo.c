/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C012EC80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v17[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  _QWORD v19[3]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v21; // [rsp+88h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v20[0] = *(_OWORD *)a2;
  v20[1] = *(_OWORD *)(a2 + 16);
  v21 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    && (*(_DWORD *)(*(_QWORD *)(*v17[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v7 = v18;
    if ( !v18 )
      v7 = *v17[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v19;
    v19[1] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v5 = xxxSetMenuInfo(v17, (__int64)v20);
    ThreadUnlock1(v10, v9, v11);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v17, v6);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v5;
}
