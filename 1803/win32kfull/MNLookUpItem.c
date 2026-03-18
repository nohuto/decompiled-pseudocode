/*
 * XREFs of MNLookUpItem @ 0x1C0039D7C
 * Callers:
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     _GetMenuState @ 0x1C000B0C4 (_GetMenuState.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     xxxSetMenuItemInfo @ 0x1C006B998 (xxxSetMenuItemInfo.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00C2838 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00C2978 (_SetMenuDefaultItem.c)
 *     xxxMNCanClose @ 0x1C00C3104 (xxxMNCanClose.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C01307FC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C013088C (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall MNLookUpItem(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // r8d
  __int64 v13; // r10
  __int64 v14; // rax
  struct _KTHREAD *v15; // rsi
  __int64 v16; // rbx
  __int64 *v17; // rax
  _QWORD *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+28h]
  int v24; // [rsp+70h] [rbp+28h]
  unsigned int v25; // [rsp+78h] [rbp+30h]
  _QWORD *v27; // [rsp+88h] [rbp+40h]

  v25 = a2;
  v27 = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v21 = 0LL;
  v20 = gSmartObjNullRef;
  v21 = *(_QWORD *)(v6 + 1456);
  *(_QWORD *)(v6 + 1456) = &v21;
  v22 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_30;
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( !(_DWORD)v7 )
    goto LABEL_30;
  v8 = v25;
  if ( v25 == -1 )
    goto LABEL_30;
  if ( a3 )
  {
    if ( v25 < (unsigned int)v7 )
    {
      v10 = *(_QWORD *)(a1 + 88) + 96LL * v25;
      if ( a4 )
        *a4 = a1;
      goto LABEL_31;
    }
LABEL_30:
    v10 = 0LL;
LABEL_31:
    v11 = (_QWORD *)v10;
    goto LABEL_32;
  }
  v11 = *(_QWORD **)(a1 + 88);
  v12 = 0;
  v24 = 0;
  if ( (int)v7 <= 0 )
  {
LABEL_21:
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v20) )
    {
      v11 = 0LL;
    }
    else
    {
      if ( a4 )
      {
        v14 = v22;
        if ( !v22 )
          v14 = *(_QWORD *)v20;
        *a4 = v14;
      }
      v11 = v27;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    v13 = v11[2];
    v7 = *(unsigned int *)(*v11 + 8LL);
    if ( !v13 )
      break;
    if ( (_DWORD)v7 == (_DWORD)v8 )
    {
      v22 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v20, a1);
      v13 = v11[2];
      LODWORD(v8) = v25;
      v27 = v11;
    }
    v10 = MNLookUpItem(v13, (unsigned int)v8, 0LL, a4);
    if ( v10 )
      goto LABEL_31;
    v8 = v25;
    v12 = v24;
LABEL_20:
    ++v12;
    v11 += 12;
    v24 = v12;
    if ( v12 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_21;
  }
  if ( (_DWORD)v7 != (_DWORD)v8 )
    goto LABEL_20;
  if ( a4 )
    *a4 = a1;
LABEL_32:
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    v17 = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( v17 )
      v16 = *v17;
  }
  if ( v20 != gSmartObjNullRef && !--*(_DWORD *)(v20 + 8) )
  {
    if ( *(_BYTE *)(v20 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v20);
  }
  v18 = *(_QWORD **)(v16 + 1456);
  if ( v18 )
    *(_QWORD *)(v16 + 1456) = *v18;
  return v11;
}
