/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204D90
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C010AC5C (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0203860 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0203D70 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02045F0 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C02046CC (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0204740 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0204B4C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C0259ABC (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C025C430 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025CA48 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        struct tagRECT *a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v8; // r11
  int v10; // r9d
  unsigned int v11; // r15d
  unsigned __int64 v12; // r10
  bool v14; // zf
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // r8
  bool v19; // cf
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int128 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct tagWND *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct tagWND *v41; // r15
  unsigned int v42; // r14d
  int *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // r14d
  __int64 v54; // rdx
  unsigned __int8 *v55; // rdx
  __int64 v56; // rax
  unsigned int v58; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-ACh]
  unsigned int v60; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v61; // [rsp+60h] [rbp-A0h] BYREF
  int v62; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v63; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v64; // [rsp+78h] [rbp-88h]
  struct tagPOINT v65; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v70; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v71; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v72; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v73; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v76; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v77; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v78; // [rsp+120h] [rbp+20h] BYREF
  __int128 v79; // [rsp+130h] [rbp+30h] BYREF
  __int128 v80; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v81; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v82; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v83; // [rsp+170h] [rbp+70h] BYREF

  v8 = a5;
  v10 = a7;
  v11 = -2;
  v12 = a3;
  v63 = (struct tagPOINT)a3;
  v66 = a5;
  v14 = *(_DWORD *)(a4 + 88) == 1;
  v15 = a1;
  v64 = a6;
  v16 = 17;
  v59 = a7;
  v17 = 0LL;
  v60 = -2;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v62 = 0;
  v61 = 0LL;
  v58 = 0;
  if ( v14
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v10 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v73 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v15, v12, a4, v8, &v73, &v62, &v58, (__int64)&v61, a8, v10) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v15) != 0;
    v20 = 1;
    v62 = 1;
    v11 = v19 ? -2 : 1;
    v60 = v11;
  }
  else
  {
    v20 = v62;
  }
  if ( v20 )
  {
    v53 = v58;
    goto LABEL_64;
  }
  v21 = *(_QWORD *)(v15 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_51;
  v65.x = v63.x + v61.x;
  v65.y = v63.y + v61.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), *(_QWORD *)&v65) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_51;
    v26 = *(_QWORD *)(a4 + 40);
    v74 = *v23;
    v75 = v74;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v75, &v74, v26, 0LL, 0LL, v59) > 0xFFDu )
      goto LABEL_51;
    v24 = (__int64)v63;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest(
            (__int64 *)v15,
            a2,
            (struct tagPOINT)v24,
            &v61,
            (int *)&v60,
            (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v11 = v60,
          ((v60 + 1) & 0xFFFFFFFD) == 0) )
    {
      v76 = *a6;
      xxxPointerInsideNCTargeting((struct tagWND *)v15, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v76, v59);
    }
  }
  if ( v11 != -2 && v11 != 1 )
  {
    v27 = *(_QWORD *)(v15 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24, v25);
    v67 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v67;
    v68 = v27;
    if ( v27 )
      HMLockObject(v27);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v70 = v63;
      LogicalToPhysicalDPIPoint(&v70, &v63, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
      v29 = (__int64)xxxDCEWindowHitTest(
                       *(_QWORD *)(v15 + 112),
                       *(_DWORD *)a4,
                       *(_QWORD *)(a4 + 8),
                       *(_QWORD *)(a4 + 16),
                       v70,
                       a4 + 32,
                       *(_DWORD *)(a4 + 36));
    }
    else
    {
      v29 = xxxWindowHitTest(*(_QWORD *)(v15 + 112), *(_QWORD *)&v63, a4 + 32);
    }
    v17 = v29;
    if ( v29 )
    {
      v33 = ValidateHwnd(v29);
      v34 = (struct tagWND *)v33;
      if ( v33 )
      {
        *v66 = 1;
        v82 = *v64;
        TransformRectBetweenCoordinateSpaces(&v82, v64, v33, v15);
        v77 = v82;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v34, 0, 0LL, 0LL, 0, &v77, v59);
      }
    }
    ThreadUnlock1(v31, v30, v32);
LABEL_48:
    v42 = v58;
    goto LABEL_49;
  }
  if ( v59 != 2 )
  {
    v43 = (int *)(*(_QWORD *)(v15 + 40) + 104LL);
    v72 = 0uLL;
    if ( (unsigned int)IntersectRect(&v72, v43, &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      v47 = *(_QWORD *)(v15 + 112);
      v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46);
      v67 = *(_QWORD *)(v48 + 408);
      *(_QWORD *)(v48 + 408) = &v67;
      v68 = v47;
      if ( v47 )
        HMLockObject(v47);
      v49 = *(_QWORD *)(v15 + 112);
      v79 = v72;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v49,
              v63,
              a4,
              &v79,
              (unsigned __int16)v59);
      ThreadUnlock1(v51, v50, v52);
      --*(_DWORD *)(a4 + 88);
      goto LABEL_48;
    }
LABEL_51:
    v42 = v58;
    goto LABEL_52;
  }
  v35 = *(_QWORD *)(v15 + 112);
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24, v25);
  v67 = *(_QWORD *)(v36 + 408);
  *(_QWORD *)(v36 + 408) = &v67;
  v68 = v35;
  if ( v35 )
    HMLockObject(v35);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v71 = v65;
    LogicalToPhysicalDPIPoint(&v71, &v65, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
    v37 = (__int64)xxxDCEWindowHitTest(
                     *(_QWORD *)(v15 + 112),
                     *(_DWORD *)a4,
                     *(_QWORD *)(a4 + 8),
                     *(_QWORD *)(a4 + 16),
                     v71,
                     a4 + 32,
                     *(_DWORD *)(a4 + 36));
  }
  else
  {
    v37 = xxxWindowHitTest(*(_QWORD *)(v15 + 112), *(_QWORD *)&v65, a4 + 32);
  }
  v17 = v37;
  if ( v37 && (v41 = (struct tagWND *)ValidateHwnd(v37)) != 0LL )
  {
    v42 = v58;
    if ( v58 )
      v42 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v58);
    if ( (unsigned int)TTBetterTarget(v41, v42, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v64, 2) )
    {
      *v66 = 1;
      v83 = *v64;
      TransformRectBetweenCoordinateSpaces(&v83, v64, v41, v15);
      v78 = v83;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v41, v42, 0LL, 0LL, 0, &v78, 2);
    }
  }
  else
  {
    v42 = v58;
  }
  ThreadUnlock1(v39, v38, v40);
LABEL_49:
  if ( !v17 )
  {
    v11 = v60;
LABEL_52:
    if ( v42 == 4093 )
      return 0LL;
    v53 = _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v42) + v42;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v53, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v64, v59) )
      return *(_QWORD *)v15;
    if ( v11 == -2 || v61.x || v61.y )
    {
      xxxSendNCHitTest((__int64 *)v15, a2, v63, &v61, (int *)&v60, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v11 = v60;
    }
    if ( v11 == -1 )
    {
      v54 = *(_QWORD *)(a4 + 40);
      v80 = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v53 = (unsigned __int16)TouchTargetingRankForRectDeep(&v80, v54, v64, &v61, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v53, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v64, v59)
        || (xxxSendNCHitTest((__int64 *)v15, a2, v63, &v61, (int *)&v60, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v11 = v60,
            v60 == -1) )
      {
        *v66 = 0;
        return v17;
      }
    }
LABEL_64:
    *(_DWORD *)(a4 + 32) = v11;
    v55 = *(unsigned __int8 **)(v15 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v16 = (((v55[26] & 0x40) == 0) ^ (v55[25] >> 6) & 1) + 16;
    }
    else if ( (v55[26] & 0x40) != 0 )
    {
      v16 = 16;
    }
    if ( v11 == v16 && (v55[30] & 4) == 0 )
    {
      v56 = SizeBoxHwnd(v15);
      if ( v56 )
        v15 = v56;
    }
    if ( v62 )
      v53 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15)
      || (unsigned int)TTBetterTarget((struct tagWND *)v15, v53, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v64, v59) )
    {
      v81 = *v64;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v15, v53, &v61, 0LL, 0, &v81, v59);
    }
    return *(_QWORD *)v15;
  }
  return v17;
}
