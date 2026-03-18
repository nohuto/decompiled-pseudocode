/*
 * XREFs of xxxMNDoubleClick @ 0x1C0224190
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025A704 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int MenuDefaultItem; // eax
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  _QWORD v39[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v40; // [rsp+48h] [rbp-39h]
  __int64 v41; // [rsp+50h] [rbp-31h] BYREF
  __int64 v42; // [rsp+58h] [rbp-29h]
  __int64 v43; // [rsp+60h] [rbp-21h]
  __int64 v44; // [rsp+68h] [rbp-19h] BYREF
  __int64 v45; // [rsp+70h] [rbp-11h]
  __int64 v46; // [rsp+78h] [rbp-9h]
  __int64 v47; // [rsp+80h] [rbp-1h] BYREF
  __int64 v48; // [rsp+88h] [rbp+7h]
  __int64 v49; // [rsp+90h] [rbp+Fh]
  int v50[12]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v39, 0LL);
  v40 = 0LL;
  memset(v50, 0, sizeof(v50));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((int)v50, 0, 0, 0, 2, 0) && (v50[2] == 514 || v50[2] == 162) )
    xxxInternalGetMessage((int)v50, 0, v50[2], v50[2], 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v40 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v39, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v39)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v11 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v12 = v11[2];
    if ( !v12 )
      break;
    v40 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v39, v12);
    v13 = v40;
    if ( !v40 )
      v13 = *(_QWORD *)v39[0];
    MenuDefaultItem = GetMenuDefaultItem(v13, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0LL, v9, v10);
    v41 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v41;
    v42 = v15;
    HMLockObject(v15);
    v17 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
    v24 = *(_QWORD *)(v21 + 408);
    v44 = v24;
    *(_QWORD *)(v21 + 408) = &v44;
    v45 = v17;
    if ( v17 )
      HMLockObject(v17);
    v25 = v40;
    if ( !v40 )
      v25 = *(_QWORD *)v39[0];
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v22, v23);
    v47 = *(_QWORD *)(v26 + 408);
    *(_QWORD *)(v26 + 408) = &v47;
    v48 = v25;
    if ( v25 )
      HMLockObject(v25);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v39,
      v4,
      a1);
    v30 = ThreadUnlock1(v28, v27, v29);
    v40 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v39, v30);
    ThreadUnlock1(v32, v31, v33);
    ThreadUnlock1(v35, v34, v36);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v39) )
    goto LABEL_28;
  v37 = v40;
  if ( !v40 )
    v37 = *(_QWORD *)v39[0];
  if ( (unsigned int)MNGetpItemIndex(v37, (__int64)v11) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v11, v4);
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v39, v8, v9, v10);
  return v6;
}
