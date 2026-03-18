/*
 * XREFs of xxxMNChar @ 0x1C0223788
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C015AAA0 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C0248AEC (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v6; // r12d
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  int v36; // r14d
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD v46[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v47; // [rsp+38h] [rbp-39h]
  __int64 v48; // [rsp+40h] [rbp-31h] BYREF
  __int64 v49; // [rsp+48h] [rbp-29h]
  __int64 v50; // [rsp+50h] [rbp-21h]
  __int64 v51; // [rsp+58h] [rbp-19h] BYREF
  __int64 v52; // [rsp+60h] [rbp-11h]
  __int64 v53; // [rsp+68h] [rbp-9h]
  __int64 v54; // [rsp+70h] [rbp-1h] BYREF
  __int64 v55; // [rsp+78h] [rbp+7h]
  __int64 v56; // [rsp+80h] [rbp+Fh]
  _QWORD v57[4]; // [rsp+88h] [rbp+17h] BYREF
  char v58; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v46, 0LL);
  v47 = 0LL;
  v54 = 0LL;
  v6 = 0;
  v55 = 0LL;
  v7 = 0LL;
  v56 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v8 = *(_QWORD *)(**a1 + 40);
  v47 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v46, v8);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v12 = v47;
    if ( !v47 )
      v12 = *(_QWORD *)v46[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v51 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v51;
    v52 = v12;
    if ( v12 )
      HMLockObject(v12);
    v16 = *(_QWORD *)(**a1 + 48);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), ThreadWin32Thread, v14, v15);
    v48 = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = &v48;
    v49 = v16;
    if ( v16 )
      HMLockObject(v16);
    v18 = xxxMNFindChar(v46, a3, *(unsigned int *)(**a1 + 80), &v58);
    v21 = v18;
    if ( v18 != -1 )
    {
      v22 = v18;
      while ( 1 )
      {
        v23 = v47;
        if ( !v47 )
          v23 = *(_QWORD *)v46[0];
        v24 = MNGetpItemFromIndex(v23, v21);
        if ( !v24 || (*(_DWORD *)(*(_QWORD *)v24 + 4LL) & 3) == 0 )
          break;
        v21 = xxxMNFindChar(v46, a3, v25, &v58);
        if ( v21 == v22 )
          goto LABEL_54;
      }
      v26 = v25;
      do
      {
        v27 = xxxMNFindChar(v46, a3, v25, &v58);
        v28 = v47;
        if ( !v47 )
          v28 = *(_QWORD *)v46[0];
        v29 = MNGetpItemFromIndex(v28, v27);
      }
      while ( v29 && (*(_DWORD *)(*(_QWORD *)v29 + 4LL) & 3) != 0 && v25 != v22 );
      if ( v22 == v25 || v25 == v26 )
        v6 = 1;
      if ( v26 != -1 )
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
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)&v48);
        SmartObjStackRefBase<tagMENU>::Init(v57, *(_QWORD *)(**a1 + 48));
        v57[2] = 0LL;
        v30 = xxxMNFindChar(v57, a3, 0LL, &v58);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v57, v31, v32, v33);
        if ( v30 != -1 )
        {
LABEL_59:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_55;
        }
      }
    }
    v36 = ((*(_DWORD *)**a1 & 4) << 11) | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      LOBYTE(v36) = 0;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      v37 = *(_QWORD *)(**a1 + 8);
      v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (*(_DWORD *)**a1 & 4u) << 11, v19, v20);
      v54 = *(_QWORD *)(v38 + 408);
      *(_QWORD *)(v38 + 408) = &v54;
      v55 = v37;
      HMLockObject(v37);
      v7 = xxxSendMessage(*(_QWORD *)(**a1 + 8));
      ThreadUnlock1(v40, v39, v41);
    }
    v35 = v7 >> 16;
    if ( WORD1(v7) )
    {
      if ( WORD1(v7) != 1 )
      {
        v34 = (unsigned int)WORD1(v7) - 2;
        if ( WORD1(v7) == 2 )
        {
          v6 = 1;
        }
        else if ( WORD1(v7) != 3 )
        {
          goto LABEL_55;
        }
        v34 = (unsigned __int16)v7;
        v35 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v7 < *(_DWORD *)(v35 + 44) && (__int16)v7 != -1 )
        {
LABEL_48:
          xxxMNSelectItem(a1, a2);
          if ( v6 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_55:
        ThreadUnlock1(v35, v34, v19);
        ThreadUnlock1(v43, v42, v44);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v46, v9, v10, v11);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v34 = **a1, v35 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1392LL) != *(_QWORD *)(v34 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v36 & 0x10) != 0 )
        goto LABEL_55;
    }
LABEL_54:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_55;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v46, v9, v10, v11);
}
