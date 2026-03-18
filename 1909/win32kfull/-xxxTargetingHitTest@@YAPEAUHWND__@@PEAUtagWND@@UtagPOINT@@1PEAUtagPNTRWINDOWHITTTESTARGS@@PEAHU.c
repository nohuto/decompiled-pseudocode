/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204AE0
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02056B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00E51FC (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C02035B0 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0203AC0 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0204340 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C020441C (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0204490 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02056B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C025937C (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C025BCF8 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025C310 (TouchTargetingRankForRectDeep.c)
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
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  struct tagWND *v33; // r14
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct tagWND *v40; // r15
  unsigned int v41; // r14d
  int *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // r14d
  __int64 v52; // rdx
  unsigned __int8 *v53; // rdx
  __int64 v54; // rax
  unsigned int v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v61; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v62; // [rsp+78h] [rbp-88h]
  struct tagPOINT v63; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v68; // [rsp+A8h] [rbp-58h] BYREF
  struct tagPOINT v69; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v71; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v72; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v73; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v74; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v75; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v76; // [rsp+120h] [rbp+20h] BYREF
  __int128 v77; // [rsp+130h] [rbp+30h] BYREF
  __int128 v78; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v79; // [rsp+150h] [rbp+50h] BYREF
  struct tagRECT v80; // [rsp+160h] [rbp+60h] BYREF
  struct tagRECT v81; // [rsp+170h] [rbp+70h] BYREF

  v8 = a5;
  v10 = a7;
  v11 = -2;
  v12 = a3;
  v61 = (struct tagPOINT)a3;
  v64 = a5;
  v14 = *(_DWORD *)(a4 + 88) == 1;
  v15 = a1;
  v62 = a6;
  v16 = 17;
  v57 = a7;
  v17 = 0LL;
  v58 = -2;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v60 = 0;
  v59 = 0LL;
  v56 = 0;
  if ( v14
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), a3)
    && (_WORD)v10 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v71 = *a6;
  if ( !(unsigned int)BasicTargetingWindowHitTest(v15, v12, a4, v8, &v71, &v60, &v56, (__int64)&v59, a8, v10) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15) )
  {
    v19 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v15) != 0;
    v20 = 1;
    v60 = 1;
    v11 = v19 ? -2 : 1;
    v58 = v11;
  }
  else
  {
    v20 = v60;
  }
  if ( v20 )
  {
    v51 = v56;
    goto LABEL_64;
  }
  v21 = *(_QWORD *)(v15 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0x20) != 0 )
    goto LABEL_51;
  v63.x = v61.x + v59.x;
  v63.y = v61.y + v59.y;
  if ( !PtInRect((_DWORD *)(v21 + 104), *(_QWORD *)&v63) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_51;
    v25 = *(_QWORD *)(a4 + 40);
    v72 = *v23;
    v73 = v72;
    if ( (unsigned __int16)TouchTargetingRankForRect(&v73, &v72, v25, 0LL, 0LL, v57) > 0xFFDu )
      goto LABEL_51;
    v24 = (__int64)v61;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest(
            (__int64 *)v15,
            a2,
            (struct tagPOINT)v24,
            &v59,
            (int *)&v58,
            (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v11 = v58,
          ((v58 + 1) & 0xFFFFFFFD) == 0) )
    {
      v74 = *a6;
      xxxPointerInsideNCTargeting((struct tagWND *)v15, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v74, v57);
    }
  }
  if ( v11 != -2 && v11 != 1 )
  {
    v26 = *(_QWORD *)(v15 + 112);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24);
    v65 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v65;
    v66 = v26;
    if ( v26 )
      HMLockObject(v26);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v68 = v61;
      LogicalToPhysicalDPIPoint(&v68, &v61, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
      v28 = (__int64)xxxDCEWindowHitTest(
                       *(_QWORD *)(v15 + 112),
                       *(_DWORD *)a4,
                       *(_QWORD *)(a4 + 8),
                       *(_QWORD *)(a4 + 16),
                       v68,
                       a4 + 32,
                       *(_DWORD *)(a4 + 36));
    }
    else
    {
      v28 = xxxWindowHitTest(*(_QWORD *)(v15 + 112), *(_QWORD *)&v61, a4 + 32);
    }
    v17 = v28;
    if ( v28 )
    {
      v32 = ValidateHwnd(v28);
      v33 = (struct tagWND *)v32;
      if ( v32 )
      {
        *v64 = 1;
        v80 = *v62;
        TransformRectBetweenCoordinateSpaces(&v80, v62, v32, v15);
        v75 = v80;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v33, 0, 0LL, 0LL, 0, &v75, v57);
      }
    }
    ThreadUnlock1(v30, v29, v31);
LABEL_48:
    v41 = v56;
    goto LABEL_49;
  }
  if ( v57 != 2 )
  {
    v42 = (int *)(*(_QWORD *)(v15 + 40) + 104LL);
    v70 = 0uLL;
    if ( (unsigned int)IntersectRect(&v70, v42, &a6->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      v45 = *(_QWORD *)(v15 + 112);
      v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44);
      v65 = *(_QWORD *)(v46 + 408);
      *(_QWORD *)(v46 + 408) = &v65;
      v66 = v45;
      if ( v45 )
        HMLockObject(v45);
      v47 = *(_QWORD *)(v15 + 112);
      v77 = v70;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v47,
              v61,
              a4,
              &v77,
              (unsigned __int16)v57);
      ThreadUnlock1(v49, v48, v50);
      --*(_DWORD *)(a4 + 88);
      goto LABEL_48;
    }
LABEL_51:
    v41 = v56;
    goto LABEL_52;
  }
  v34 = *(_QWORD *)(v15 + 112);
  v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v24);
  v65 = *(_QWORD *)(v35 + 408);
  *(_QWORD *)(v35 + 408) = &v65;
  v66 = v34;
  if ( v34 )
    HMLockObject(v34);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v69 = v63;
    LogicalToPhysicalDPIPoint(&v69, &v63, *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL), 0LL);
    v36 = (__int64)xxxDCEWindowHitTest(
                     *(_QWORD *)(v15 + 112),
                     *(_DWORD *)a4,
                     *(_QWORD *)(a4 + 8),
                     *(_QWORD *)(a4 + 16),
                     v69,
                     a4 + 32,
                     *(_DWORD *)(a4 + 36));
  }
  else
  {
    v36 = xxxWindowHitTest(*(_QWORD *)(v15 + 112), *(_QWORD *)&v63, a4 + 32);
  }
  v17 = v36;
  if ( v36 && (v40 = (struct tagWND *)ValidateHwnd(v36)) != 0LL )
  {
    v41 = v56;
    if ( v56 )
      v41 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v56);
    if ( (unsigned int)TTBetterTarget(v40, v41, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, 2) )
    {
      *v64 = 1;
      v81 = *v62;
      TransformRectBetweenCoordinateSpaces(&v81, v62, v40, v15);
      v76 = v81;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, v40, v41, 0LL, 0LL, 0, &v76, 2);
    }
  }
  else
  {
    v41 = v56;
  }
  ThreadUnlock1(v38, v37, v39);
LABEL_49:
  if ( !v17 )
  {
    v11 = v58;
LABEL_52:
    if ( v41 == 4093 )
      return 0LL;
    v51 = _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v41) + v41;
    if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57) )
      return *(_QWORD *)v15;
    if ( v11 == -2 || v59.x || v59.y )
    {
      xxxSendNCHitTest((__int64 *)v15, a2, v61, &v59, (int *)&v58, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v11 = v58;
    }
    if ( v11 == -1 )
    {
      v52 = *(_QWORD *)(a4 + 40);
      v78 = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 88LL);
      v51 = (unsigned __int16)TouchTargetingRankForRectDeep(&v78, v52, v62, &v59, a8);
      if ( !(unsigned int)TTBetterTarget((struct tagWND *)v15, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57)
        || (xxxSendNCHitTest((__int64 *)v15, a2, v61, &v59, (int *)&v58, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v11 = v58,
            v58 == -1) )
      {
        *v64 = 0;
        return v17;
      }
    }
LABEL_64:
    *(_DWORD *)(a4 + 32) = v11;
    v53 = *(unsigned __int8 **)(v15 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v16 = (((v53[26] & 0x40) == 0) ^ (v53[25] >> 6) & 1) + 16;
    }
    else if ( (v53[26] & 0x40) != 0 )
    {
      v16 = 16;
    }
    if ( v11 == v16 && (v53[30] & 4) == 0 )
    {
      v54 = SizeBoxHwnd(v15);
      if ( v54 )
        v15 = v54;
    }
    if ( v60 )
      v51 += _TTWindowPenalty((struct tagWND *)v15, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v51);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v15)
      || (unsigned int)TTBetterTarget((struct tagWND *)v15, v51, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v62, v57) )
    {
      v79 = *v62;
      _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, (struct tagWND *)v15, v51, &v59, 0LL, 0, &v79, v57);
    }
    return *(_QWORD *)v15;
  }
  return v17;
}
