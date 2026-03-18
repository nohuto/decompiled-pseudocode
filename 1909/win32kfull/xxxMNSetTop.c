/*
 * XREFs of xxxMNSetTop @ 0x1C02268C4
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     xxxInvalidateRect @ 0x1C0221240 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0249F5C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // r14d
  int v11; // r15d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  struct tagWND *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD v32[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v33; // [rsp+58h] [rbp+7h]
  __int64 v34; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+68h] [rbp+17h]
  __int64 v36; // [rsp+70h] [rbp+1Fh]
  __int64 v37; // [rsp+78h] [rbp+27h] BYREF
  __int64 v38; // [rsp+80h] [rbp+2Fh]
  __int64 v39; // [rsp+88h] [rbp+37h]

  SmartObjStackRefBase<tagMENU>::Init(v32, *(_QWORD *)(**a1 + 40));
  v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v32) )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v32[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v32[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v32[0] + 116LL) )
    goto LABEL_32;
  if ( v33 )
    v6 = v33;
  else
    v6 = *(_QWORD *)v32[0];
  MNGetpItemFromIndex(v6, *(_DWORD *)(v6 + 116));
  if ( !v7 )
    v7 = *(_QWORD *)v32[0];
  v8 = MNGetpItemFromIndex(v7, a2);
  if ( !v9 || !v8 )
    goto LABEL_32;
  v10 = 1;
  v11 = *(_DWORD *)(*(_QWORD *)v9 + 68LL) - *(_DWORD *)(*(_QWORD *)v8 + 68LL);
  v12 = *(_DWORD *)(*(_QWORD *)v32[0] + 124LL);
  if ( (v12 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v32[0] + 124LL) = v12 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v13 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v12 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v32[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v32[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
    {
      v13 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v13);
    }
  }
LABEL_21:
  v14 = *(_QWORD *)(**a1 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  v17 = *(_QWORD *)(ThreadWin32Thread + 408);
  v34 = v17;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
  v35 = v14;
  if ( v14 )
    HMLockObject(v14);
  v18 = v33;
  if ( !v33 )
    v18 = *(_QWORD *)v32[0];
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v16);
  v37 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v37;
  v38 = v18;
  if ( v18 )
    HMLockObject(v18);
  v20 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v11) <= *(_DWORD *)(*(_QWORD *)v32[0] + 68LL) )
    xxxScrollWindowEx(v20, 0, v11, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v20, 0LL, 1);
  v24 = ThreadUnlock1(v22, v21, v23);
  v33 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v32, v24);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v32) )
  {
    ThreadUnlock1(v26, v25, v27);
LABEL_32:
    v10 = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(*(_QWORD *)v32[0] + 116LL) = a2;
  v29 = *(_QWORD *)v32[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v29 + 120) )
      goto LABEL_41;
    *(_DWORD *)(*(_QWORD *)v32[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v30 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v29 + 124) = *(_DWORD *)(v29 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v30 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v30);
LABEL_41:
  v31 = *(_QWORD *)v32[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
  {
    v31 = **a1;
    if ( *(_QWORD *)(v31 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)&v34);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v31, v25, v27);
LABEL_33:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v4, v5);
  return v10;
}
