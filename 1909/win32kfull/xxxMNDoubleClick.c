/*
 * XREFs of xxxMNDoubleClick @ 0x1C0223C50
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C0259FC4 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int MenuDefaultItem; // eax
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  _QWORD v36[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v37; // [rsp+48h] [rbp-39h]
  __int64 v38; // [rsp+50h] [rbp-31h] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h]
  __int64 v40; // [rsp+60h] [rbp-21h]
  __int64 v41; // [rsp+68h] [rbp-19h] BYREF
  __int64 v42; // [rsp+70h] [rbp-11h]
  __int64 v43; // [rsp+78h] [rbp-9h]
  __int64 v44; // [rsp+80h] [rbp-1h] BYREF
  __int64 v45; // [rsp+88h] [rbp+7h]
  __int64 v46; // [rsp+90h] [rbp+Fh]
  int v47[12]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v36, 0LL);
  v37 = 0LL;
  memset(v47, 0, sizeof(v47));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((int)v47, 0, 0, 0, 2, 0) && (v47[2] == 514 || v47[2] == 162) )
    xxxInternalGetMessage((int)v47, 0, v47[2], v47[2], 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v36, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v36)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v10 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v11 = v10[2];
    if ( !v11 )
      break;
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v36, v11);
    v12 = v37;
    if ( !v37 )
      v12 = *(_QWORD *)v36[0];
    MenuDefaultItem = GetMenuDefaultItem(v12, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0LL, v9);
    v38 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v38;
    v39 = v14;
    HMLockObject(v14);
    v16 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18);
    v21 = *(_QWORD *)(v19 + 408);
    v41 = v21;
    *(_QWORD *)(v19 + 408) = &v41;
    v42 = v16;
    if ( v16 )
      HMLockObject(v16);
    v22 = v37;
    if ( !v37 )
      v22 = *(_QWORD *)v36[0];
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v20);
    v44 = *(_QWORD *)(v23 + 408);
    *(_QWORD *)(v23 + 408) = &v44;
    v45 = v22;
    if ( v22 )
      HMLockObject(v22);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v36,
      v4,
      a1);
    v27 = ThreadUnlock1(v25, v24, v26);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v36, v27);
    ThreadUnlock1(v29, v28, v30);
    ThreadUnlock1(v32, v31, v33);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v36) )
    goto LABEL_28;
  v34 = v37;
  if ( !v37 )
    v34 = *(_QWORD *)v36[0];
  if ( (unsigned int)MNGetpItemIndex(v34, (__int64)v10) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v10, v4);
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v8, v9);
  return v6;
}
