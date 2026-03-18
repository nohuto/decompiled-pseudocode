/*
 * XREFs of xxxMNChar @ 0x1C0223248
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     xxxMessageBeep @ 0x1C015BA50 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C02483AC (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // r12d
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  int v32; // r14d
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD v42[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v43; // [rsp+38h] [rbp-39h]
  __int64 v44; // [rsp+40h] [rbp-31h] BYREF
  __int64 v45; // [rsp+48h] [rbp-29h]
  __int64 v46; // [rsp+50h] [rbp-21h]
  __int64 v47; // [rsp+58h] [rbp-19h] BYREF
  __int64 v48; // [rsp+60h] [rbp-11h]
  __int64 v49; // [rsp+68h] [rbp-9h]
  __int64 v50; // [rsp+70h] [rbp-1h] BYREF
  __int64 v51; // [rsp+78h] [rbp+7h]
  __int64 v52; // [rsp+80h] [rbp+Fh]
  _QWORD v53[4]; // [rsp+88h] [rbp+17h] BYREF
  char v54; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v42, 0LL);
  v43 = 0LL;
  v50 = 0LL;
  v6 = 0;
  v51 = 0LL;
  v7 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v8 = *(_QWORD *)(**a1 + 40);
  v43 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v42, v8);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v11 = v43;
    if ( !v43 )
      v11 = *(_QWORD *)v42[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
    v47 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
    v48 = v11;
    if ( v11 )
      HMLockObject(v11);
    v14 = *(_QWORD *)(**a1 + 48);
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), ThreadWin32Thread, v13);
    v44 = *(_QWORD *)(v15 + 408);
    *(_QWORD *)(v15 + 408) = &v44;
    v45 = v14;
    if ( v14 )
      HMLockObject(v14);
    v16 = xxxMNFindChar(v42, a3, *(unsigned int *)(**a1 + 80), &v54);
    v18 = v16;
    if ( v16 != -1 )
    {
      v19 = v16;
      while ( 1 )
      {
        v20 = v43;
        if ( !v43 )
          v20 = *(_QWORD *)v42[0];
        v21 = MNGetpItemFromIndex(v20, v18);
        if ( !v21 || (*(_DWORD *)(*(_QWORD *)v21 + 4LL) & 3) == 0 )
          break;
        v18 = xxxMNFindChar(v42, a3, v22, &v54);
        if ( v18 == v19 )
          goto LABEL_54;
      }
      v23 = v22;
      do
      {
        v24 = xxxMNFindChar(v42, a3, v22, &v54);
        v25 = v43;
        if ( !v43 )
          v25 = *(_QWORD *)v42[0];
        v26 = MNGetpItemFromIndex(v25, v24);
      }
      while ( v26 && (*(_DWORD *)(*(_QWORD *)v26 + 4LL) & 3) != 0 && v22 != v19 );
      if ( v19 == v22 || v22 == v23 )
        v6 = 1;
      if ( v23 != -1 )
        goto LABEL_48;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v6 = 1;
        goto LABEL_48;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)&v44);
        SmartObjStackRefBase<tagMENU>::Init(v53, *(_QWORD *)(**a1 + 48));
        v53[2] = 0LL;
        v27 = xxxMNFindChar(v53, a3, 0LL, &v54);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v53, v28, v29);
        if ( v27 != -1 )
        {
LABEL_59:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_55;
        }
      }
    }
    v32 = ((*(_DWORD *)**a1 & 4) << 11) | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      LOBYTE(v32) = 0;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      v33 = *(_QWORD *)(**a1 + 8);
      v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (*(_DWORD *)**a1 & 4u) << 11, v17);
      v50 = *(_QWORD *)(v34 + 408);
      *(_QWORD *)(v34 + 408) = &v50;
      v51 = v33;
      HMLockObject(v33);
      v7 = xxxSendMessage(*(_QWORD *)(**a1 + 8));
      ThreadUnlock1(v36, v35, v37);
    }
    v31 = v7 >> 16;
    if ( WORD1(v7) )
    {
      if ( WORD1(v7) != 1 )
      {
        v30 = (unsigned int)WORD1(v7) - 2;
        if ( WORD1(v7) == 2 )
        {
          v6 = 1;
        }
        else if ( WORD1(v7) != 3 )
        {
          goto LABEL_55;
        }
        v30 = (unsigned __int16)v7;
        v31 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v7 < *(_DWORD *)(v31 + 44) && (__int16)v7 != -1 )
        {
LABEL_48:
          xxxMNSelectItem(a1, a2);
          if ( v6 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_55:
        ThreadUnlock1(v31, v30, v17);
        ThreadUnlock1(v39, v38, v40);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v9, v10);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v30 = **a1, v31 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1392LL) != *(_QWORD *)(v30 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v32 & 0x10) != 0 )
        goto LABEL_55;
    }
LABEL_54:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_55;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v9, v10);
}
