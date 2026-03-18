/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C00A9918
 * Callers:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxGetSysMenuOffset @ 0x1C023CC60 (xxxGetSysMenuOffset.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 SysDesktopMenu; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rax
  _QWORD *v21; // rcx
  __int64 *v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v24 = 0LL;
  v23 = (__int64 *)gSmartObjNullRef;
  v24 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v24;
  v12 = a1[5];
  v25 = 0LL;
  if ( (*(_BYTE *)(v12 + 30) & 8) == 0 )
  {
    v16 = 0LL;
    goto LABEL_19;
  }
  v13 = a1[20];
  if ( v13 == *v23 )
    goto LABEL_34;
  if ( v23 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v23 + 2) )
  {
    if ( *((_BYTE *)v23 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v23);
  }
  if ( v13 )
  {
    v23 = *(__int64 **)(v13 + 152);
    ++*((_DWORD *)v23 + 2);
  }
  else
  {
    v23 = (__int64 *)gSmartObjNullRef;
  }
  if ( !v25 )
  {
LABEL_34:
    if ( *v23 )
    {
LABEL_21:
      v17 = *v23;
      goto LABEL_22;
    }
    v14 = *(_QWORD *)(a1[3] + 56LL);
    v25 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v23, v14);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v23) )
    {
      v8 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v25 = 0LL;
        v16 = SysDesktopMenu;
LABEL_19:
        SmartObjStackRefBase<tagMENU>::operator=(&v23, v16);
      }
    }
  }
  v17 = v25;
  if ( !v25 )
    goto LABEL_21;
LABEL_22:
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
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
