/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C014FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v17[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  _QWORD v19[3]; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v21; // [rsp+88h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17, v4);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v20[0] = *(_OWORD *)a2;
  v20[1] = *(_OWORD *)(a2 + 16);
  v21 = *(_QWORD *)(a2 + 32);
  v5 = ValidateHmenu(a1);
  v6 = 0;
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17, v5);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    && (*(_DWORD *)(*(_QWORD *)(*v17[0] + 40) + 40LL) & 0x40) == 0 )
  {
    v8 = v18;
    if ( !v18 )
      v8 = *v17[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v19;
    v19[1] = v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = xxxSetMenuInfo(v17, (__int64)v20);
    ThreadUnlock1(v11, v10);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v7);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v6;
}
