/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C02473A0
 * Callers:
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0020A88 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetClientRect @ 0x1C0091CCC (_GetClientRect.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0221780 (xxxInvalidateRect.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 a1, __int64 a2, char a3)
{
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // esi
  int v19; // r15d
  int v20; // r12d
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // r8d
  __int64 v30; // rcx
  __int64 *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // r10
  _QWORD v42[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v43; // [rsp+50h] [rbp-49h]
  __int64 v44; // [rsp+58h] [rbp-41h] BYREF
  struct tagWND *v45; // [rsp+60h] [rbp-39h]
  __int64 v46; // [rsp+68h] [rbp-31h]
  __int64 v47; // [rsp+70h] [rbp-29h] BYREF
  __int64 v48; // [rsp+78h] [rbp-21h]
  __int64 v49; // [rsp+80h] [rbp-19h]
  __int64 v50[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v51; // [rsp+A0h] [rbp+7h] BYREF

  v50[0] = 0LL;
  v50[1] = 0LL;
  v5 = *(struct tagWND **)(**(_QWORD **)a1 + 16LL);
  SmartObjStackRefBase<tagMENU>::Init(v42, *(_QWORD *)(**(_QWORD **)a1 + 40LL));
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  v44 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v44;
  v45 = v5;
  if ( v5 )
    HMLockObject(v5);
  v13 = v43;
  if ( !v43 )
    v13 = *(_QWORD *)v42[0];
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v47 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v47;
  v48 = v13;
  if ( v13 )
    HMLockObject(v13);
  GetClientRect((__int64)v5, (__int64)v50);
  v17 = *(_QWORD *)v42[0];
  if ( *(_DWORD *)(*(_QWORD *)v42[0] + 64LL) )
    goto LABEL_34;
  v51 = *(struct tagRECT *)v50;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v50, 12));
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v50, 8));
  v20 = *(_DWORD *)(*(_QWORD *)v42[0] + 124LL);
  xxxSendMessage((ULONG_PTR)v5);
  v21 = v43;
  if ( !v43 )
    v21 = *(_QWORD *)v42[0];
  if ( (unsigned int)MNGetpItemIndex(v21, a2) == -1 )
    goto LABEL_29;
  a3 &= ~4u;
  v17 = *(_QWORD *)v42[0];
  if ( (((unsigned __int8)v20 ^ *(_BYTE *)(*(_QWORD *)v42[0] + 124LL)) & 3) != 0 )
    goto LABEL_29;
  LODWORD(v50[1]) = v22;
  if ( !a2 )
    goto LABEL_34;
  if ( v22 != v19 )
  {
LABEL_29:
    v31 = 0LL;
LABEL_30:
    xxxInvalidateRect(v5, (__int64)v31, 1);
    goto LABEL_31;
  }
  HIDWORD(v50[1]) = *(_DWORD *)(*(_QWORD *)v42[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v42[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v50[1]) <= v18 )
    {
      v23 = v43;
      if ( !v43 )
        v23 = *(_QWORD *)v42[0];
      v24 = MNGetpItemFromIndex(v23, *(_DWORD *)(v23 + 116));
      v17 = *(_QWORD *)v24;
      v16 = (unsigned int)(v25 - *(_DWORD *)(*(_QWORD *)v24 + 68LL));
      HIDWORD(v50[0]) = v16;
      goto LABEL_40;
    }
    GetClientRect((__int64)v5, (__int64)&v51);
  }
  if ( v43 )
    v26 = v43;
  else
    v26 = *(_QWORD *)v42[0];
  v27 = MNGetpItemFromIndex(v26, *(_DWORD *)(v26 + 116));
  v17 = *(_QWORD *)v27;
  v16 = (unsigned int)(v29 - *(_DWORD *)(*(_QWORD *)v27 + 68LL));
  v51.top = v16;
  HIDWORD(v50[0]) = v16;
  if ( (int)v16 >= 0 )
  {
    v17 = *(_QWORD *)v42[0];
    if ( v51.top < *(_DWORD *)(*(_QWORD *)v42[0] + 68LL) )
    {
      xxxScrollWindowEx(v5, 0, HIDWORD(v50[1]) - v18, &v51, (struct tagRECT *)v50, 0LL, 0LL, 6);
      if ( v43 )
        v30 = v43;
      else
        v30 = *(_QWORD *)v42[0];
      if ( (unsigned int)MNGetpItemIndex(v30, a2) == -1 )
        goto LABEL_29;
      goto LABEL_35;
    }
LABEL_34:
    v28 = v43;
  }
LABEL_35:
  if ( (a3 & 2) != 0 )
    goto LABEL_33;
  if ( !a2 )
    goto LABEL_29;
  if ( !v28 )
    v28 = *(_QWORD *)v42[0];
  v39 = MNGetpItemFromIndex(v28, *(_DWORD *)(v28 + 116));
  v16 = (unsigned int)(v40 - *(_DWORD *)(*(_QWORD *)v39 + 68LL));
  HIDWORD(v50[0]) = v16;
  v17 = (unsigned int)(v16 + *(_DWORD *)(v41 + 76));
  HIDWORD(v50[1]) = v16 + *(_DWORD *)(v41 + 76);
LABEL_40:
  if ( (int)v16 >= 0 )
  {
    v17 = *(_QWORD *)v42[0];
    if ( SHIDWORD(v50[0]) < *(_DWORD *)(*(_QWORD *)v42[0] + 68LL) )
    {
      v31 = v50;
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v5, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_33:
  ThreadUnlock1(v17, v15, v16);
  ThreadUnlock1(v33, v32, v34);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v42, v35, v36, v37);
}
