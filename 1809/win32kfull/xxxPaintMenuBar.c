/*
 * XREFs of xxxPaintMenuBar @ 0x1C00A6E80
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C00A6AE0 (NtUserPaintMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     ThreadLockMenuNoModify @ 0x1C00A6E2C (ThreadLockMenuNoModify.c)
 *     xxxSendUAHMenuMessage @ 0x1C00A7340 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00A8448 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD v27[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  _QWORD v29[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v30[4]; // [rsp+60h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v10 = 0;
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v27);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
  {
    v12 = v28;
    if ( !v28 )
      v12 = *(_QWORD *)v27[0];
    ThreadLockMenuNoModify(v12, v30);
    v14 = *(_QWORD *)(*(_QWORD *)v27[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v14 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v14 + 40) |= 0x10u;
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v16 = *(_QWORD *)(*(_QWORD *)v27[0] + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v29[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v29;
    v29[1] = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    if ( a1 != *(_QWORD *)(*(_QWORD *)v27[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v27[0] + 64LL)
      || (v19 = *(_QWORD *)v27[0], !*(_DWORD *)(*(_QWORD *)v27[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v27, a1, a5, a3, v15);
    }
    if ( gihmodUserApiHook >= 0 && v16 && (unsigned int)xxxSendUAHInitMenuMessage(v16, v27, a2) )
    {
      v20 = v28;
      if ( !v28 )
        v20 = *(_QWORD *)v27[0];
      xxxSendUAHMenuMessage(v16, 145LL, v20, a2);
    }
    ThreadUnlock1(v19, v18);
    if ( v28 )
      v21 = v28;
    else
      v21 = *(_QWORD *)v27[0];
    if ( (unsigned int)MNIsUAHMenu(v21) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL) )
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL);
      else
        v25 = *(_QWORD *)(gpsi + 4936LL);
      v26 = GreSelectBrush(a2, v25);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v27[0] + 64LL), *(_DWORD *)(*(_QWORD *)v27[0] + 68LL), 15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v26);
    }
    v10 = *(_DWORD *)(*(_QWORD *)v27[0] + 68LL);
    v23 = *(_QWORD *)(v30[1] + 40LL);
    *(_DWORD *)(v23 + 40) &= ~0x200u;
    ThreadUnlock1(v23, v22);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v11);
  return v10;
}
