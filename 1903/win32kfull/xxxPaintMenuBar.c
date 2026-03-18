/*
 * XREFs of xxxPaintMenuBar @ 0x1C00F912C
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C00F9000 (NtUserPaintMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F934C (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00F939C (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C00FC34C (ThreadLockMenuNoModify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, unsigned int a3, int a4, unsigned int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  _QWORD v34[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h] BYREF
  __int64 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v34, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v34, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v34) )
  {
    v15 = v35;
    if ( !v35 )
      v15 = *(_QWORD *)v34[0];
    ThreadLockMenuNoModify(v15, &v39);
    v19 = *(_QWORD *)(*(_QWORD *)v34[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v19 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v19 + 40) |= 0x10u;
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v21 = *(_QWORD *)(*(_QWORD *)v34[0] + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
    v36 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
    v37 = v21;
    if ( v21 )
      HMLockObject(v21);
    if ( a1 != *(_QWORD *)(*(_QWORD *)v34[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v34[0] + 64LL)
      || (v25 = *(_QWORD *)v34[0], !*(_DWORD *)(*(_QWORD *)v34[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v34, a1, a5, a3, v20);
    }
    if ( gihmodUserApiHook >= 0 && v21 && (unsigned int)xxxSendUAHInitMenuMessage(v21, v34, a2) )
    {
      v26 = v35;
      if ( !v35 )
        v26 = *(_QWORD *)v34[0];
      xxxSendUAHMenuMessage(v21, 145LL, v26, a2);
    }
    ThreadUnlock1(v25, v23, v24);
    if ( v35 )
      v27 = v35;
    else
      v27 = *(_QWORD *)v34[0];
    if ( (unsigned int)MNIsUAHMenu(v27) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 24LL) )
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 24LL);
      else
        v32 = *(_QWORD *)(gpsi + 4936LL);
      v33 = GreSelectBrush(a2, v32);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v34[0] + 64LL), *(_DWORD *)(*(_QWORD *)v34[0] + 68LL), 15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v33);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v34[0] + 68LL);
    v30 = *(_QWORD *)(v40 + 40);
    *(_DWORD *)(v30 + 40) &= ~0x200u;
    ThreadUnlock1(v30, v28, v29);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v34, v12, v13, v14);
  return v11;
}
