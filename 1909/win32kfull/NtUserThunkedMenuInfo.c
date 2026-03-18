/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C0104630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+48h] [rbp-50h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  _OWORD v22[3]; // [rsp+68h] [rbp-30h] BYREF

  memset(v22, 0, 0x28uLL);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v17, v4, v5);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v22[0] = *(_OWORD *)a2;
  v22[1] = *(_OWORD *)(a2 + 16);
  *(_QWORD *)&v22[2] = *(_QWORD *)(a2 + 32);
  v6 = ValidateHmenu(a1);
  v7 = 0;
  v18 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v17, v6);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v10 = v18;
    if ( !v18 )
      v10 = *(_QWORD *)v17[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
    v19 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
    v20 = v10;
    if ( v10 )
      HMLockObject(v10);
    v7 = xxxSetMenuInfo(v17, v22);
    ThreadUnlock1(v13, v12, v14);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v8, v9);
  UserSessionSwitchLeaveCrit(v15);
  return v7;
}
