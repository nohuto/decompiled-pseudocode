/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C0039F88
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1C00C3104 (xxxMNCanClose.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxGetSysMenuOffset @ 0x1C01FBD50 (xxxGetSysMenuOffset.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01085F8 (xxxLoadSysDesktopMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
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
  __int64 v11; // rdx
  __int64 SysDesktopMenu; // rdx
  __int64 v13; // rbx
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rax
  _QWORD *v17; // rcx
  __int64 *v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v20 = 0LL;
  v19 = (__int64 *)gSmartObjNullRef;
  v20 = *(_QWORD *)(v3 + 1456);
  *(_QWORD *)(v3 + 1456) = &v20;
  v8 = a1[5];
  v21 = 0LL;
  v9 = (*(_BYTE *)(v8 + 30) & 8) == 0;
  v21 = 0LL;
  if ( v9 )
  {
    SysDesktopMenu = 0LL;
    goto LABEL_19;
  }
  v10 = a1[17];
  if ( v10 == *v19 )
    goto LABEL_34;
  if ( v19 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v19 + 2) )
  {
    if ( *((_BYTE *)v19 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v19);
  }
  if ( v10 )
  {
    v19 = *(__int64 **)(v10 + 152);
    ++*((_DWORD *)v19 + 2);
  }
  else
  {
    v19 = (__int64 *)gSmartObjNullRef;
  }
  if ( !v21 )
  {
LABEL_34:
    if ( *v19 )
    {
LABEL_21:
      v13 = *v19;
      goto LABEL_22;
    }
    v11 = *(_QWORD *)(a1[3] + 56LL);
    v21 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v19, v11);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v19) )
    {
      v6 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v21 = 0LL;
LABEL_19:
        SmartObjStackRefBase<tagMENU>::operator=(&v19, SysDesktopMenu);
      }
    }
  }
  v13 = v21;
  if ( !v21 )
    goto LABEL_21;
LABEL_22:
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
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
