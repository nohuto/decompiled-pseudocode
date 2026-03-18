/*
 * XREFs of xxxPaintMenuBar @ 0x1C000CCE4
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C000CBF0 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D12C (xxxSendUAHMenuMessage.c)
 *     ThreadLockMenuNoModify @ 0x1C000EBFC (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C0010198 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, unsigned int a3, int a4, unsigned int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  _QWORD v31[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v32; // [rsp+40h] [rbp-40h]
  _QWORD v33[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v31, 0LL);
  v10 = *(_QWORD *)(a1 + 144);
  v11 = 0;
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v31, v10);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v31) )
  {
    v12 = v32;
    if ( !v32 )
      v12 = *(_QWORD *)v31[0];
    ThreadLockMenuNoModify(v12, v34);
    v13 = *(_QWORD *)(*(_QWORD *)v31[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v13 + 40) |= 0x10u;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v15 = *(_QWORD *)(*(_QWORD *)v31[0] + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v33[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v33;
    v33[1] = v15;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    if ( a1 != *(_QWORD *)(*(_QWORD *)v31[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v31[0] + 64LL)
      || (v19 = *(_QWORD *)v31[0], !*(_DWORD *)(*(_QWORD *)v31[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v31, a1, a5, a3, v14);
    }
    if ( gihmodUserApiHook >= 0 && v15 && (unsigned int)xxxSendUAHInitMenuMessage(v15, v31, a2) )
    {
      v20 = v32;
      if ( !v32 )
        v20 = *(_QWORD *)v31[0];
      xxxSendUAHMenuMessage(v15, 145LL, v20, a2);
    }
    ThreadUnlock1(v19, v17, v18);
    v23 = v32;
    if ( v32 )
    {
      v24 = v32;
    }
    else
    {
      v23 = 0LL;
      v24 = *(_QWORD *)v31[0];
    }
    if ( (unsigned int)MNIsUAHMenu(v24, v21, v22, v23) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 40LL) + 24LL) )
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 40LL) + 24LL);
      else
        v29 = *(_QWORD *)(gpsi + 4936LL);
      v30 = GreSelectBrush(a2, v29);
      NtGdiPatBlt(
        a2,
        a3,
        a5,
        *(unsigned int *)(*(_QWORD *)v31[0] + 64LL),
        *(_DWORD *)(*(_QWORD *)v31[0] + 68LL),
        15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v30);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v31[0] + 68LL);
    v27 = *(_QWORD *)(v35 + 40);
    *(_DWORD *)(v27 + 40) &= ~0x200u;
    ThreadUnlock1(v27, v25, v26);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31);
  return v11;
}
