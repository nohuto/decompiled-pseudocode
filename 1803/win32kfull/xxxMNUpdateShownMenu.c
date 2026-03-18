/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0205A4C
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     _GetClientRect @ 0x1C00E9968 (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C01E3E10 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rdi
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // r15d
  int v16; // r12d
  __int64 v17; // rcx
  unsigned __int16 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r10
  _QWORD v36[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v37; // [rsp+50h] [rbp-49h]
  _QWORD v38[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v39[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v40[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v41; // [rsp+A0h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(**(_QWORD **)a1 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v36, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v38;
  v38[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v9 = v37;
  if ( !v37 )
    v9 = *(_QWORD *)v36[0];
  v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v39[0] = *(_QWORD *)(v10 + 408);
  *(_QWORD *)(v10 + 408) = v39;
  v39[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  GetClientRect(v5, (__int64)v40);
  v13 = *(_QWORD *)v36[0];
  if ( *(_DWORD *)(*(_QWORD *)v36[0] + 64LL) )
    goto LABEL_34;
  v41 = *(struct tagRECT *)v40;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v40, 12));
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v40, 8));
  v16 = *(_DWORD *)(*(_QWORD *)v36[0] + 124LL);
  xxxSendMessage(v5);
  v17 = v37;
  if ( !v37 )
    v17 = *(_QWORD *)v36[0];
  if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 )
    goto LABEL_29;
  a3 &= ~4u;
  v13 = *(_QWORD *)v36[0];
  if ( (((unsigned __int8)v16 ^ *(_BYTE *)(*(_QWORD *)v36[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v40[1]) = v18;
  if ( !a2 )
    goto LABEL_34;
  if ( v18 != v15 )
  {
LABEL_29:
    v27 = 0LL;
LABEL_30:
    xxxInvalidateRect((struct tagWND *)v5, (__int64)v27, 1);
    goto LABEL_31;
  }
  HIDWORD(v40[1]) = *(_DWORD *)(*(_QWORD *)v36[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v36[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v40[1]) <= v14 )
    {
      v19 = v37;
      if ( !v37 )
        v19 = *(_QWORD *)v36[0];
      v20 = MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 116));
      v13 = *(_QWORD *)v20;
      v12 = (unsigned int)(v21 - *(_DWORD *)(*(_QWORD *)v20 + 68LL));
      HIDWORD(v40[0]) = v12;
      goto LABEL_40;
    }
    GetClientRect(v5, (__int64)&v41);
  }
  if ( v37 )
    v22 = v37;
  else
    v22 = *(_QWORD *)v36[0];
  v23 = MNGetpItemFromIndex(v22, *(_DWORD *)(v22 + 116));
  v13 = *(_QWORD *)v23;
  v12 = (unsigned int)(v25 - *(_DWORD *)(*(_QWORD *)v23 + 68LL));
  v41.top = v12;
  HIDWORD(v40[0]) = v12;
  if ( (int)v12 >= 0 )
  {
    v13 = *(_QWORD *)v36[0];
    if ( v41.top < *(_DWORD *)(*(_QWORD *)v36[0] + 68LL) )
    {
      xxxScrollWindowEx(
        (struct tagWND *)v5,
        0LL,
        (struct tagRECT *)(unsigned int)(HIDWORD(v40[1]) - v14),
        &v41,
        (struct tagRECT *)v40,
        0LL,
        0LL,
        6);
      if ( v37 )
        v26 = v37;
      else
        v26 = *(_QWORD *)v36[0];
      if ( (unsigned int)MNGetpItemIndex(v26, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v24 = v37;
  }
LABEL_35:
  if ( (a3 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v24 )
    v24 = *(_QWORD *)v36[0];
  v33 = MNGetpItemFromIndex(v24, *(_DWORD *)(v24 + 116));
  v12 = (unsigned int)(v34 - *(_DWORD *)(*(_QWORD *)v33 + 68LL));
  HIDWORD(v40[0]) = v12;
  v13 = (unsigned int)(v12 + *(_DWORD *)(v35 + 76));
  HIDWORD(v40[1]) = v12 + *(_DWORD *)(v35 + 76);
LABEL_40:
  if ( (int)v12 >= 0 )
  {
    v13 = *(_QWORD *)v36[0];
    if ( SHIDWORD(v40[0]) < *(_DWORD *)(*(_QWORD *)v36[0] + 68LL) )
    {
      v27 = v40;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v13, v11, v12);
  ThreadUnlock1(v29, v28, v30);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v31);
}
