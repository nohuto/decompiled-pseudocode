/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C010D520 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C01556FC (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C0155D74 (xxxSetMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int128 *v11; // rcx
  _QWORD *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-60h]
  __int128 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF

  v4 = a1 + 168;
  v5 = a1 + 160;
  v7 = 0LL;
  v9 = *(_QWORD *)(a1 + 8 * (a2 ^ 1LL) + 160);
  if ( v9 )
  {
    v13 = (_QWORD *)(v9 + 80);
    if ( *v13 == a1 )
      HMAssignmentUnlock(v13);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    *((_QWORD *)&v14 + 1) = a1;
    *(_QWORD *)&v14 = **a3 + 80LL;
    v17 = v14;
    HMAssignmentLock(&v17);
  }
  v10 = a3[2];
  if ( a2 )
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 160LL) = v7;
    v11 = &v18;
    *(_QWORD *)&v15 = v5;
    *((_QWORD *)&v15 + 1) = v10;
    v18 = v15;
  }
  else
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 152LL) = v7;
    v11 = &v19;
    *(_QWORD *)&v16 = v4;
    *((_QWORD *)&v16 + 1) = v10;
    v19 = v16;
  }
  return HMAssignmentLock(v11);
}
