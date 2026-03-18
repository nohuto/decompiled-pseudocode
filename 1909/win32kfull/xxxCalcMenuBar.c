/*
 * XREFs of xxxCalcMenuBar @ 0x1C012F780
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C012F640 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C012F8A4 (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxCalcMenuBar(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  int v7; // r15d
  int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]

  v7 = a3;
  v8 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v12 = 0;
  v20 = 0LL;
  v19 = (__int64 *)gSmartObjNullRef;
  v20 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v20;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v13 = *(_QWORD *)(a1 + 40);
  v21 = 0LL;
  if ( (*(_BYTE *)(v13 + 31) & 0xC0) != 0x40 )
  {
    v10 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      SmartObjStackRefBase<tagMENU>::operator=(&v19, v10);
      v15 = v21;
      if ( !v21 )
        v15 = *v19;
      ThreadLockMenuNoModify(v15, &v22);
      xxxMenuBarCompute(&v19, a1, a4, v8, a5[2] - *a5 - v8 - v7);
      v12 = *(_DWORD *)(*v19 + 68);
      v16 = *(_QWORD *)(v23 + 40);
      *(_DWORD *)(v16 + 40) &= ~0x200u;
      ThreadUnlock1(v16, v17, v18);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v19, v10, v11);
  return v12;
}
