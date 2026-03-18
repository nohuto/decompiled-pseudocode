/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C0231DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C024650C (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD v33[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v34; // [rsp+30h] [rbp-40h]
  __int64 v35; // [rsp+38h] [rbp-38h] BYREF
  __int64 v36; // [rsp+40h] [rbp-30h]
  __int64 v37; // [rsp+48h] [rbp-28h]
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  __int64 v39; // [rsp+58h] [rbp-18h]
  __int64 v40; // [rsp+60h] [rbp-10h]
  __int64 v41; // [rsp+A0h] [rbp+30h] BYREF

  v41 = a3;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v5 = 1;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v8 = -1;
      goto LABEL_26;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v35 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v35;
  v36 = v7;
  if ( v7 )
    HMLockObject(v7);
  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v34 = 0LL;
  v9 = ValidateHmenu(a2);
  v34 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v33, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
  {
    v8 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 472) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) + 472);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v15,
                                                                                   v14,
                                                                                   v16) >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v20 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          v21 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2 && (v20 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v18, v19) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24) & 0x20000000) == 0 )
          {
            v5 = 0;
          }
          if ( v21 != v5 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&v41, &v41, v7, 0LL);
        }
      }
    }
    v25 = v34;
    if ( !v34 )
      v25 = *(_QWORD *)v33[0];
    v38 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v38;
    v39 = v25;
    HMLockObject(v25);
    v8 = xxxMenuItemFromPoint(v7, v33, v41);
    ThreadUnlock1(v27, v26, v28);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v10, v11);
  ThreadUnlock1(v30, v29, v31);
LABEL_26:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
