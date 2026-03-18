/*
 * XREFs of MNGetPopupFromMenu @ 0x1C002196C
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0204D38 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 */

_DWORD *__fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 i; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rbx
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rax
  _QWORD *v17; // rcx
  __int64 *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+28h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v20 = 0LL;
  v19 = (__int64 *)gSmartObjNullRef;
  v20 = *(_QWORD *)(v5 + 1456);
  *(_QWORD *)(v5 + 1456) = &v20;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    v10 = *(__int64 **)(*(_QWORD *)(v9 + 16) + 600LL);
    if ( v10 )
    {
      if ( (v10[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v10;
        for ( i = *v10; ; i = *(_QWORD *)(v12 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v19, i);
          if ( !*v19 )
            break;
          v7 = (_DWORD *)*v19;
          if ( *(_QWORD *)(*v19 + 40) == a1 )
          {
            v6 = (_DWORD *)*v19;
            if ( (*(_DWORD *)*v19 & 1) != 0 )
              break;
            MNAnimate(v10, 0LL);
            v13 = (_DWORD *)*v19;
            goto LABEL_18;
          }
          v7 = (_DWORD *)*v19;
          if ( !*(_QWORD *)(*v19 + 24) )
            break;
          v12 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*v19 + 24));
          if ( !v12 )
            break;
        }
      }
    }
  }
  v13 = 0LL;
LABEL_18:
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
  {
    v16 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v16 )
      v15 = *v16;
  }
  if ( v19 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v19 + 2) )
  {
    if ( *((_BYTE *)v19 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v19);
  }
  v17 = *(_QWORD **)(v15 + 1456);
  if ( v17 )
    *(_QWORD *)(v15 + 1456) = *v17;
  return v13;
}
