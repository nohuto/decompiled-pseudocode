/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C02323C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C0246C4C (xxxMenuItemFromPoint.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD v38[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v39; // [rsp+30h] [rbp-40h]
  __int64 v40; // [rsp+38h] [rbp-38h] BYREF
  __int64 v41; // [rsp+40h] [rbp-30h]
  __int64 v42; // [rsp+48h] [rbp-28h]
  __int64 v43; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+58h] [rbp-18h]
  __int64 v45; // [rsp+60h] [rbp-10h]
  __int64 v46; // [rsp+A0h] [rbp+30h] BYREF

  v46 = a3;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v5 = 1;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
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
  v40 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v40;
  v41 = v7;
  if ( v7 )
    HMLockObject(v7);
  SmartObjStackRefBase<tagMENU>::Init(v38, 0LL);
  v39 = 0LL;
  v9 = ValidateHmenu(a2);
  v39 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v38, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v38) )
  {
    v8 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 472) + 224LL) & 1) == 0 )
      {
        v17 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 472);
        if ( (*(_BYTE *)(v17 + 224) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v17,
                                                                                   v16,
                                                                                   v18,
                                                                                   v19) >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v24 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          v25 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2 && (v24 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v21, v22, v23) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0x20000000) == 0 )
          {
            v5 = 0;
          }
          if ( v25 != v5 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&v46, &v46, v7, 0LL);
        }
      }
    }
    v30 = v39;
    if ( !v39 )
      v30 = *(_QWORD *)v38[0];
    v43 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v43;
    v44 = v30;
    HMLockObject(v30);
    v8 = xxxMenuItemFromPoint(v7, v38, v46);
    ThreadUnlock1(v32, v31, v33);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v10, v11, v12);
  ThreadUnlock1(v35, v34, v36);
LABEL_26:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
