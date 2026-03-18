/*
 * XREFs of MNGetPopupFromMenu @ 0x1C012D050
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0245EA0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 */

_DWORD *__fastcall MNGetPopupFromMenu(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
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
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, (_DWORD)a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v20 = 0LL;
  v19 = (__int64 *)gSmartObjNullRef;
  v20 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v20;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 600LL);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 8) & 4) != 0 )
      {
        if ( a2 )
          *a2 = v10;
        for ( i = *(_QWORD *)v10; ; i = *(_QWORD *)(v12 + 8) )
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
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, (_DWORD)v6) )
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
  v17 = *(_QWORD **)(v15 + 1472);
  if ( v17 )
    *(_QWORD *)(v15 + 1472) = *v17;
  return v13;
}
