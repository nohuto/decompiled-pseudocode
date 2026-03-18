/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C022EB74
 * Callers:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     _GetClientRect @ 0x1C00BC9E8 (_GetClientRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0209CE0 (xxxInvalidateRect.c)
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
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  unsigned __int16 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // rax
  int v33; // r8d
  __int64 v34; // r10
  _QWORD v35[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v36; // [rsp+50h] [rbp-49h]
  _QWORD v37[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v38[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v39[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+A0h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(**(_QWORD **)a1 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v35, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  v37[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v37;
  v37[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v9 = v36;
  if ( !v36 )
    v9 = *(_QWORD *)v35[0];
  v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v38[0] = *(_QWORD *)(v10 + 416);
  *(_QWORD *)(v10 + 416) = v38;
  v38[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  GetClientRect(v5, (__m128i *)v39);
  v12 = *(_QWORD *)v35[0];
  if ( *(_DWORD *)(*(_QWORD *)v35[0] + 64LL) )
    goto LABEL_34;
  v40 = *(struct tagRECT *)v39;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 12));
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v39, 8));
  v15 = *(_DWORD *)(*(_QWORD *)v35[0] + 124LL);
  xxxSendMessage(v5);
  v16 = v36;
  if ( !v36 )
    v16 = *(_QWORD *)v35[0];
  if ( (unsigned int)MNGetpItemIndex(v16, a2) == -1 )
    goto LABEL_29;
  a3 &= ~4u;
  v12 = *(_QWORD *)v35[0];
  if ( (((unsigned __int8)v15 ^ *(_BYTE *)(*(_QWORD *)v35[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v39[1]) = v17;
  if ( !a2 )
    goto LABEL_34;
  if ( v17 != v14 )
  {
LABEL_29:
    v27 = 0LL;
LABEL_30:
    xxxInvalidateRect((struct tagWND *)v5, (__int64)v27, 1);
    goto LABEL_31;
  }
  HIDWORD(v39[1]) = *(_DWORD *)(*(_QWORD *)v35[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v35[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v39[1]) <= v13 )
    {
      v18 = v36;
      if ( !v36 )
        v18 = *(_QWORD *)v35[0];
      v19 = MNGetpItemFromIndex(v18, *(_DWORD *)(v18 + 116));
      v12 = *(_QWORD *)v19;
      v21 = v20 - *(_DWORD *)(*(_QWORD *)v19 + 68LL);
      HIDWORD(v39[0]) = v21;
      goto LABEL_40;
    }
    GetClientRect(v5, (__m128i *)&v40);
  }
  if ( v36 )
    v22 = v36;
  else
    v22 = *(_QWORD *)v35[0];
  v23 = MNGetpItemFromIndex(v22, *(_DWORD *)(v22 + 116));
  v12 = *(_QWORD *)v23;
  v40.top = v25 - *(_DWORD *)(*(_QWORD *)v23 + 68LL);
  HIDWORD(v39[0]) = v40.top;
  if ( v40.top >= 0 )
  {
    v12 = *(_QWORD *)v35[0];
    if ( v40.top < *(_DWORD *)(*(_QWORD *)v35[0] + 68LL) )
    {
      xxxScrollWindowEx(
        (struct tagWND *)v5,
        0LL,
        (unsigned int)(HIDWORD(v39[1]) - v13),
        &v40,
        (struct tagRECT *)v39,
        0LL,
        0LL,
        6);
      if ( v36 )
        v26 = v36;
      else
        v26 = *(_QWORD *)v35[0];
      if ( (unsigned int)MNGetpItemIndex(v26, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v24 = v36;
  }
LABEL_35:
  if ( (a3 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v24 )
    v24 = *(_QWORD *)v35[0];
  v32 = MNGetpItemFromIndex(v24, *(_DWORD *)(v24 + 116));
  v21 = v33 - *(_DWORD *)(*(_QWORD *)v32 + 68LL);
  HIDWORD(v39[0]) = v21;
  v12 = (unsigned int)(v21 + *(_DWORD *)(v34 + 76));
  HIDWORD(v39[1]) = v21 + *(_DWORD *)(v34 + 76);
LABEL_40:
  if ( v21 >= 0 )
  {
    v12 = *(_QWORD *)v35[0];
    if ( SHIDWORD(v39[0]) < *(_DWORD *)(*(_QWORD *)v35[0] + 68LL) )
    {
      v27 = v39;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v12, v11);
  ThreadUnlock1(v29, v28);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v35, v30);
}
