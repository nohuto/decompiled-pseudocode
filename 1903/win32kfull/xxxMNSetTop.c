/*
 * XREFs of xxxMNSetTop @ 0x1C0226E04
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     xxxInvalidateRect @ 0x1C0221780 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, signed int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // r15d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  struct tagWND *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  _QWORD v33[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v34; // [rsp+58h] [rbp+7h]
  __int64 v35; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+68h] [rbp+17h]
  __int64 v37; // [rsp+70h] [rbp+1Fh]
  __int64 v38; // [rsp+78h] [rbp+27h] BYREF
  __int64 v39; // [rsp+80h] [rbp+2Fh]
  __int64 v40; // [rsp+88h] [rbp+37h]

  SmartObjStackRefBase<tagMENU>::Init(v33, *(_QWORD *)(**a1 + 40));
  v34 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_QWORD *)v33[0] + 120LL) )
      a2 = *(_DWORD *)(*(_QWORD *)v33[0] + 120LL);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_QWORD *)v33[0] + 116LL) )
    goto LABEL_32;
  if ( v34 )
    v7 = v34;
  else
    v7 = *(_QWORD *)v33[0];
  MNGetpItemFromIndex(v7, *(_DWORD *)(v7 + 116));
  if ( !v8 )
    v8 = *(_QWORD *)v33[0];
  v9 = MNGetpItemFromIndex(v8, a2);
  if ( !v6 || !v9 )
    goto LABEL_32;
  v10 = 1;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 68LL) - *(_DWORD *)(*(_QWORD *)v9 + 68LL);
  v12 = *(_DWORD *)(*(_QWORD *)v33[0] + 124LL);
  if ( (v12 & 3) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)v33[0] + 124LL) = v12 & 0xFFFFFFFC | 1;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 24LL) )
      goto LABEL_21;
    v13 = 4294967293LL;
    goto LABEL_20;
  }
  if ( (v12 & 3) == 3 )
  {
    *(_DWORD *)(*(_QWORD *)v33[0] + 124LL) = *(_DWORD *)(*(_QWORD *)v33[0] + 124LL) & 0xFFFFFFFC | 1;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 24LL) )
    {
      v13 = 4294967292LL;
LABEL_20:
      MNDrawArrow(0LL, a1, v13);
    }
  }
LABEL_21:
  v14 = *(_QWORD *)(**a1 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v18 = *(_QWORD *)(ThreadWin32Thread + 408);
  v35 = v18;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
  v36 = v14;
  if ( v14 )
    HMLockObject(v14);
  v19 = v34;
  if ( !v34 )
    v19 = *(_QWORD *)v33[0];
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v16, v17);
  v38 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v38;
  v39 = v19;
  if ( v19 )
    HMLockObject(v19);
  v21 = *(struct tagWND **)(**a1 + 16);
  if ( (signed int)abs32(v11) <= *(_DWORD *)(*(_QWORD *)v33[0] + 68LL) )
    xxxScrollWindowEx(v21, 0, v11, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v21, 0LL, 1);
  v25 = ThreadUnlock1(v23, v22, v24);
  v34 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v33, v25);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
  {
    ThreadUnlock1(v27, v26, v28);
LABEL_32:
    v10 = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(*(_QWORD *)v33[0] + 116LL) = a2;
  v30 = *(_QWORD *)v33[0];
  if ( a2 )
  {
    if ( a2 != *(_DWORD *)(v30 + 120) )
      goto LABEL_41;
    *(_DWORD *)(*(_QWORD *)v33[0] + 124LL) |= 3u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v31 = 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v30 + 124) = *(_DWORD *)(v30 + 124) & 0xFFFFFFFC | 2;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 24LL) )
      goto LABEL_41;
    v31 = 4294967293LL;
  }
  MNDrawArrow(0LL, a1, v31);
LABEL_41:
  v32 = *(_QWORD *)v33[0];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 24LL) )
  {
    v32 = **a1;
    if ( *(_QWORD *)(v32 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**a1 + 16), (__int64)&v35);
      xxxMNDrawFullNC(*(struct tagWND **)(**a1 + 16));
    }
  }
  ThreadUnlock1(v32, v26, v28);
LABEL_33:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v4, v5, v6);
  return v10;
}
