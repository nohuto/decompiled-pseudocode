/*
 * XREFs of xxxCalcMenuBar @ 0x1C000ED5C
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C000EC50 (NtUserCalcMenuBar.c)
 * Callees:
 *     ThreadLockMenuNoModify @ 0x1C000EBFC (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v19 = 0LL;
  v18 = (__int64 *)gSmartObjNullRef;
  v19 = *(_QWORD *)(ThreadWin32Thread + 1456);
  *(_QWORD *)(ThreadWin32Thread + 1456) = &v19;
  v11 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  if ( (*(_BYTE *)(v11 + 31) & 0xC0) != 0x40 )
  {
    v12 = *(_QWORD *)(a1 + 144);
    if ( v12 )
    {
      v20 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v18, v12);
      v14 = v20;
      if ( !v20 )
        v14 = *v18;
      ThreadLockMenuNoModify(v14, v21);
      xxxMenuBarCompute((unsigned int)&v18, a1, a4, a2, a5[2] - *a5 - a2 - a3);
      v10 = *(_DWORD *)(*v18 + 68);
      v15 = *(_QWORD *)(v21[1] + 40LL);
      *(_DWORD *)(v15 + 40) &= ~0x200u;
      ThreadUnlock1(v15, v16, v17);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v18);
  return v10;
}
