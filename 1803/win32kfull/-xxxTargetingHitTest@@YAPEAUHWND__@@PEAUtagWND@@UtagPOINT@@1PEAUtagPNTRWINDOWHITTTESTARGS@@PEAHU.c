/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01C8C84 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01C938C (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01C9CC4 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01C9DA8 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01CA07C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01CA4A4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C022AE24 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C022D6E8 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C022DCA8 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        unsigned __int64 a3,
        unsigned int *a4,
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
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  struct tagWND *v35; // r14
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct tagWND *v42; // r15
  unsigned int v43; // r14d
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // r14d
  __int64 v52; // rdx
  unsigned __int8 *v53; // rcx
  __int64 v54; // rax
  unsigned int v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v61; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h]
  struct tagRECT v69; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v72; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v73; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v74; // [rsp+110h] [rbp+10h] BYREF
  __int128 v75; // [rsp+120h] [rbp+20h] BYREF
  __int128 v76; // [rsp+130h] [rbp+30h] BYREF
  __int128 v77; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v78; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v79; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v80; // [rsp+170h] [rbp+70h] BYREF

  v60 = 0;
  v56 = 0;
  v9 = a5;
  v10 = -2;
  v11 = 0LL;
  v12 = a7;
  v13 = a3;
  v14 = a4[22] == 1;
  v16 = a1;
  v61 = (struct tagPOINT)a3;
  v64 = a5;
  v17 = 17;
  v62 = a6;
  v57 = a7;
  v58 = -2;
  v59 = 0LL;
  if ( v14
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v12 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v11;
  }
  v69 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v16, v13, (__int64)a4, v9, &v69, &v60, &v56, (__int64)&v59, a8, v12) )
    return v11;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v16) != 0;
    v20 = 1;
    v60 = 1;
    v10 = v19 ? -2 : 1;
    v58 = v10;
  }
  else
  {
    v20 = v60;
  }
  if ( v20 )
  {
    v51 = v56;
    goto LABEL_66;
  }
  v21 = *(_QWORD *)(v16 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_53;
  LODWORD(v63) = v61.x + v59.x;
  HIDWORD(v63) = v61.y + v59.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), v63) )
  {
    if ( a4[22] == 1 )
      goto LABEL_53;
    v25 = *((_QWORD *)a4 + 5);
    v70 = *v23;
    v71 = v70;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v71, &v70, v25, 0LL, 0LL, v57) > 0xFFDu )
      goto LABEL_53;
    v24 = v61;
  }
  if ( a4[22] != 1 )
    goto LABEL_21;
  v26 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 176LL);
  v27 = v26 == 0;
  if ( v26 )
  {
    xxxSendNCHitTest((__int64 *)v16, a2, v24, &v59, (int *)&v58, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
    v10 = v58;
    if ( ((v58 + 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_21;
    v27 = 1;
  }
  if ( v27 )
  {
    v72 = *a6;
    xxxPointerInsideNCTargeting((struct tagWND *)v16, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v72, v57);
  }
LABEL_21:
  if ( v10 != -2 && v10 != 1 )
  {
    v28 = *(_QWORD *)(v16 + 88);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
    v67 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v67;
    v68 = v28;
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    if ( a4[21] )
    {
      v65 = (__int64)v61;
      LogicalToPhysicalDPIPoint(&v65, &v61, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
      v30 = (__int64)xxxDCEWindowHitTest(
                       *(struct tagWND **)(v16 + 88),
                       *a4,
                       *((_QWORD *)a4 + 1),
                       *((_QWORD *)a4 + 2),
                       v65,
                       (__int64)(a4 + 8),
                       a4[9]);
    }
    else
    {
      v30 = xxxWindowHitTest(*(_QWORD *)(v16 + 88), *(_QWORD *)&v61, (__int64)(a4 + 8));
    }
    v11 = v30;
    if ( v30 )
    {
      v34 = ValidateHwnd(v30);
      v35 = (struct tagWND *)v34;
      if ( v34 )
      {
        *v64 = 1;
        v79 = *v62;
        TransformRectBetweenCoordinateSpaces(&v79, v62, v34, v16);
        v73 = v79;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v35, 0, 0LL, 0LL, 0, &v73, v57);
      }
    }
    ThreadUnlock1(v32, v31, v33);
LABEL_50:
    v43 = v56;
    goto LABEL_51;
  }
  if ( v57 != 2 )
  {
    if ( (unsigned int)IntersectRect(&v75, (int *)(*(_QWORD *)(v16 + 40) + 104LL), &a6->left) )
    {
      ++a4[22];
      v45 = *(_QWORD *)(v16 + 88);
      v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44);
      v67 = *(_QWORD *)(v46 + 408);
      *(_QWORD *)(v46 + 408) = &v67;
      v68 = v45;
      if ( v45 )
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
      v47 = *(_QWORD *)(v16 + 88);
      v76 = v75;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v47,
              v61,
              a4,
              &v76,
              (unsigned __int16)v57);
      ThreadUnlock1(v49, v48, v50);
      --a4[22];
      goto LABEL_50;
    }
LABEL_53:
    v43 = v56;
    goto LABEL_54;
  }
  v36 = *(_QWORD *)(v16 + 88);
  v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
  v67 = *(_QWORD *)(v37 + 408);
  *(_QWORD *)(v37 + 408) = &v67;
  v68 = v36;
  if ( v36 )
    _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
  if ( a4[21] )
  {
    v66 = v63;
    LogicalToPhysicalDPIPoint(&v66, &v63, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
    v38 = (__int64)xxxDCEWindowHitTest(
                     *(struct tagWND **)(v16 + 88),
                     *a4,
                     *((_QWORD *)a4 + 1),
                     *((_QWORD *)a4 + 2),
                     v66,
                     (__int64)(a4 + 8),
                     a4[9]);
  }
  else
  {
    v38 = xxxWindowHitTest(*(_QWORD *)(v16 + 88), v63, (__int64)(a4 + 8));
  }
  v11 = v38;
  if ( v38 && (v42 = (struct tagWND *)ValidateHwnd(v38)) != 0LL )
  {
    v43 = v56;
    if ( v56 )
      v43 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56);
    if ( (unsigned int)TTBetterTarget(v42, v43, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, 2) )
    {
      *v64 = 1;
      v80 = *v62;
      TransformRectBetweenCoordinateSpaces(&v80, v62, v42, v16);
      v74 = v80;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v42, v43, 0LL, 0LL, 0, &v74, 2);
    }
  }
  else
  {
    v43 = v56;
  }
  ThreadUnlock1(v40, v39, v41);
LABEL_51:
  if ( !v11 )
  {
    v10 = v58;
LABEL_54:
    if ( v43 == 4093 )
      return 0LL;
    v51 = _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v43) + v43;
    v20 = TTBetterTarget((struct tagWND *)v16, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57);
    if ( !v20 )
      return *(_QWORD *)v16;
    if ( v10 == -2 || v59.x || v59.y )
    {
      xxxSendNCHitTest((__int64 *)v16, a2, v61, &v59, (int *)&v58, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v10 = v58;
    }
    if ( v10 == -1 )
    {
      v52 = *((_QWORD *)a4 + 5);
      v77 = *(_OWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
      v51 = (unsigned __int16)TouchTargetingRankForRectDeep(&v77, v52, v62, &v59, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v16, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57)
        || (xxxSendNCHitTest((__int64 *)v16, a2, v61, &v59, (int *)&v58, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v10 = v58,
            v58 == -1) )
      {
        *v64 = 0;
        return v11;
      }
    }
LABEL_66:
    v14 = a4[21] == 0;
    a4[8] = v10;
    v53 = *(unsigned __int8 **)(v16 + 40);
    LOBYTE(v20) = v53[26];
    if ( v14 )
    {
      if ( (v20 & 0x40) != 0 )
        v17 = 16;
    }
    else
    {
      LOBYTE(v20) = ~(_BYTE)v20;
      v17 = (((v20 ^ (unsigned int)v53[25]) >> 6) & 1) + 16;
    }
    if ( v10 == v17 && (v53[30] & 4) == 0 )
    {
      v54 = SizeBoxHwnd(v16);
      if ( v54 )
        v16 = v54;
    }
    if ( v60 )
      v51 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v51);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16)
      || (unsigned int)TTBetterTarget((struct tagWND *)v16, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57) )
    {
      v78 = *v62;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v16, v51, &v59, 0LL, 0, &v78, v57);
    }
    return *(_QWORD *)v16;
  }
  return v11;
}
