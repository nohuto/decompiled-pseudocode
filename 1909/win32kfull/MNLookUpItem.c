/*
 * XREFs of MNLookUpItem @ 0x1C004A90C
 * Callers:
 *     _GetMenuState @ 0x1C000BD6C (_GetMenuState.c)
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C012C204 (xxxSetMenuItemInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C012DC74 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C012E394 (_SetMenuDefaultItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015A730 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C015A7C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  int v17; // r12d
  __int64 v18; // r10
  __int64 v19; // rax
  struct _KTHREAD *v20; // rdi
  __int64 v21; // rbx
  __int64 *v22; // rax
  _QWORD *v23; // rcx
  __int64 *v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v26 = 0LL;
  v25 = (__int64 *)gSmartObjNullRef;
  v26 = *(_QWORD *)(v10 + 1472);
  *(_QWORD *)(v10 + 1472) = &v26;
  v27 = 0LL;
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
      v15 = *(_QWORD *)(a1 + 88) + 96 * v7;
      if ( a4 )
        *a4 = a1;
      goto LABEL_30;
    }
LABEL_29:
    v15 = 0LL;
LABEL_30:
    v16 = (_QWORD *)v15;
    goto LABEL_31;
  }
  v16 = *(_QWORD **)(a1 + 88);
  v17 = 0;
  if ( (int)v12 <= 0 )
  {
LABEL_21:
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v25) )
    {
      v9 = 0LL;
    }
    else if ( a4 )
    {
      v19 = v27;
      if ( !v27 )
        v19 = *v25;
      *a4 = v19;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    v18 = v16[2];
    v12 = *(unsigned int *)(*v16 + 8LL);
    if ( !v18 )
      break;
    if ( (_DWORD)v12 == (_DWORD)v7 )
    {
      v27 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v25);
      v18 = v16[2];
      v9 = v16;
    }
    v15 = MNLookUpItem(v18, (unsigned int)v7, 0LL, a4);
    if ( v15 )
      goto LABEL_30;
LABEL_20:
    ++v17;
    v16 += 12;
    if ( v17 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_21;
  }
  if ( (_DWORD)v12 != (_DWORD)v7 )
    goto LABEL_20;
  if ( a4 )
    *a4 = a1;
LABEL_31:
  v9 = v16;
LABEL_32:
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v22 )
      v21 = *v22;
  }
  if ( v25 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v25 + 2) )
  {
    if ( *((_BYTE *)v25 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v25);
  }
  v23 = *(_QWORD **)(v21 + 1472);
  if ( v23 )
    *(_QWORD *)(v21 + 1472) = *v23;
  return v9;
}
