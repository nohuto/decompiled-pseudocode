/*
 * XREFs of MNLookUpItem @ 0x1C0021208
 * Callers:
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetMenuItemInfo @ 0x1C00A5F5C (xxxSetMenuItemInfo.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00A686C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00A6910 (_SetMenuDefaultItem.c)
 *     _GetMenuState @ 0x1C00BC924 (_GetMenuState.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015293C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01529CC (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall MNLookUpItem(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v7; // r14
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  int v16; // r12d
  __int64 v17; // r10
  __int64 v18; // rax
  struct _KTHREAD *v19; // rdi
  __int64 v20; // rbx
  __int64 *v21; // rax
  _QWORD *v22; // rcx
  __int64 *v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v25 = 0LL;
  v24 = (__int64 *)gSmartObjNullRef;
  v25 = *(_QWORD *)(v10 + 1448);
  *(_QWORD *)(v10 + 1448) = &v25;
  v26 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_29;
  v12 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( !(_DWORD)v12 || (_DWORD)v7 == -1 )
    goto LABEL_29;
  if ( a3 )
  {
    if ( (unsigned int)v7 < (unsigned int)v12 )
    {
      v14 = *(_QWORD *)(a1 + 88) + 96 * v7;
      if ( a4 )
        *a4 = a1;
      goto LABEL_30;
    }
LABEL_29:
    v14 = 0LL;
LABEL_30:
    v15 = (_QWORD *)v14;
    goto LABEL_31;
  }
  v15 = *(_QWORD **)(a1 + 88);
  v16 = 0;
  if ( (int)v12 <= 0 )
  {
LABEL_21:
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v24) )
    {
      v9 = 0LL;
    }
    else if ( a4 )
    {
      v18 = v26;
      if ( !v26 )
        v18 = *v24;
      *a4 = v18;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    v17 = v15[2];
    v12 = *(unsigned int *)(*v15 + 8LL);
    if ( !v17 )
      break;
    if ( (_DWORD)v12 == (_DWORD)v7 )
    {
      v26 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v24);
      v17 = v15[2];
      v9 = v15;
    }
    v14 = MNLookUpItem(v17, (unsigned int)v7, 0LL, a4);
    if ( v14 )
      goto LABEL_30;
LABEL_20:
    ++v16;
    v15 += 12;
    if ( v16 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_21;
  }
  if ( (_DWORD)v12 != (_DWORD)v7 )
    goto LABEL_20;
  if ( a4 )
    *a4 = a1;
LABEL_31:
  v9 = v15;
LABEL_32:
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  if ( v24 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v24 + 2) )
  {
    if ( *((_BYTE *)v24 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v24);
  }
  v22 = *(_QWORD **)(v20 + 1448);
  if ( v22 )
    *(_QWORD *)(v20 + 1448) = *v22;
  return v9;
}
