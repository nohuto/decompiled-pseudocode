/*
 * XREFs of xxxPaintMenuBar @ 0x1C00FBBBC
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C00FBA90 (NtUserPaintMenuBar.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0128BAC (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C012941C (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C012F8A4 (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, unsigned int a3, int a4, unsigned int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // r15d
  __int64 v19; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  _QWORD v32[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  __int64 v38; // [rsp+68h] [rbp-18h]
  __int64 v39; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v32, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v32) )
  {
    v14 = v33;
    if ( !v33 )
      v14 = *(_QWORD *)v32[0];
    ThreadLockMenuNoModify(v14, &v37);
    v17 = *(_QWORD *)(*(_QWORD *)v32[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v17 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v17 + 40) |= 0x10u;
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v19 = *(_QWORD *)(*(_QWORD *)v32[0] + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16);
    v34 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
    v35 = v19;
    if ( v19 )
      HMLockObject(v19);
    if ( a1 != *(_QWORD *)(*(_QWORD *)v32[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v32[0] + 64LL)
      || (v23 = *(_QWORD *)v32[0], !*(_DWORD *)(*(_QWORD *)v32[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v32, a1, a5, a3, v18);
    }
    if ( gihmodUserApiHook >= 0 && v19 && (unsigned int)xxxSendUAHInitMenuMessage(v19, v32, a2) )
    {
      v24 = v33;
      if ( !v33 )
        v24 = *(_QWORD *)v32[0];
      xxxSendUAHMenuMessage(v19, 145LL, v24, a2);
    }
    ThreadUnlock1(v23, v21, v22);
    if ( v33 )
      v25 = v33;
    else
      v25 = *(_QWORD *)v32[0];
    if ( (unsigned int)MNIsUAHMenu(v25) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL);
      else
        v30 = *(_QWORD *)(gpsi + 4936LL);
      v31 = GreSelectBrush(a2, v30);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v32[0] + 64LL), *(_DWORD *)(*(_QWORD *)v32[0] + 68LL), 15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v31);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v32[0] + 68LL);
    v28 = *(_QWORD *)(v38 + 40);
    *(_DWORD *)(v28 + 40) &= ~0x200u;
    ThreadUnlock1(v28, v26, v27);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v12, v13);
  return v11;
}
