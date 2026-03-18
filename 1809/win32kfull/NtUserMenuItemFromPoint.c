/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C021A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C022E474 (xxxMenuItemFromPoint.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  _QWORD v25[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  v27 = a3;
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
  v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v25;
  v25[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v24 = 0LL;
  v11 = ValidateHmenu(a2);
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v23, v11);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
  {
    v10 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 480) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 480);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v14) >> 8)) & 0x1FF) != 0 )
            TransformPointBetweenCoordinateSpaces(&v27, &v27, v7, 0LL);
        }
      }
    }
    v17 = v24;
    if ( !v24 )
      v17 = *(_QWORD *)v23[0];
    v26[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v26;
    v26[1] = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v10 = xxxMenuItemFromPoint(v7, v23, v27);
    ThreadUnlock1(v19, v18);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v12);
  ThreadUnlock1(v21, v20);
LABEL_18:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
