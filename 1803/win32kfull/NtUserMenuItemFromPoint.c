/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01F2EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMenuItemFromPoint @ 0x1C020537C (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h]
  _QWORD v27[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v29 = a3;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v10 = -1;
      goto LABEL_18;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v27[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v27;
  v27[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v26 = 0LL;
  v11 = ValidateHmenu(a2);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v11);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    v10 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 472);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v14) >> 8)) & 0x1FF) != 0 )
            TransformPointBetweenCoordinateSpaces(&v29, &v29, v7, 0LL);
        }
      }
    }
    v17 = v26;
    if ( !v26 )
      v17 = *(_QWORD *)v25[0];
    v28[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v28;
    v28[1] = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v10 = xxxMenuItemFromPoint(v7, v25, v29);
    ThreadUnlock1(v19, v18, v20);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v12);
  ThreadUnlock1(v22, v21, v23);
LABEL_18:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
