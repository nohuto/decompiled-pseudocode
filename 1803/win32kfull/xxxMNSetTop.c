/*
 * XREFs of xxxMNSetTop @ 0x1C01E911C
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C01E4978 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     xxxInvalidateRect @ 0x1C01E3E10 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C0208444 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
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
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD v30[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v31; // [rsp+58h] [rbp+7h]
  _QWORD v32[3]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v33[4]; // [rsp+78h] [rbp+27h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v30, *(_QWORD *)(**a1 + 40));
  v31 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v30[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v30[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v30[0] + 116LL) )
    goto LABEL_32;
  if ( v31 )
    v5 = v31;
  else
    v5 = *(_QWORD *)v30[0];
  MNGetpItemFromIndex(v5, *(_DWORD *)(v5 + 116));
  if ( !v6 )
    v6 = *(_QWORD *)v30[0];
  v7 = MNGetpItemFromIndex(v6, a2);
  if ( !v8 || !v7 )
    goto LABEL_32;
  v9 = 1;
  v10 = *(_DWORD *)(*(_QWORD *)v8 + 68LL) - *(_DWORD *)(*(_QWORD *)v7 + 68LL);
  v11 = *(_DWORD *)(*(_QWORD *)v30[0] + 124LL);
  if ( (v11 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v30[0] + 124LL) = v11 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v12 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v11 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v30[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v30[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
    {
      v12 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v12);
    }
  }
LABEL_21:
  v13 = *(_QWORD *)(**a1 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v32[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v32;
  v32[1] = v13;
  if ( v13 )
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
  v16 = v31;
  if ( !v31 )
    v16 = *(_QWORD *)v30[0];
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v33[0] = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = v33;
  v33[1] = v16;
  if ( v16 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
  v18 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v10) <= *(_DWORD *)(*(_QWORD *)v30[0] + 68LL) )
    xxxScrollWindowEx(v18, 0LL, (struct tagRECT *)v10, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v18, 0LL, 1);
  v22 = ThreadUnlock1(v20, v19, v21);
  v31 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v30, v22);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
  {
    ThreadUnlock1(v24, v23, v25);
LABEL_32:
    v9 = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(*(_QWORD *)v30[0] + 116LL) = a2;
  v27 = *(_QWORD *)v30[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v27 + 120) )
      goto LABEL_41;
    *(_DWORD *)(*(_QWORD *)v30[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v28 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v27 + 124) = *(_DWORD *)(v27 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v28 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v28);
LABEL_41:
  v29 = *(_QWORD *)v30[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
  {
    v29 = **a1;
    if ( *(_QWORD *)(v29 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)v32);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v29, v23, v25);
LABEL_33:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v30, v4);
  return v9;
}
