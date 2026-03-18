/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0128350 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C014D6A0 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C014DB3C (xxxSetMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int128 *v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF

  v4 = a1 + 144;
  v5 = a1 + 136;
  v7 = 0LL;
  v9 = *(_QWORD *)(a1 + 8 * (a2 ^ 1LL) + 136);
  if ( v9 )
  {
    v14 = (_QWORD *)(v9 + 80);
    if ( *v14 == a1 )
      HMAssignmentUnlock(v14);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    v13 = *a3;
    *((_QWORD *)&v15 + 1) = a1;
    *(_QWORD *)&v15 = *v13 + 80LL;
    HMAssignmentLock(&v15);
  }
  v10 = a3[2];
  if ( a2 )
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 160LL) = v7;
    v11 = &v16;
    *(_QWORD *)&v15 = v5;
    *((_QWORD *)&v15 + 1) = v10;
    v16 = v15;
  }
  else
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 152LL) = v7;
    v11 = &v17;
    *(_QWORD *)&v15 = v4;
    *((_QWORD *)&v15 + 1) = v10;
    v17 = v15;
  }
  return HMAssignmentLock(v11);
}
