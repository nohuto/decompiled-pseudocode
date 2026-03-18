/*
 * XREFs of xxxMNSetTop @ 0x1C020F0B8
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C020A874 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxInvalidateRect @ 0x1C0209CE0 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD v28[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v29; // [rsp+58h] [rbp+7h]
  _QWORD v30[3]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v31[4]; // [rsp+78h] [rbp+27h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v28, *(_QWORD *)(**a1 + 40));
  v29 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v28[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v28[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v28[0] + 116LL) )
    goto LABEL_32;
  if ( v29 )
    v5 = v29;
  else
    v5 = *(_QWORD *)v28[0];
  MNGetpItemFromIndex(v5, *(_DWORD *)(v5 + 116));
  if ( !v6 )
    v6 = *(_QWORD *)v28[0];
  v7 = MNGetpItemFromIndex(v6, a2);
  if ( !v8 || !v7 )
    goto LABEL_32;
  v9 = 1;
  v10 = *(_DWORD *)(*(_QWORD *)v8 + 68LL) - *(_DWORD *)(*(_QWORD *)v7 + 68LL);
  v11 = *(_DWORD *)(*(_QWORD *)v28[0] + 124LL);
  if ( (v11 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v28[0] + 124LL) = v11 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v12 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v11 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v28[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v28[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
    {
      v12 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v12);
    }
  }
LABEL_21:
  v13 = *(_QWORD *)(**a1 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v30;
  v30[1] = v13;
  if ( v13 )
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
  v16 = v29;
  if ( !v29 )
    v16 = *(_QWORD *)v28[0];
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v31[0] = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = v31;
  v31[1] = v16;
  if ( v16 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
  v18 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v10) <= *(_DWORD *)(*(_QWORD *)v28[0] + 68LL) )
    xxxScrollWindowEx(v18, 0LL, v10, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v18, 0LL, 1);
  v21 = ThreadUnlock1(v20, v19);
  v29 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v21);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
  {
    ThreadUnlock1(v23, v22);
LABEL_32:
    v9 = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(*(_QWORD *)v28[0] + 116LL) = a2;
  v25 = *(_QWORD *)v28[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v25 + 120) )
      goto LABEL_41;
    *(_DWORD *)(*(_QWORD *)v28[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v26 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v25 + 124) = *(_DWORD *)(v25 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v26 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v26);
LABEL_41:
  v27 = *(_QWORD *)v28[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
  {
    v27 = **a1;
    if ( *(_QWORD *)(v27 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)v30);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v27, v22);
LABEL_33:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v4);
  return v9;
}
