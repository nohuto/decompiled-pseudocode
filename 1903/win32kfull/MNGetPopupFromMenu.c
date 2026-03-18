/*
 * XREFs of MNGetPopupFromMenu @ 0x1C0020C18
 * Callers:
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0020A88 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02465E0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 */

_DWORD *__fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 i; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rbx
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rax
  _QWORD *v21; // rcx
  __int64 *v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+28h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v24 = 0LL;
  v23 = (__int64 *)gSmartObjNullRef;
  v24 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = &v24;
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
  {
    v14 = *(__int64 **)(*(_QWORD *)(v13 + 16) + 600LL);
    if ( v14 )
    {
      if ( (v14[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v14;
        for ( i = *v14; ; i = *(_QWORD *)(v16 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v23, i);
          if ( !*v23 )
            break;
          v9 = (_DWORD *)*v23;
          if ( *(_QWORD *)(*v23 + 40) == a1 )
          {
            v8 = (_DWORD *)*v23;
            if ( (*(_DWORD *)*v23 & 1) != 0 )
              break;
            MNAnimate(v14, 0LL);
            v17 = (_DWORD *)*v23;
            goto LABEL_18;
          }
          v9 = (_DWORD *)*v23;
          if ( !*(_QWORD *)(*v23 + 24) )
            break;
          v16 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*v23 + 24));
          if ( !v16 )
            break;
        }
      }
    }
  }
  v17 = 0LL;
LABEL_18:
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v20 )
      v19 = *v20;
  }
  if ( v23 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v23 + 2) )
  {
    if ( *((_BYTE *)v23 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v23);
  }
  v21 = *(_QWORD **)(v19 + 1472);
  if ( v21 )
    *(_QWORD *)(v19 + 1472) = *v21;
  return v17;
}
