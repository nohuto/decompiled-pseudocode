/*
 * XREFs of xxxSetMenuInfo @ 0x1C00AAED0
 * Callers:
 *     xxxLoadSysMenu @ 0x1C00A5D4C (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C014FBF0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 **a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // r12d
  int v7; // r13d
  unsigned int v8; // r15d
  int v9; // eax
  __int64 *v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD v24[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = 1;
    v4 = (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL)) & 0xFC000000;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) ^= v4;
    v5 = *(_DWORD *)(a2 + 4);
  }
  if ( (v5 & 1) != 0 )
  {
    v6 = 1;
    v4 = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 52LL) = v4;
    v5 = *(_DWORD *)(a2 + 4);
  }
  if ( (v5 & 2) != 0 )
  {
    v7 = 1;
    v4 = *(_QWORD *)(**a1 + 40);
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124) & 3) != 0 )
      v8 = 5;
  }
  v9 = *(_DWORD *)(a2 + 4);
  if ( (v9 & 4) != 0 )
  {
    v4 = *(_QWORD *)(**a1 + 40);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 4);
  }
  if ( (v9 & 8) != 0 )
  {
    v4 = *(_QWORD *)(**a1 + 40);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(a2 + 4);
  }
  if ( v9 < 0 )
  {
    v10 = a1[2];
    v11 = 0;
    if ( !v10 )
      v10 = (__int64 *)**a1;
    v12 = MNGetpItemFromIndex(v10, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) > (unsigned int)v4 )
    {
      do
      {
        if ( !v12 )
          break;
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v25, v13);
          v25[2] = 0LL;
          v18 = *(_QWORD *)(v12 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
          v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v26;
          v26[1] = v18;
          if ( v18 )
            _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          xxxSetMenuInfo(v25, a2);
          ThreadUnlock1(v22, v21);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v23);
        }
        v14 = a1[2];
        ++v11;
        if ( !v14 )
          v14 = (__int64 *)**a1;
        v12 = MNGetpItemFromIndex(v14, v11);
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) );
    }
  }
  if ( v6 )
  {
    *(_DWORD *)(**a1 + 64) = 0;
    *(_DWORD *)(**a1 + 68) = 0;
  }
  else if ( !v7 )
  {
    goto LABEL_25;
  }
  v15 = (__int64)a1[2];
  if ( !v15 )
    v15 = **a1;
  v16 = MNGetPopupFromMenu(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, v16);
  if ( *(_QWORD *)v24[0] )
    xxxMNUpdateShownMenu(v24, 0LL, v8);
LABEL_25:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v4);
  return 1LL;
}
