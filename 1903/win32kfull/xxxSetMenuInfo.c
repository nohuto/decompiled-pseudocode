/*
 * XREFs of xxxSetMenuInfo @ 0x1C0020138
 * Callers:
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C01293D0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  int v4; // r12d
  int v5; // r13d
  int v6; // eax
  unsigned int v7; // r15d
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v23[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h]
  __int64 v26; // [rsp+40h] [rbp-20h]
  _BYTE v27[16]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, 0LL);
  v4 = 0;
  v5 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = 1;
  if ( (v6 & 0x10) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = *(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    v5 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v7 = 5;
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
    v10 = 0;
    if ( !v9 )
      v9 = (_QWORD *)**a1;
    v11 = MNGetpItemFromIndex(v9, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > v12 )
    {
      do
      {
        if ( !v11 )
          break;
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v27, v13);
          v28 = 0LL;
          v18 = *(_QWORD *)(v11 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v24 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
          v25 = v18;
          if ( v18 )
            HMLockObject(v18);
          xxxSetMenuInfo(v27, a2);
          ThreadUnlock1(v21, v20, v22);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27);
        }
        v14 = a1[2];
        ++v10;
        if ( !v14 )
          v14 = (_QWORD *)**a1;
        v11 = MNGetpItemFromIndex(v14, v10);
      }
      while ( v10 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
  }
  else if ( !v5 )
  {
    goto LABEL_25;
  }
  v15 = a1[2];
  if ( !v15 )
    v15 = (_QWORD *)**a1;
  v16 = MNGetPopupFromMenu(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, v16);
  if ( *(_QWORD *)v23[0] )
    xxxMNUpdateShownMenu(v23, 0LL, v7);
LABEL_25:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
  return 1LL;
}
