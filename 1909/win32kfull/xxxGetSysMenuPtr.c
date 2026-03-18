/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C004A6F8
 * Callers:
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxGetSysMenuOffset @ 0x1C023C640 (xxxGetSysMenuOffset.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010D5C4 (xxxLoadSysDesktopMenu.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  struct _KTHREAD *v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rax
  _QWORD *v16; // rcx
  __int64 *v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v19 = 0LL;
  v18 = (__int64 *)gSmartObjNullRef;
  v19 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v19;
  v10 = a1[5];
  v20 = 0LL;
  if ( (*(_BYTE *)(v10 + 30) & 8) == 0 )
    goto LABEL_18;
  v11 = a1[20];
  if ( v11 == *v18 )
    goto LABEL_33;
  if ( v18 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v18 + 2) )
  {
    if ( *((_BYTE *)v18 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18);
  }
  if ( v11 )
  {
    v18 = *(__int64 **)(v11 + 152);
    ++*((_DWORD *)v18 + 2);
  }
  else
  {
    v18 = (__int64 *)gSmartObjNullRef;
  }
  if ( !v20 )
  {
LABEL_33:
    if ( *v18 )
    {
LABEL_20:
      v12 = *v18;
      goto LABEL_21;
    }
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(&v18);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v18) )
    {
      v7 = gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
      {
        xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v20 = 0LL;
LABEL_18:
        SmartObjStackRefBase<tagMENU>::operator=(&v18);
      }
    }
  }
  v12 = v20;
  if ( !v20 )
    goto LABEL_20;
LABEL_21:
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8) )
  {
    v15 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v15 )
      v14 = *v15;
  }
  if ( v18 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v18 + 2) )
  {
    if ( *((_BYTE *)v18 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18);
  }
  v16 = *(_QWORD **)(v14 + 1472);
  if ( v16 )
    *(_QWORD *)(v14 + 1472) = *v16;
  return v12;
}
