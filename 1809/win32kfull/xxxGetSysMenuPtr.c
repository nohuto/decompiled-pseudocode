/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C0020FE8
 * Callers:
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxGetSysMenuOffset @ 0x1C02247D0 (xxxGetSysMenuOffset.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01283F8 (xxxLoadSysDesktopMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rbx
  struct _KTHREAD *v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rax
  _QWORD *v15; // rcx
  __int64 *v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v18 = 0LL;
  v17 = (__int64 *)gSmartObjNullRef;
  v18 = *(_QWORD *)(v3 + 1448);
  *(_QWORD *)(v3 + 1448) = &v18;
  v8 = a1[5];
  v19 = 0LL;
  v9 = (*(_BYTE *)(v8 + 30) & 8) == 0;
  v19 = 0LL;
  if ( v9 )
    goto LABEL_18;
  v10 = a1[17];
  if ( v10 == *v17 )
    goto LABEL_33;
  if ( v17 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v17 + 2) )
  {
    if ( *((_BYTE *)v17 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v17);
  }
  if ( v10 )
  {
    v17 = *(__int64 **)(v10 + 152);
    ++*((_DWORD *)v17 + 2);
  }
  else
  {
    v17 = (__int64 *)gSmartObjNullRef;
  }
  if ( !v19 )
  {
LABEL_33:
    if ( *v17 )
    {
LABEL_20:
      v11 = *v17;
      goto LABEL_21;
    }
    v19 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v17);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v17) )
    {
      v6 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
      {
        xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v19 = 0LL;
LABEL_18:
        SmartObjStackRefBase<tagMENU>::operator=(&v17);
      }
    }
  }
  v11 = v19;
  if ( !v19 )
    goto LABEL_20;
LABEL_21:
  v12 = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v14 )
      v13 = *v14;
  }
  if ( v17 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v17 + 2) )
  {
    if ( *((_BYTE *)v17 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v17);
  }
  v15 = *(_QWORD **)(v13 + 1448);
  if ( v15 )
    *(_QWORD *)(v13 + 1448) = *v15;
  return v11;
}
