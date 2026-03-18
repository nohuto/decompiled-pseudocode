/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0246C60
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     _GetClientRect @ 0x1C0011124 (_GetClientRect.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0221240 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 a1, __int64 a2, char a3)
{
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // esi
  int v17; // r15d
  int v18; // r12d
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // r8d
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // r10
  _QWORD v39[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v40; // [rsp+50h] [rbp-49h]
  __int64 v41; // [rsp+58h] [rbp-41h] BYREF
  struct tagWND *v42; // [rsp+60h] [rbp-39h]
  __int64 v43; // [rsp+68h] [rbp-31h]
  __int64 v44; // [rsp+70h] [rbp-29h] BYREF
  __int64 v45; // [rsp+78h] [rbp-21h]
  __int64 v46; // [rsp+80h] [rbp-19h]
  __int64 v47[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v48; // [rsp+A0h] [rbp+7h] BYREF

  v47[0] = 0LL;
  v47[1] = 0LL;
  v5 = *(struct tagWND **)(**(_QWORD **)a1 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v39, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  v41 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v41;
  v42 = v5;
  if ( v5 )
    HMLockObject(v5);
  v11 = v40;
  if ( !v40 )
    v11 = *(_QWORD *)v39[0];
  v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
  v44 = *(_QWORD *)(v12 + 408);
  *(_QWORD *)(v12 + 408) = &v44;
  v45 = v11;
  if ( v11 )
    HMLockObject(v11);
  GetClientRect((__int64)v5, (__int64)v47);
  v15 = *(_QWORD *)v39[0];
  if ( *(_DWORD *)(*(_QWORD *)v39[0] + 64LL) )
    goto LABEL_34;
  v48 = *(struct tagRECT *)v47;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v47, 12));
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v47, 8));
  v18 = *(_DWORD *)(*(_QWORD *)v39[0] + 124LL);
  xxxSendMessage((ULONG_PTR)v5);
  v19 = v40;
  if ( !v40 )
    v19 = *(_QWORD *)v39[0];
  if ( (unsigned int)MNGetpItemIndex(v19, a2) == -1 )
    goto LABEL_29;
  a3 &= ~4u;
  v15 = *(_QWORD *)v39[0];
  if ( (((unsigned __int8)v18 ^ *(_BYTE *)(*(_QWORD *)v39[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v47[1]) = v20;
  if ( !a2 )
    goto LABEL_34;
  if ( v20 != v17 )
  {
LABEL_29:
    v29 = 0LL;
LABEL_30:
    xxxInvalidateRect(v5, (__int64)v29, 1);
    goto LABEL_31;
  }
  HIDWORD(v47[1]) = *(_DWORD *)(*(_QWORD *)v39[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v39[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v47[1]) <= v16 )
    {
      v21 = v40;
      if ( !v40 )
        v21 = *(_QWORD *)v39[0];
      v22 = MNGetpItemFromIndex(v21, *(_DWORD *)(v21 + 116));
      v15 = *(_QWORD *)v22;
      v14 = (unsigned int)(v23 - *(_DWORD *)(*(_QWORD *)v22 + 68LL));
      HIDWORD(v47[0]) = v14;
      goto LABEL_40;
    }
    GetClientRect((__int64)v5, (__int64)&v48);
  }
  if ( v40 )
    v24 = v40;
  else
    v24 = *(_QWORD *)v39[0];
  v25 = MNGetpItemFromIndex(v24, *(_DWORD *)(v24 + 116));
  v15 = *(_QWORD *)v25;
  v14 = (unsigned int)(v27 - *(_DWORD *)(*(_QWORD *)v25 + 68LL));
  v48.top = v14;
  HIDWORD(v47[0]) = v14;
  if ( (int)v14 >= 0 )
  {
    v15 = *(_QWORD *)v39[0];
    if ( v48.top < *(_DWORD *)(*(_QWORD *)v39[0] + 68LL) )
    {
      xxxScrollWindowEx(v5, 0, HIDWORD(v47[1]) - v16, &v48, (struct tagRECT *)v47, 0LL, 0LL, 6);
      if ( v40 )
        v28 = v40;
      else
        v28 = *(_QWORD *)v39[0];
      if ( (unsigned int)MNGetpItemIndex(v28, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v26 = v40;
  }
LABEL_35:
  if ( (a3 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v26 )
    v26 = *(_QWORD *)v39[0];
  v36 = MNGetpItemFromIndex(v26, *(_DWORD *)(v26 + 116));
  v14 = (unsigned int)(v37 - *(_DWORD *)(*(_QWORD *)v36 + 68LL));
  HIDWORD(v47[0]) = v14;
  v15 = (unsigned int)(v14 + *(_DWORD *)(v38 + 76));
  HIDWORD(v47[1]) = v14 + *(_DWORD *)(v38 + 76);
LABEL_40:
  if ( (int)v14 >= 0 )
  {
    v15 = *(_QWORD *)v39[0];
    if ( SHIDWORD(v47[0]) < *(_DWORD *)(*(_QWORD *)v39[0] + 68LL) )
    {
      v29 = v47;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v5, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v15, v13, v14);
  ThreadUnlock1(v31, v30, v32);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v39, v33, v34);
}
