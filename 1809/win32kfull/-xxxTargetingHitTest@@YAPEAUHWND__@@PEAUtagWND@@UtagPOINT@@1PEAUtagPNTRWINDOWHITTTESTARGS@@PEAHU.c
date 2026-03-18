/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C0069DCC (xxxDCEWindowHitTest.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxWindowHitTest @ 0x1C00DEE34 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01ECFD8 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01ED688 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01EDFCC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01EE0B0 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01EE384 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01EE7B4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C0240DA0 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C0243640 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C0243C00 (TouchTargetingRankForRectDeep.c)
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
  _DWORD *v9; // r11
  unsigned int v10; // r15d
  __int64 v11; // r12
  int v12; // r9d
  unsigned __int64 v13; // r10
  bool v14; // zf
  __int64 v16; // rdi
  unsigned int v17; // r13d
  __int64 v18; // r8
  bool v19; // cf
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int128 *v23; // rcx
  struct tagPOINT v24; // r8
  __int64 v25; // r8
  int v26; // ecx
  BOOL v27; // eax
  __int64 v28; // r14
  __int64 ThreadWin32Thread; // rax
  HWND v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  struct tagWND *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rax
  HWND v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagWND *v40; // r15
  unsigned int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // r14d
  __int64 v49; // rdx
  unsigned __int8 *v50; // rcx
  __int64 v51; // rax
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v58; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v59; // [rsp+78h] [rbp-88h]
  unsigned __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v61; // [rsp+88h] [rbp-78h]
  struct tagPOINT v62; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  struct tagRECT v66; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v69; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v70; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v71; // [rsp+110h] [rbp+10h] BYREF
  __int128 v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  __int128 v74; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v75; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v76; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v77; // [rsp+170h] [rbp+70h] BYREF

  v57 = 0;
  v53 = 0;
  v9 = a5;
  v10 = -2;
  v11 = 0LL;
  v12 = a7;
  v13 = a3;
  v14 = *(_DWORD *)(a4 + 88) == 1;
  v16 = a1;
  v58 = (struct tagPOINT)a3;
  v61 = a5;
  v17 = 17;
  v59 = a6;
  v54 = a7;
  v55 = -2;
  v56 = 0LL;
  if ( v14
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v12 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v11;
  }
  v66 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v16, v13, a4, v9, &v66, &v57, &v53, (__int64)&v56, a8, v12) )
    return v11;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v16) != 0;
    v20 = 1;
    v57 = 1;
    v10 = v19 ? -2 : 1;
    v55 = v10;
  }
  else
  {
    v20 = v57;
  }
  if ( v20 )
  {
    v48 = v53;
    goto LABEL_66;
  }
  v21 = *(_QWORD *)(v16 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_53;
  LODWORD(v60) = v58.x + v56.x;
  HIDWORD(v60) = v58.y + v56.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), v60) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_53;
    v25 = *(_QWORD *)(a4 + 40);
    v67 = *v23;
    v68 = v67;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v68, &v67, v25, 0LL, 0LL, v54) > 0xFFDu )
      goto LABEL_53;
    v24 = v58;
  }
  if ( *(_DWORD *)(a4 + 88) != 1 )
    goto LABEL_21;
  v26 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL);
  v27 = v26 == 0;
  if ( v26 )
  {
    xxxSendNCHitTest((__int64 *)v16, a2, v24, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
    v10 = v55;
    if ( ((v55 + 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_21;
    v27 = 1;
  }
  if ( v27 )
  {
    v69 = *a6;
    xxxPointerInsideNCTargeting((struct tagWND *)v16, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v69, v54);
  }
LABEL_21:
  if ( v10 != -2 && v10 != 1 )
  {
    v28 = *(_QWORD *)(v16 + 88);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
    v64 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v64;
    v65 = v28;
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    if ( *(_DWORD *)(a4 + 84) )
    {
      v62 = v58;
      LogicalToPhysicalDPIPoint(&v62, &v58, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
      v30 = xxxDCEWindowHitTest(
              *(struct tagWND **)(v16 + 88),
              *(_DWORD *)a4,
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              v62,
              a4 + 32,
              *(_DWORD *)(a4 + 36));
    }
    else
    {
      v30 = (HWND)xxxWindowHitTest(*(_QWORD *)(v16 + 88));
    }
    v11 = (__int64)v30;
    if ( v30 )
    {
      v33 = ValidateHwnd(v30);
      v34 = (struct tagWND *)v33;
      if ( v33 )
      {
        *v61 = 1;
        v76 = *v59;
        TransformRectBetweenCoordinateSpaces(&v76, v59, v33, v16);
        v70 = v76;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v34, 0, 0LL, 0LL, 0, &v70, v54);
      }
    }
    ThreadUnlock1(v32, v31);
LABEL_50:
    v41 = v53;
    goto LABEL_51;
  }
  if ( v54 != 2 )
  {
    if ( (unsigned int)IntersectRect(&v72, (int *)(*(_QWORD *)(v16 + 40) + 104LL), &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      v43 = *(_QWORD *)(v16 + 88);
      v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42);
      v64 = *(_QWORD *)(v44 + 416);
      *(_QWORD *)(v44 + 416) = &v64;
      v65 = v43;
      if ( v43 )
        _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
      v45 = *(_QWORD *)(v16 + 88);
      v73 = v72;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v45,
              v58,
              a4,
              &v73,
              (unsigned __int16)v54);
      ThreadUnlock1(v47, v46);
      --*(_DWORD *)(a4 + 88);
      goto LABEL_50;
    }
LABEL_53:
    v41 = v53;
    goto LABEL_54;
  }
  v35 = *(_QWORD *)(v16 + 88);
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
  v64 = *(_QWORD *)(v36 + 416);
  *(_QWORD *)(v36 + 416) = &v64;
  v65 = v35;
  if ( v35 )
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
  if ( *(_DWORD *)(a4 + 84) )
  {
    v63 = (struct tagPOINT)v60;
    LogicalToPhysicalDPIPoint(&v63, &v60, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
    v37 = xxxDCEWindowHitTest(
            *(struct tagWND **)(v16 + 88),
            *(_DWORD *)a4,
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            v63,
            a4 + 32,
            *(_DWORD *)(a4 + 36));
  }
  else
  {
    v37 = (HWND)xxxWindowHitTest(*(_QWORD *)(v16 + 88));
  }
  v11 = (__int64)v37;
  if ( v37 && (v40 = (struct tagWND *)ValidateHwnd(v37)) != 0LL )
  {
    v41 = v53;
    if ( v53 )
      v41 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53);
    if ( (unsigned int)TTBetterTarget(v40, v41, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, 2) )
    {
      *v61 = 1;
      v77 = *v59;
      TransformRectBetweenCoordinateSpaces(&v77, v59, v40, v16);
      v71 = v77;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v40, v41, 0LL, 0LL, 0, &v71, 2);
    }
  }
  else
  {
    v41 = v53;
  }
  ThreadUnlock1(v39, v38);
LABEL_51:
  if ( !v11 )
  {
    v10 = v55;
LABEL_54:
    if ( v41 == 4093 )
      return 0LL;
    v48 = _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v41) + v41;
    v20 = TTBetterTarget((struct tagWND *)v16, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54);
    if ( !v20 )
      return *(_QWORD *)v16;
    if ( v10 == -2 || v56.x || v56.y )
    {
      xxxSendNCHitTest((__int64 *)v16, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v10 = v55;
    }
    if ( v10 == -1 )
    {
      v49 = *(_QWORD *)(a4 + 40);
      v74 = *(_OWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
      v48 = (unsigned __int16)TouchTargetingRankForRectDeep(&v74, v49, v59, &v56, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v16, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54)
        || (xxxSendNCHitTest((__int64 *)v16, a2, v58, &v56, (int *)&v55, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v10 = v55,
            v55 == -1) )
      {
        *v61 = 0;
        return v11;
      }
    }
LABEL_66:
    v14 = *(_DWORD *)(a4 + 84) == 0;
    *(_DWORD *)(a4 + 32) = v10;
    v50 = *(unsigned __int8 **)(v16 + 40);
    LOBYTE(v20) = v50[26];
    if ( v14 )
    {
      if ( (v20 & 0x40) != 0 )
        v17 = 16;
    }
    else
    {
      LOBYTE(v20) = ~(_BYTE)v20;
      v17 = (((v20 ^ (unsigned int)v50[25]) >> 6) & 1) + 16;
    }
    if ( v10 == v17 && (v50[30] & 4) == 0 )
    {
      v51 = SizeBoxHwnd(v16);
      if ( v51 )
        v16 = v51;
    }
    if ( v57 )
      v48 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v48);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16)
      || (unsigned int)TTBetterTarget((struct tagWND *)v16, v48, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v59, v54) )
    {
      v75 = *v59;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v16, v48, &v56, 0LL, 0, &v75, v54);
    }
    return *(_QWORD *)v16;
  }
  return v11;
}
