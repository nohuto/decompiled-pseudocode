/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00EA614
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0108550 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C012D17C (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C012DCA8 (xxxSetMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int128 *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-60h]
  __int128 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+70h] [rbp-10h] BYREF

  v5 = 0LL;
  v7 = *(_QWORD *)(a1 + 8 * (a2 ^ 1LL) + 136);
  if ( v7 )
  {
    v15 = (_QWORD *)(v7 + 80);
    if ( *v15 == a1 )
      HMAssignmentUnlock(v15);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    *((_QWORD *)&v16 + 1) = a1;
    *(_QWORD *)&v16 = **a3 + 80LL;
    v19 = v16;
    HMAssignmentLock(&v19);
  }
  v8 = a3[2];
  if ( a2 )
  {
    if ( !v8 )
      v8 = (_QWORD *)**a3;
    v13 = *(_QWORD *)(a1 + 40);
    v14 = a1 + 136;
    if ( v8 )
      v5 = v8[6];
    *(_QWORD *)(v13 + 160) = v5;
    v11 = &v20;
    *(_QWORD *)&v17 = v14;
    *((_QWORD *)&v17 + 1) = v8;
    v20 = v17;
  }
  else
  {
    if ( !v8 )
      v8 = (_QWORD *)**a3;
    v9 = *(_QWORD *)(a1 + 40);
    v10 = a1 + 144;
    if ( v8 )
      v5 = v8[6];
    *(_QWORD *)(v9 + 152) = v5;
    v11 = &v21;
    *(_QWORD *)&v18 = v10;
    *((_QWORD *)&v18 + 1) = v8;
    v21 = v18;
  }
  return HMAssignmentLock(v11);
}
