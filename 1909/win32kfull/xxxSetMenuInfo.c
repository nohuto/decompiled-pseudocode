/*
 * XREFs of xxxSetMenuInfo @ 0x1C0129EA8
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0104630 (NtUserThunkedMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1C0128D10 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r12d
  int v7; // r13d
  int v8; // eax
  unsigned int v9; // r15d
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD v28[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+38h] [rbp-28h]
  __int64 v31; // [rsp+40h] [rbp-20h]
  _QWORD v32[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, 0LL);
  v6 = 0;
  v7 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = 1;
  if ( (v8 & 0x10) != 0 )
  {
    v6 = 1;
    v4 = (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= v4;
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( (v8 & 1) != 0 )
  {
    v6 = 1;
    v4 = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = v4;
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( (v8 & 2) != 0 )
  {
    v7 = 1;
    v4 = *(_QWORD *)(**a1 + 40LL);
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v9 = 5;
  }
  v10 = *(_DWORD *)(a2 + 4);
  if ( (v10 & 4) != 0 )
  {
    v4 = *(_QWORD *)(**a1 + 40LL);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(a2 + 24);
    v10 = *(_DWORD *)(a2 + 4);
  }
  if ( (v10 & 8) != 0 )
  {
    v4 = *(_QWORD *)(**a1 + 40LL);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 32);
    v10 = *(_DWORD *)(a2 + 4);
  }
  if ( v10 < 0 )
  {
    v11 = a1[2];
    v12 = 0;
    if ( !v11 )
      v11 = (_QWORD *)**a1;
    v13 = MNGetpItemFromIndex(v11, 0LL, v5);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > (unsigned int)v4 )
    {
      do
      {
        if ( !v13 )
          break;
        v14 = *(_QWORD *)(v13 + 16);
        if ( v14 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v32, v14);
          v32[2] = 0LL;
          v19 = *(_QWORD *)(v13 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
          v29 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v29;
          v30 = v19;
          if ( v19 )
            HMLockObject(v19);
          xxxSetMenuInfo(v32, a2);
          ThreadUnlock1(v24, v23, v25);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v26, v27);
        }
        v15 = a1[2];
        ++v12;
        if ( !v15 )
          v15 = (_QWORD *)**a1;
        v13 = MNGetpItemFromIndex(v15, v12, v5);
      }
      while ( v12 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
    }
  }
  if ( v6 )
  {
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
  }
  else if ( !v7 )
  {
    goto LABEL_25;
  }
  v16 = a1[2];
  if ( !v16 )
    v16 = (_QWORD *)**a1;
  v17 = MNGetPopupFromMenu(v16, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, v17);
  if ( *(_QWORD *)v28[0] )
    xxxMNUpdateShownMenu(v28, 0LL, v9);
LABEL_25:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v4, v5);
  return 1LL;
}
