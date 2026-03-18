/*
 * XREFs of MNLookUpItem @ 0x1C00A9B2C
 * Callers:
 *     _GetMenuState @ 0x1C000C488 (_GetMenuState.c)
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C001FEA0 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0159780 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0159810 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall MNLookUpItem(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v6; // r13d
  __int64 v7; // r14
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  int v18; // r12d
  __int64 v19; // r10
  __int64 v20; // rax
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  __int64 *v23; // rax
  _QWORD *v24; // rcx
  __int64 *v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h] BYREF
  __int64 v28; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v27 = 0LL;
  v26 = (__int64 *)gSmartObjNullRef;
  v27 = *(_QWORD *)(v10 + 1472);
  *(_QWORD *)(v10 + 1472) = &v27;
  v28 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_29;
  v12 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( !(_DWORD)v12 || (_DWORD)v7 == -1 )
    goto LABEL_29;
  if ( v6 )
  {
    if ( (unsigned int)v7 < (unsigned int)v12 )
    {
      v16 = *(_QWORD *)(a1 + 88) + 96 * v7;
      if ( a4 )
        *a4 = a1;
      goto LABEL_30;
    }
LABEL_29:
    v16 = 0LL;
LABEL_30:
    v17 = (_QWORD *)v16;
    goto LABEL_31;
  }
  v17 = *(_QWORD **)(a1 + 88);
  v18 = 0;
  if ( (int)v12 <= 0 )
  {
LABEL_21:
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v26) )
    {
      v9 = 0LL;
    }
    else if ( a4 )
    {
      v20 = v28;
      if ( !v28 )
        v20 = *v26;
      *a4 = v20;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    v19 = v17[2];
    v12 = *(unsigned int *)(*v17 + 8LL);
    if ( !v19 )
      break;
    if ( (_DWORD)v12 == (_DWORD)v7 )
    {
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v26, a1);
      v19 = v17[2];
      v9 = v17;
    }
    v16 = MNLookUpItem(v19, (unsigned int)v7, 0LL, a4);
    if ( v16 )
      goto LABEL_30;
LABEL_20:
    ++v18;
    v17 += 12;
    if ( v18 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_21;
  }
  if ( (_DWORD)v12 != (_DWORD)v7 )
    goto LABEL_20;
  if ( a4 )
    *a4 = a1;
LABEL_31:
  v9 = v17;
LABEL_32:
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13, v14) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v23 )
      v22 = *v23;
  }
  if ( v26 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v26 + 2) )
  {
    if ( *((_BYTE *)v26 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v26);
  }
  v24 = *(_QWORD **)(v22 + 1472);
  if ( v24 )
    *(_QWORD *)(v22 + 1472) = *v24;
  return v9;
}
