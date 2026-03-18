/*
 * XREFs of xxxCalcMenuBar @ 0x1C00A6D14
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C00A6BF0 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ThreadLockMenuNoModify @ 0x1C00A6E2C (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]
  _BYTE v20[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = 0;
  v18 = 0LL;
  v17 = (__int64 *)gSmartObjNullRef;
  v18 = *(_QWORD *)(ThreadWin32Thread + 1448);
  *(_QWORD *)(ThreadWin32Thread + 1448) = &v18;
  v12 = *(_QWORD *)(a1 + 40);
  v19 = 0LL;
  if ( (*(_BYTE *)(v12 + 31) & 0xC0) != 0x40 )
  {
    v10 = *(_QWORD *)(a1 + 144);
    if ( v10 )
    {
      v19 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v17);
      v14 = v19;
      if ( !v19 )
        v14 = *v17;
      ThreadLockMenuNoModify(v14, v20);
      xxxMenuBarCompute((unsigned int)&v17, a1, a4, v8, a5[2] - *a5 - v8 - a3);
      v11 = *(_DWORD *)(*v17 + 68);
      v15 = *(_QWORD *)(v21 + 40);
      *(_DWORD *)(v15 + 40) &= ~0x200u;
      ThreadUnlock1(v15, v16);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v17, v10);
  return v11;
}
