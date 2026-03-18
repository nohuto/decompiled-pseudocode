/*
 * XREFs of xxxMNDoubleClick @ 0x1C020C670
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C020A770 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C020A874 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C0241924 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MenuDefaultItem; // eax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD v30[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-39h]
  _QWORD v32[3]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v34[3]; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v35[12]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v31 = 0LL;
  memset(v35, 0, sizeof(v35));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((__int64)v35, 0LL, 0, 0, 2, 0) && (v35[2] == 514 || v35[2] == 162) )
    xxxInternalGetMessage((__int64)v35, 0LL, v35[2], v35[2], 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v31 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v30, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v30)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v9 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v10 = v9[2];
    if ( !v10 )
      break;
    v31 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v30, v10);
    v11 = v31;
    if ( !v31 )
      v11 = *(_QWORD *)v30[0];
    MenuDefaultItem = GetMenuDefaultItem(v11, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0LL);
    v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v32;
    v32[1] = v13;
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v15 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v33[0] = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = v33;
    v33[1] = v15;
    if ( v15 )
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    v19 = v31;
    if ( !v31 )
      v19 = *(_QWORD *)v30[0];
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
    v34[0] = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = v34;
    v34[1] = v19;
    if ( v19 )
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v30,
      v4,
      a1);
    v23 = ThreadUnlock1(v22, v21);
    v31 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v30, v23);
    ThreadUnlock1(v25, v24);
    ThreadUnlock1(v27, v26);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
    goto LABEL_28;
  v28 = v31;
  if ( !v31 )
    v28 = *(_QWORD *)v30[0];
  if ( (unsigned int)MNGetpItemIndex(v28, (__int64)v9) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v9, v4, 0LL);
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v8);
  return v6;
}
