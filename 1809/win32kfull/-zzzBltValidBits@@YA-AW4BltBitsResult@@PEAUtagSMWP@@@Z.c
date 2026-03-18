/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GreHintDCWnd @ 0x1C000EAA0 (GreHintDCWnd.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0038244 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0038368 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0 (PhysicalToLogicalInPlaceRgn.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0045CF4 (GreRedrawSpriteOverlapPresent.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GetOldRedirectionBitmap @ 0x1C0072A5C (GetOldRedirectionBitmap.c)
 *     DeleteOldRedirectionBitmap @ 0x1C0072A8C (DeleteOldRedirectionBitmap.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0077888 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C0112C28 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C01159CC (LogicalToPhysicalInPlaceRgnWorker.c)
 *     UpdateSpriteArea @ 0x1C0152170 (UpdateSpriteArea.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01F2BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
 *     RestoreSpb @ 0x1C01F2E30 (RestoreSpb.c)
 *     SpbCheck @ 0x1C01F306C (SpbCheck.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C02696EC (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C026B8E0 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r15
  HDC v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  _DWORD *v11; // rax
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  int v18; // r13d
  __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdi
  int v24; // ebx
  __int64 v25; // rax
  int v27; // edi
  _QWORD *v28; // rbx
  unsigned int v29; // esi
  struct tagWND *v30; // rdi
  __int64 RedirectionBitmap; // rax
  __int64 v32; // rdx
  int v33; // eax
  int v34; // esi
  int v35; // ecx
  HRGN v36; // rdx
  unsigned int v37; // ebx
  int v38; // r9d
  int v39; // edx
  int v40; // r10d
  int v41; // r8d
  struct tagWND *v42; // r15
  struct tagWND *v43; // r8
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 StyleWindow; // rax
  struct tagWND *v49; // r14
  __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdi
  int v59; // edi
  __int64 v60; // rbx
  int v61; // r13d
  unsigned int v62; // r12d
  int v63; // edx
  int v64; // eax
  __m128i v65; // xmm0
  int v66; // ecx
  int v67; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v69; // r10
  HDC v70; // r12
  int v71; // eax
  _QWORD *v72; // r8
  int v73; // eax
  __int64 Spb; // rax
  unsigned int v75[2]; // [rsp+28h] [rbp-99h]
  HDC v76; // [rsp+30h] [rbp-91h]
  __int64 *v77; // [rsp+38h] [rbp-89h]
  int v78; // [rsp+68h] [rbp-59h]
  __int64 v79; // [rsp+70h] [rbp-51h] BYREF
  int v80; // [rsp+78h] [rbp-49h]
  int v81; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v83; // [rsp+84h] [rbp-3Dh]
  HDC v84[2]; // [rsp+88h] [rbp-39h] BYREF
  __m128i v85; // [rsp+98h] [rbp-29h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-11h]
  __int64 v88; // [rsp+B8h] [rbp-9h]
  HRGN v89; // [rsp+C0h] [rbp-1h]
  __m128i v90; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v91[2]; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v86 = a1;
  v2 = 0LL;
  v84[0] = 0LL;
  v3 = 0;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1, v4);
  if ( !valid )
    goto LABEL_37;
  v6 = 0LL;
  v7 = *(_DWORD *)(v1 + 28) - 1;
  v8 = *(_QWORD *)(v1 + 40);
  if ( v7 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v5) = 1;
    v9 = HMValidateHandleNoSecure(*(_QWORD *)v8, v5);
    v10 = v9;
    if ( v9 && *(_QWORD *)(v9 + 80) && IsStillWindowC(*(_QWORD *)(v8 + 8), v5) )
    {
      if ( *(_QWORD *)(v8 + 112) == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v10 + 80) != GetDesktopWindow(v10)) )
      {
        *(_QWORD *)(v8 + 112) = 0LL;
      }
      v11 = (_DWORD *)v8;
      if ( v6 )
        v11 = v6;
      v6 = v11;
    }
    else
    {
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 32) = 6159;
    }
    v8 += 168LL;
    --v7;
  }
  while ( v7 >= 0 );
  if ( v6 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*v6) + 80LL);
    v88 = v12;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, (struct tagSMWP *)v1);
    v91[0] = 0LL;
    v91[1] = 0LL;
    v83 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v59 = *(_DWORD *)(v1 + 28) - 1;
      v60 = *(_QWORD *)(v1 + 40);
      if ( v59 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v60 )
          {
            if ( (*(_DWORD *)(v60 + 32) & 8) == 0 )
            {
              v63 = *(_DWORD *)(v60 + 72);
              if ( v63 || *(_DWORD *)(v60 + 76) )
              {
                v66 = -*(_DWORD *)(v60 + 76);
                v67 = -v63;
                v85 = *(__m128i *)(v60 + 56);
                v65 = v85;
                v85.m128i_i32[2] += v67;
                v85.m128i_i32[3] += v66;
                v85.m128i_i32[1] += v66;
                v90 = v65;
                v85.m128i_i32[0] = v67 + _mm_cvtsi128_si32(v65);
                UnionRect(v91, &v90, &v85);
                v13 = 1;
              }
            }
          }
          v60 += 168LL;
          --v59;
        }
        while ( v59 >= 0 );
        v83 = v13;
      }
    }
    v14 = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 488LL) >> 14) & 2;
    v78 = v14;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)v91 & -(__int64)(v13 != 0));
    v17 = 0;
    v18 = 96;
    v19 = *(__int64 **)(v1 + 40);
    v20 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    LODWORD(v79) = 96;
    v21 = ghrgnInvalidSum;
    v89 = (HRGN)ghrgnInvalidSum;
    v81 = 0;
    v80 = v20;
    if ( (int)v20 >= 0 )
    {
      v78 = v14;
      v22 = v20;
      while ( 1 )
      {
        --valid;
        v20 = *v19;
        if ( *v19 )
          break;
LABEL_20:
        v19 += 21;
        v80 = --v22;
        if ( v22 < 0 )
        {
          v1 = v86;
          v12 = v88;
          goto LABEL_22;
        }
      }
      if ( (v19[4] & 8) != 0 )
      {
LABEL_19:
        v22 = v80;
        goto LABEL_20;
      }
      v29 = *((_DWORD *)v19 + 22);
      v78 = v14 | 1;
      v30 = *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v20);
      if ( (*(_BYTE *)(*((_QWORD *)v30 + 5) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v20));
        v32 = *((_QWORD *)v30 + 5);
        if ( !RedirectionBitmap && (*(_BYTE *)(v32 + 27) & 0x20) == 0 )
          goto LABEL_46;
        v35 = *(_DWORD *)(v32 + 232);
        if ( (v35 & 0x20) == 0 && (*((_DWORD *)v19 + 39) & 7) == 0 )
          goto LABEL_46;
        *(_DWORD *)(v32 + 232) = v35 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn(v30, ghrgnVisNew) )
        v29 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect(v30, (struct tagRECT *)(*((_QWORD *)v30 + 5) + 88LL), 1u);
      if ( (v29 & 3) == 0 && *(_QWORD *)(*((_QWORD *)v30 + 5) + 136LL) != 1LL )
      {
        v38 = *((_DWORD *)v19 + 16);
        v39 = *((_DWORD *)v19 + 14);
        if ( v38 > v39 )
        {
          v40 = *((_DWORD *)v19 + 17);
          v41 = *((_DWORD *)v19 + 15);
          if ( v40 > v41 )
          {
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v39 - *((_DWORD *)v19 + 18)),
              (unsigned int)(v41 - *((_DWORD *)v19 + 19)),
              (unsigned int)(v38 - *((_DWORD *)v19 + 18)),
              v40 - *((_DWORD *)v19 + 19));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v19[12], 1LL) >= 2
              && ((v18 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v19[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v19 + 18), *((unsigned int *)v19 + 19));
              v42 = v30;
              v43 = 0LL;
              while ( 1 )
              {
                v44 = *((_QWORD *)v42 + 5);
                v45 = *(_QWORD *)(v44 + 136);
                if ( v45 == 1 )
                  break;
                if ( v45 )
                {
                  v87 = *(_QWORD *)(v44 + 136);
                  if ( v43 )
                  {
                    v64 = PhysicalToLogicalInPlaceRgn(v43);
                    v45 = v87;
                    v61 = v64;
                  }
                  else
                  {
                    v61 = 0;
                  }
                  v62 = GreCombineRgn(ghrgnValid, ghrgnValid, v45, 4LL);
                  if ( v61 )
                    GreDeleteObject(v45);
                  if ( v62 < 2 )
                    break;
                  v43 = v42;
                }
                v42 = (struct tagWND *)*((_QWORD *)v42 + 10);
                if ( !v42 || (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 2) != 0 )
                {
                  v46 = v19[15];
                  if ( (!v46 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v46, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_71;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v29 |= 4u;
LABEL_71:
      if ( (v29 & 4) == 0 && (*((_DWORD *)v19 + 18) || *((_DWORD *)v19 + 19)) )
      {
        StyleWindow = GetStyleWindow((__int64)v30, 2568);
        v49 = (struct tagWND *)StyleWindow;
        if ( StyleWindow && (v50 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v30 != v49 )
          {
            v51 = v50;
            v77 = v19 + 7;
            v76 = (HDC)ghrgnValid;
            *(_QWORD *)v75 = ghdcMem;
LABEL_109:
            UpdateSpriteArea(v49, v50, v51);
            goto LABEL_72;
          }
          if ( (*((_DWORD *)v19 + 39) & 1) != 0
            || *((_DWORD *)v19 + 18) != *((_DWORD *)v19 + 4) - *((_DWORD *)v19 + 20)
            || *((_DWORD *)v19 + 19) != *((_DWORD *)v19 + 5) - *((_DWORD *)v19 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v49);
            v69 = v50;
            if ( OldRedirectionBitmap )
              v69 = OldRedirectionBitmap;
            v51 = v69;
            v77 = v19 + 7;
            v76 = (HDC)ghrgnValid;
            *(_QWORD *)v75 = ghdcMem2;
            goto LABEL_109;
          }
        }
        else if ( (*(_BYTE *)(*((_QWORD *)v30 + 5) + 26LL) & 8) == 0 )
        {
          v70 = v84[0];
          if ( !v84[0] )
          {
            v70 = *(HDC *)(gpDispInfo + 56LL);
            v84[0] = v70;
          }
          GreHintDCWnd((__int64)v70, *(_QWORD *)v30, 0LL, 0, 0);
          GreSelectVisRgn(v70, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v70,
            *((_DWORD *)v19 + 14),
            *((_DWORD *)v19 + 15),
            *((_DWORD *)v19 + 16) - *((_DWORD *)v19 + 14),
            *((_DWORD *)v19 + 17) - *((_DWORD *)v19 + 15),
            v70,
            *((_DWORD *)v19 + 14) - *((_DWORD *)v19 + 18),
            *((_DWORD *)v19 + 15) - *((_DWORD *)v19 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd((__int64)v70, 0LL, 0LL, 0, 0);
        }
      }
LABEL_72:
      if ( *(char *)(*((_QWORD *)v30 + 5) + 16LL) >= 0
        || (v29 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v19[12], ghrgnVisNew, 4u, v29) )
      {
        v36 = (HRGN)v19[12];
        if ( v36 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v36, ghrgnVisNew, 2u, v29) )
          {
LABEL_99:
            v18 = v79;
            goto LABEL_46;
          }
        }
        else
        {
          v90 = *(__m128i *)(*(_QWORD *)(v88 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v90, &v90, v30, v88);
          SetRectRgnIndirect(ghrgnInvalid, &v90);
        }
LABEL_75:
        v18 = v79;
        if ( (v29 & 4) == 0 )
        {
          if ( (v79 & 0x20) != 0 )
          {
            v52 = 5LL;
            v53 = 0LL;
            v54 = ghrgnValidSum;
          }
          else
          {
            v52 = 2LL;
            v54 = ghrgnValidSum;
            v53 = ghrgnValidSum;
          }
          GreCombineRgn(v54, ghrgnValid, v53, v52);
          v18 &= ~0x20u;
          LODWORD(v79) = v18;
        }
        if ( (v18 & 0x20) != 0 )
        {
          if ( (v29 & 4) != 0 )
            goto LABEL_47;
          v72 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v72 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v72, 4LL) > 1 )
          goto LABEL_47;
LABEL_46:
        *(_DWORD *)(*((_QWORD *)v30 + 5) + 232LL) &= ~2u;
        v29 |= 8u;
LABEL_47:
        if ( *(char *)(*((_QWORD *)v30 + 5) + 16LL) < 0 )
        {
          v73 = *((_DWORD *)v19 + 8);
          if ( (v73 & 0x40) == 0 && (v73 & 0x87) != 7 )
          {
            Spb = FindSpb(v30);
            FreeSpb(Spb);
          }
        }
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v30)
          && (*(_BYTE *)(*((_QWORD *)v30 + 5) + 26LL) & 8) != 0
          && v19[14]
          && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, (HRGN)v19[12], 4u, v29) )
        {
          GreForceClipRgnChange(v47, *(_QWORD *)v30);
        }
        v20 = v19[12];
        if ( v20 )
        {
          GreDeleteObject(v20);
          v19[12] = 0LL;
        }
        v17 = v81;
        if ( (*(_BYTE *)(*((_QWORD *)v30 + 5) + 21LL) & 1) == 0 && (v19[4] & 0x40) != 0 )
          v17 = ++v81;
        if ( (v29 & 8) != 0 )
          goto LABEL_62;
        if ( (v29 & 5) == 4 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v85);
          xxxInternalInvalidate(v30, (HRGN)1, 0x485u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v85);
        }
        v79 = ghrgnInvalid;
        v33 = LogicalToPhysicalInPlaceRgnWorker(v30, &v79, 0LL);
        v34 = v33;
        if ( (v18 & 0x40) != 0 )
        {
          if ( !valid && !v33 )
          {
            v89 = (HRGN)ghrgnInvalid;
LABEL_61:
            v18 &= ~0x40u;
            LODWORD(v79) = v18;
LABEL_62:
            v14 = v78;
            v2 = v84[0];
            goto LABEL_19;
          }
          v55 = 5LL;
          v57 = 0LL;
          v56 = ghrgnInvalidSum;
        }
        else
        {
          v55 = 2LL;
          v56 = ghrgnInvalidSum;
          v57 = ghrgnInvalidSum;
        }
        v58 = v79;
        GreCombineRgn(v56, v79, v57, v55);
        if ( v34 )
          GreDeleteObject(v58);
        goto LABEL_61;
      }
      v71 = RestoreSpb(v30, ghrgnInvalid, v84);
      if ( v71 )
      {
        if ( v71 == 2 && (v79 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v29 & 1) != 0 )
          goto LABEL_165;
      }
      else if ( (v29 & 1) != 0 )
      {
        goto LABEL_99;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_165:
      if ( (v29 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v29 |= 0x20u;
      goto LABEL_75;
    }
LABEL_22:
    if ( v83 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), v91);
    v23 = *(__int64 **)(v1 + 40);
    v24 = *(_DWORD *)(v1 + 28);
    while ( --v24 >= 0 )
    {
      v25 = *v23;
      if ( *v23 )
      {
        v21 = 3LL * (unsigned __int16)v25;
        v20 = gpKernelHandleTable;
        v15 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v25);
        if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v15);
      }
      v23 += 21;
    }
    if ( (v18 & 0x40) == 0 )
    {
      if ( v17 != *(_DWORD *)(v1 + 28) || (v37 = 69, v12 == GetDesktopWindow(v12)) )
        v37 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
      xxxInternalInvalidate((struct tagWND *)v12, v89, v37);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
    }
    if ( gcountPWO )
      GreClientRgnDone(v20, v21, v15, v16, *(_QWORD *)v75, v76, v77);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v78;
  }
  else
  {
LABEL_37:
    v27 = *(_DWORD *)(v1 + 28) - 1;
    if ( v27 >= 0 )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v28 )
        {
          GreDeleteObject(*v28);
          *v28 = 0LL;
        }
        v28 += 21;
        --v27;
      }
      while ( v27 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v3;
}
