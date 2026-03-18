/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C01293D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v19[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  _OWORD v24[3]; // [rsp+68h] [rbp-30h] BYREF

  memset(v24, 0, 0x28uLL);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v19, v4, v5, v6);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v24[0] = *(_OWORD *)a2;
  v24[1] = *(_OWORD *)(a2 + 16);
  *(_QWORD *)&v24[2] = *(_QWORD *)(a2 + 32);
  v7 = ValidateHmenu(a1);
  v8 = 0;
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v19, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v19)
    && (*(_DWORD *)(*(_QWORD *)(*v19[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v12 = v20;
    if ( !v20 )
      v12 = *v19[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v21 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
    v22 = v12;
    if ( v12 )
      HMLockObject(v12);
    v8 = xxxSetMenuInfo(v19, (__int64)v24);
    ThreadUnlock1(v15, v14, v16);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v9, v10, v11);
  UserSessionSwitchLeaveCrit(v17);
  return v8;
}
