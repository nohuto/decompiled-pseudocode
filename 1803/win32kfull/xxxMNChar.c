/*
 * XREFs of xxxMNChar @ 0x1C01E5D78
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C01339F0 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C0206D70 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34[8]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v36; // [rsp+40h] [rbp-41h]
  unsigned int v37; // [rsp+4Ch] [rbp-35h]
  unsigned __int64 v38; // [rsp+50h] [rbp-31h]
  _QWORD v39[3]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v40[3]; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v41[3]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v42[7]; // [rsp+A0h] [rbp+1Fh] BYREF
  char v44; // [rsp+E8h] [rbp+67h]
  int v47; // [rsp+100h] [rbp+7Fh]

  v3 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v35, 0LL);
  v4 = *v3;
  v36 = 0LL;
  v38 = 0LL;
  v47 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v35, *(_QWORD *)(*v4 + 40));
  if ( (*(_DWORD *)**v3 & 0x8000) == 0 )
  {
    v6 = v36;
    if ( !v36 )
      v6 = *(_QWORD *)v35[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v41[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v41;
    v41[1] = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v9 = *(_QWORD *)(**v3 + 48);
    v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v39[0] = *(_QWORD *)(v10 + 408);
    *(_QWORD *)(v10 + 408) = v39;
    v39[1] = v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v11 = a3;
    v12 = xxxMNFindChar(v35, a3, *(unsigned int *)(**v3 + 80), v34);
    v13 = v12;
    if ( v12 != -1 )
    {
      v14 = v12;
      while ( 1 )
      {
        v15 = v36;
        if ( !v36 )
          v15 = *(_QWORD *)v35[0];
        v16 = MNGetpItemFromIndex(v15, v13);
        if ( !v16 || (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 3) == 0 )
          break;
        v13 = xxxMNFindChar(v35, a3, v13, v34);
        if ( v13 == v14 )
          goto LABEL_15;
      }
      v37 = v13;
      do
      {
        v20 = xxxMNFindChar(v35, a3, v13, v34);
        v21 = v36;
        v13 = v20;
        if ( !v36 )
          v21 = *(_QWORD *)v35[0];
        v22 = MNGetpItemFromIndex(v21, v20);
      }
      while ( v22 && (*(_DWORD *)(*(_QWORD *)v22 + 4LL) & 3) != 0 && v13 != v14 );
      v3 = a1;
      if ( v14 == v13 || v13 == v37 )
        v47 = 1;
      v13 = v37;
      if ( v37 != -1 )
        goto LABEL_31;
      v11 = a3;
    }
    if ( (*(_DWORD *)**v3 & 1) != 0 && v11 == 32 )
    {
      if ( (*(_DWORD *)**v3 & 4) != 0 )
      {
        v47 = 1;
        goto LABEL_31;
      }
      if ( *(_QWORD *)(**v3 + 48) )
      {
LABEL_40:
        if ( (unsigned int)xxxMNSwitchToAlternateMenu(v3, a2) )
          xxxMNChar(v3, a2, a3);
        goto LABEL_33;
      }
    }
    if ( v13 != -1 )
    {
LABEL_31:
      xxxMNSelectItem(v3, a2);
      if ( v47 )
        xxxMNKeyDown(v3, a2, 13LL);
      goto LABEL_33;
    }
    if ( (*(_DWORD *)**v3 & 1) != 0 )
    {
      if ( *(_QWORD *)(**v3 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**v3 + 48), (__int64)v39);
        SmartObjStackRefBase<tagMENU>::Init(v40, *(_QWORD *)(**v3 + 48));
        v40[2] = 0LL;
        v13 = xxxMNFindChar(v40, v11, 0LL, v34);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v40, v27);
        if ( v13 != -1 )
          goto LABEL_40;
      }
    }
    v19 = 0x2000LL;
    v28 = *(_DWORD *)**v3 & 4;
    LODWORD(v29) = (*(_DWORD *)**v3 & 4) != 0 ? 0x2000 : 0;
    v44 = v29;
    if ( (*(_DWORD *)**v3 & 1) == 0 )
    {
      v28 = (unsigned int)-(int)v28;
      LODWORD(v29) = (_DWORD)v28 != 0 ? 8208 : 16;
      v44 = v29;
    }
    if ( *(_QWORD *)(**v3 + 8) )
    {
      v29 = *(_QWORD *)(**v3 + 8);
      v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28);
      v42[0] = *(_QWORD *)(v30 + 408);
      *(_QWORD *)(v30 + 408) = v42;
      v42[1] = v29;
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
      LOBYTE(v29) = v44;
      v38 = xxxSendMessage(*(_QWORD *)(**v3 + 8));
      ThreadUnlock1(v32, v31, v33);
    }
    v18 = v38 >> 16;
    if ( WORD1(v38) )
    {
      if ( WORD1(v38) != 1 )
      {
        v17 = (unsigned int)WORD1(v38) - 2;
        if ( WORD1(v38) == 2 )
        {
          v47 = 1;
        }
        else if ( WORD1(v38) != 3 )
        {
LABEL_53:
          if ( v13 != -1 )
            goto LABEL_31;
LABEL_33:
          ThreadUnlock1(v18, v17, v19);
          ThreadUnlock1(v24, v23, v25);
          return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v35, v5);
        }
        v13 = (__int16)v38;
        v18 = *(_QWORD *)(*(_QWORD *)(**v3 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v38 >= *(_DWORD *)(v18 + 44) )
          goto LABEL_33;
        goto LABEL_53;
      }
    }
    else
    {
      if ( !*(_QWORD *)(**v3 + 8)
        || (v17 = **v3, v18 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1376LL) != *(_QWORD *)(v17 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v29 & 0x10) != 0 )
        goto LABEL_33;
    }
LABEL_15:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_33;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v35, v5);
}
