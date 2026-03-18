/*
 * XREFs of xxxCalcMenuBar @ 0x1C00FC000
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C00FBEC0 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C00FC34C (ThreadLockMenuNoModify.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v6; // r14d
  int v7; // r15d
  int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+58h] [rbp-8h]

  v6 = a4;
  v7 = a3;
  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = 0;
  v21 = 0LL;
  v20 = (__int64 *)gSmartObjNullRef;
  v13 = *(_QWORD *)(ThreadWin32Thread + 1472);
  v21 = v13;
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v21;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v14 = *(_QWORD *)(a1 + 40);
  v22 = 0LL;
  if ( (*(_BYTE *)(v14 + 31) & 0xC0) != 0x40 )
  {
    v10 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      SmartObjStackRefBase<tagMENU>::operator=(&v20, v10);
      v16 = v22;
      if ( !v22 )
        v16 = *v20;
      ThreadLockMenuNoModify(v16, &v23);
      xxxMenuBarCompute((unsigned int)&v20, a1, v6, v8, a5[2] - *a5 - v8 - v7);
      v12 = *(_DWORD *)(*v20 + 68);
      v17 = *(_QWORD *)(v24 + 40);
      *(_DWORD *)(v17 + 40) &= ~0x200u;
      ThreadUnlock1(v17, v18, v19);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v20, v10, v11, v13);
  return v12;
}
