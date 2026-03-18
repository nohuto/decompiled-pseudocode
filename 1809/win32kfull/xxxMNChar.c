/*
 * XREFs of xxxMNChar @ 0x1C020BCC8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMessageBeep @ 0x1C0154B50 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C022FEF4 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // rax
  int v7; // r12d
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // ebx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // r14d
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD v38[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v39; // [rsp+38h] [rbp-39h]
  _QWORD v40[3]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v41[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v42[3]; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v43[4]; // [rsp+88h] [rbp+17h] BYREF
  char v44; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v38, 0LL);
  v6 = *a1;
  v39 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*v6 + 40);
  v39 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v38, v9);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v11 = v39;
    if ( !v39 )
      v11 = *(_QWORD *)v38[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
    v42[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v42;
    v42[1] = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v14 = *(_QWORD *)(**a1 + 48);
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v40[0] = *(_QWORD *)(v15 + 416);
    *(_QWORD *)(v15 + 416) = v40;
    v40[1] = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v16 = xxxMNFindChar(v38, a3, *(unsigned int *)(**a1 + 80), &v44);
    v17 = v16;
    if ( v16 != -1 )
    {
      v18 = v16;
      while ( 1 )
      {
        v19 = v39;
        if ( !v39 )
          v19 = *(_QWORD *)v38[0];
        v20 = MNGetpItemFromIndex(v19, v17);
        if ( !v20 || (*(_DWORD *)(*(_QWORD *)v20 + 4LL) & 3) == 0 )
          break;
        v17 = xxxMNFindChar(v38, a3, v21, &v44);
        if ( v17 == v18 )
          goto LABEL_54;
      }
      v22 = v21;
      do
      {
        v23 = xxxMNFindChar(v38, a3, v21, &v44);
        v24 = v39;
        if ( !v39 )
          v24 = *(_QWORD *)v38[0];
        v25 = MNGetpItemFromIndex(v24, v23);
      }
      while ( v25 && (*(_DWORD *)(*(_QWORD *)v25 + 4LL) & 3) != 0 && v21 != v18 );
      if ( v18 == v21 || v21 == v22 )
        v7 = 1;
      if ( v22 != -1 )
        goto LABEL_48;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v7 = 1;
        goto LABEL_48;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)v40);
        SmartObjStackRefBase<tagMENU>::Init(v41, *(_QWORD *)(**a1 + 48));
        v41[2] = 0LL;
        v26 = xxxMNFindChar(v41, a3, 0LL, &v44);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v41, v27);
        if ( v26 != -1 )
        {
LABEL_59:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_55;
        }
      }
    }
    v30 = ((*(_DWORD *)**a1 & 4) << 11) | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      LOBYTE(v30) = 0;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      v31 = *(_QWORD *)(**a1 + 8);
      v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (*(_DWORD *)**a1 & 4u) << 11);
      v43[0] = *(_QWORD *)(v32 + 416);
      *(_QWORD *)(v32 + 416) = v43;
      v43[1] = v31;
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
      v8 = xxxSendMessage(*(_QWORD *)(**a1 + 8));
      ThreadUnlock1(v34, v33);
    }
    v29 = v8 >> 16;
    if ( WORD1(v8) )
    {
      if ( WORD1(v8) != 1 )
      {
        v28 = (unsigned int)WORD1(v8) - 2;
        if ( WORD1(v8) == 2 )
        {
          v7 = 1;
        }
        else if ( WORD1(v8) != 3 )
        {
          goto LABEL_55;
        }
        v28 = (unsigned __int16)v8;
        v29 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v8 < *(_DWORD *)(v29 + 44) && (__int16)v8 != -1 )
        {
LABEL_48:
          xxxMNSelectItem(a1, a2);
          if ( v7 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_55:
        ThreadUnlock1(v29, v28);
        ThreadUnlock1(v36, v35);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v10);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v28 = **a1, v29 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1368LL) != *(_QWORD *)(v28 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v30 & 0x10) != 0 )
        goto LABEL_55;
    }
LABEL_54:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_55;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v10);
}
