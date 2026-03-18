/*
 * XREFs of xxxSetMenuInfo @ 0x1C0013668
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1C006B790 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C012EC80 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxMNUpdateShownMenu @ 0x1C0205A4C (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // r10d
  int v6; // r9d
  unsigned int v7; // esi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned int v14; // r8d
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 ThreadWin32Thread; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-50h]
  _QWORD v24[2]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v25[16]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  _QWORD v27[4]; // [rsp+50h] [rbp-20h] BYREF
  int v28; // [rsp+98h] [rbp+28h]
  int v29; // [rsp+A0h] [rbp+30h]
  unsigned int v30; // [rsp+A8h] [rbp+38h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, 0LL);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  v28 = 0;
  v6 = 0;
  v23 = 0;
  v29 = 1;
  v7 = 1;
  if ( (v4 & 0x10) != 0 )
  {
    v6 = 1;
    v28 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
    v4 = *(_DWORD *)(a2 + 4);
  }
  if ( (v4 & 1) != 0 )
  {
    v6 = 1;
    v28 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = *(_DWORD *)(a2 + 12);
    v4 = *(_DWORD *)(a2 + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v23 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v7 = 5;
    v29 = v7;
  }
  v8 = *(_DWORD *)(a2 + 4);
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 48LL) = *(_DWORD *)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( (v8 & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 16LL) = *(_QWORD *)(a2 + 32);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( v8 < 0 )
  {
    v9 = a1[2];
    v30 = 0;
    if ( !v9 )
      v9 = (_QWORD *)**a1;
    v10 = MNGetpItemFromIndex(v9, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > v5 )
    {
      do
      {
        if ( !v10 )
          break;
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v25, v12);
          v26 = 0LL;
          v18 = *(_QWORD *)(v10 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v27[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v27;
          v27[1] = v18;
          if ( v18 )
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          xxxSetMenuInfo(v25, a2);
          ThreadUnlock1(v21, v20, v22);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25);
          v11 = v30;
        }
        v13 = a1[2];
        v14 = v11 + 1;
        v30 = v14;
        if ( !v13 )
          v13 = (_QWORD *)**a1;
        v10 = MNGetpItemFromIndex(v13, v14);
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
      v6 = v28;
    }
    v7 = v29;
  }
  if ( v6 )
  {
    *(_DWORD *)(**a1 + 64LL) = v5;
    *(_DWORD *)(**a1 + 68LL) = v5;
  }
  else if ( v23 == v5 )
  {
    goto LABEL_27;
  }
  v15 = a1[2];
  if ( !v15 )
    v15 = (_QWORD *)**a1;
  v16 = MNGetPopupFromMenu(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, v16);
  if ( *(_QWORD *)v24[0] )
    xxxMNUpdateShownMenu(v24, 0LL, v7);
LABEL_27:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24);
  return 1LL;
}
