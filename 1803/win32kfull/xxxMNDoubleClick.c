/*
 * XREFs of xxxMNDoubleClick @ 0x1C01E6710
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C01E4978 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C022B9A8 (_GetMenuDefaultItem.c)
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
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD v33[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h]
  _QWORD v35[3]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v36[3]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v37[3]; // [rsp+80h] [rbp-1h] BYREF
  int v38[12]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v34 = 0LL;
  memset(v38, 0, sizeof(v38));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((int)v38, 0, 0, 0, 2, 0) && (v38[2] == 514 || v38[2] == 162) )
    xxxInternalGetMessage((int)v38, 0, v38[2], v38[2], 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v34 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v33, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v9 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v10 = v9[2];
    if ( !v10 )
      break;
    v34 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v33, v10);
    v11 = v34;
    if ( !v34 )
      v11 = *(_QWORD *)v33[0];
    MenuDefaultItem = GetMenuDefaultItem(v11, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v9 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0LL);
    v35[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v35;
    v35[1] = v13;
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v15 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v36[0] = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = v36;
    v36[1] = v15;
    if ( v15 )
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    v19 = v34;
    if ( !v34 )
      v19 = *(_QWORD *)v33[0];
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
    v37[0] = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = v37;
    v37[1] = v19;
    if ( v19 )
      _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v33,
      v4,
      a1);
    v24 = ThreadUnlock1(v22, v21, v23);
    v34 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v33, v24);
    ThreadUnlock1(v26, v25, v27);
    ThreadUnlock1(v29, v28, v30);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
    goto LABEL_28;
  v31 = v34;
  if ( !v34 )
    v31 = *(_QWORD *)v33[0];
  if ( (unsigned int)MNGetpItemIndex(v31, (__int64)v9) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v9, v4, 0LL);
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v8);
  return v6;
}
