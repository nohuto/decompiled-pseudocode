/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0031890 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0065A84 (PhysicalToLogicalInPlaceRgn.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006C520 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006E43C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0086BD8 (GreRedrawSpriteOverlapPresent.c)
 *     GreForceClipRgnChange @ 0x1C0089134 (GreForceClipRgnChange.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00895A0 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00895F8 (GetOldRedirectionBitmap.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     UpdateSpriteArea @ 0x1C00CB6CC (UpdateSpriteArea.c)
 *     GreHintDCWnd @ 0x1C00CF810 (GreHintDCWnd.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00F71B0 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00F8670 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     FindSpb @ 0x1C0208BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 *     RestoreSpb @ 0x1C0208E30 (RestoreSpb.c)
 *     SpbCheck @ 0x1C020906C (SpbCheck.c)
 *     SpbCheckRect @ 0x1C0209180 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C02821DC (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C0283F20 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  int v8; // r14d
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  int v19; // r13d
  __int64 *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 *v24; // rdi
  int v25; // ebx
  int v27; // edi
  _QWORD *v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // esi
  struct tagWND *v31; // rdi
  __int64 RedirectionBitmap; // rax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // esi
  int v36; // ecx
  HRGN v37; // rdx
  unsigned int v38; // ebx
  int v39; // r9d
  int v40; // edx
  int v41; // r10d
  int v42; // r8d
  struct tagWND *v43; // r15
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 StyleWindow; // rax
  struct tagWND *v50; // r14
  __int64 v51; // r15
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rbx
  int v61; // edi
  int v62; // r13d
  unsigned int v63; // r12d
  int v64; // edx
  int v65; // eax
  __m128i v66; // xmm0
  int v67; // ecx
  int v68; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v70; // r10
  __int64 v71; // r12
  int v72; // eax
  _QWORD *v73; // r8
  int v74; // eax
  __int64 Spb; // rax
  unsigned int v76[2]; // [rsp+28h] [rbp-99h]
  __int64 v77; // [rsp+30h] [rbp-91h]
  __int64 *v78; // [rsp+38h] [rbp-89h]
  int v79; // [rsp+68h] [rbp-59h]
  __int64 v80; // [rsp+70h] [rbp-51h] BYREF
  int v81; // [rsp+78h] [rbp-49h]
  int v82; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v84; // [rsp+84h] [rbp-3Dh]
  __int64 v85; // [rsp+88h] [rbp-39h] BYREF
  __m128i v86; // [rsp+98h] [rbp-29h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-9h]
  HRGN v90; // [rsp+C0h] [rbp-1h]
  __m128i v91; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v92[2]; // [rsp+D8h] [rbp+17h] BYREF

  v87 = a1;
  v92[0] = 0LL;
  v1 = a1;
  v92[1] = 0LL;
  v2 = 0LL;
  v3 = 0;
  v85 = 0LL;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  valid = BltValidInit((struct tagSMWP *)v1, v4, v5);
  if ( !valid )
    goto LABEL_37;
  v7 = 0LL;
  v8 = *(_DWORD *)(v1 + 28) - 1;
  v9 = *(_QWORD **)(v1 + 40);
  if ( v8 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v6) = 1;
    v10 = HMValidateHandleNoSecure(*v9, v6);
    v11 = v10;
    if ( v10 && *(_QWORD *)(v10 + 104) && IsStillWindowC(v9[1], v6) )
    {
      if ( v9[14] == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v11 + 104) != GetDesktopWindow(v11)) )
      {
        v9[14] = 0LL;
      }
      v12 = v9;
      if ( v7 )
        v12 = v7;
      v7 = v12;
    }
    else
    {
      *v9 = 0LL;
      *((_DWORD *)v9 + 8) = 6159;
    }
    v9 += 21;
    --v8;
  }
  while ( v8 >= 0 );
  if ( v7 )
  {
    v13 = *(_QWORD *)(_HMObjectFromHandle(*v7) + 104);
    v89 = v13;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v13, (struct tagSMWP *)v1);
    v84 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v60 = *(_QWORD *)(v1 + 40);
      v61 = *(_DWORD *)(v1 + 28);
      while ( --v61 >= 0 )
      {
        if ( *(_QWORD *)v60 && (*(_DWORD *)(v60 + 32) & 8) == 0 )
        {
          _HMObjectFromHandle(*(_QWORD *)v60);
          v64 = *(_DWORD *)(v60 + 72);
          if ( v64 || *(_DWORD *)(v60 + 76) )
          {
            v67 = -*(_DWORD *)(v60 + 76);
            v68 = -v64;
            v86 = *(__m128i *)(v60 + 56);
            v66 = v86;
            v86.m128i_i32[2] += v68;
            v86.m128i_i32[3] += v67;
            v86.m128i_i32[1] += v67;
            v91 = v66;
            v86.m128i_i32[0] = v68 + _mm_cvtsi128_si32(v66);
            UnionRect(v92, v91.m128i_i32, v86.m128i_i32);
            v14 = 1;
            v84 = 1;
          }
          else
          {
            v14 = v84;
          }
        }
        v60 += 168LL;
      }
    }
    v15 = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 480LL) >> 14) & 2;
    v79 = v15;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v13,
      (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)v92 & -(__int64)(v14 != 0));
    v18 = 0;
    v19 = 96;
    v20 = *(__int64 **)(v1 + 40);
    v21 = (unsigned int)(*(_DWORD *)(v1 + 28) - 1);
    LODWORD(v80) = 96;
    v22 = ghrgnInvalidSum;
    v90 = (HRGN)ghrgnInvalidSum;
    v82 = 0;
    v81 = v21;
    if ( (int)v21 >= 0 )
    {
      v79 = v15;
      v23 = v21;
      while ( 1 )
      {
        --valid;
        v21 = *v20;
        if ( *v20 )
          break;
LABEL_20:
        v20 += 21;
        v81 = --v23;
        if ( v23 < 0 )
        {
          v1 = v87;
          v13 = v89;
          goto LABEL_22;
        }
      }
      if ( (v20[4] & 8) != 0 )
      {
LABEL_19:
        v23 = v81;
        goto LABEL_20;
      }
      _HMObjectFromHandle(v21);
      v79 = v15 | 1;
      v29 = _HMObjectFromHandle(*v20);
      v30 = *((_DWORD *)v20 + 22);
      v31 = (struct tagWND *)v29;
      if ( (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v29);
        v33 = *((_QWORD *)v31 + 5);
        if ( !RedirectionBitmap && (*(_BYTE *)(v33 + 27) & 0x20) == 0 )
          goto LABEL_46;
        v36 = *(_DWORD *)(v33 + 232);
        if ( (v36 & 0x20) == 0 && (*((_DWORD *)v20 + 39) & 7) == 0 )
          goto LABEL_46;
        *(_DWORD *)(v33 + 232) = v36 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn(v31, ghrgnVisNew) )
        v30 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect(v31, (struct tagRECT *)(*((_QWORD *)v31 + 5) + 88LL), 1u);
      if ( (v30 & 3) == 0 && *(_QWORD *)(*((_QWORD *)v31 + 5) + 136LL) != 1LL )
      {
        v39 = *((_DWORD *)v20 + 16);
        v40 = *((_DWORD *)v20 + 14);
        if ( v39 > v40 )
        {
          v41 = *((_DWORD *)v20 + 17);
          v42 = *((_DWORD *)v20 + 15);
          if ( v41 > v42 )
          {
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v40 - *((_DWORD *)v20 + 18)),
              (unsigned int)(v42 - *((_DWORD *)v20 + 19)),
              (unsigned int)(v39 - *((_DWORD *)v20 + 18)),
              v41 - *((_DWORD *)v20 + 19));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v20[12], 1LL) >= 2
              && ((v19 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v20[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v20 + 18));
              v43 = v31;
              v44 = 0LL;
              while ( 1 )
              {
                v45 = *((_QWORD *)v43 + 5);
                v46 = *(_QWORD *)(v45 + 136);
                if ( v46 == 1 )
                  break;
                if ( v46 )
                {
                  v88 = *(_QWORD *)(v45 + 136);
                  if ( v44 )
                  {
                    v65 = PhysicalToLogicalInPlaceRgn(v44, (__int64)&v88);
                    v46 = v88;
                    v62 = v65;
                  }
                  else
                  {
                    v62 = 0;
                  }
                  v63 = GreCombineRgn(ghrgnValid, ghrgnValid, v46, 4LL);
                  if ( v62 )
                    GreDeleteObject(v46);
                  if ( v63 < 2 )
                    break;
                  v44 = (__int64)v43;
                }
                v43 = (struct tagWND *)*((_QWORD *)v43 + 13);
                if ( !v43 || (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 2) != 0 )
                {
                  v47 = v20[15];
                  if ( (!v47 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v47, 4LL) >= 2)
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
      v30 |= 4u;
LABEL_71:
      if ( (v30 & 4) == 0 && (*((_DWORD *)v20 + 18) || *((_DWORD *)v20 + 19)) )
      {
        StyleWindow = GetStyleWindow((__int64)v31, 2568);
        v50 = (struct tagWND *)StyleWindow;
        if ( StyleWindow && (v51 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v31 != v50 )
          {
            v52 = v51;
            v78 = v20 + 7;
            v77 = ghrgnValid;
            *(_QWORD *)v76 = ghdcMem;
LABEL_109:
            UpdateSpriteArea(v50, v51, v52);
            goto LABEL_72;
          }
          if ( (*((_DWORD *)v20 + 39) & 1) != 0
            || *((_DWORD *)v20 + 18) != *((_DWORD *)v20 + 4) - *((_DWORD *)v20 + 20)
            || *((_DWORD *)v20 + 19) != *((_DWORD *)v20 + 5) - *((_DWORD *)v20 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v50);
            v70 = v51;
            if ( OldRedirectionBitmap )
              v70 = OldRedirectionBitmap;
            v52 = v70;
            v78 = v20 + 7;
            v77 = ghrgnValid;
            *(_QWORD *)v76 = ghdcMem2;
            goto LABEL_109;
          }
        }
        else if ( (*(_BYTE *)(*((_QWORD *)v31 + 5) + 26LL) & 8) == 0 )
        {
          v71 = v85;
          if ( !v85 )
          {
            v71 = *(_QWORD *)(gpDispInfo + 56LL);
            v85 = v71;
          }
          GreHintDCWnd(v71, *(_QWORD *)v31, 0, 0, 0);
          GreSelectVisRgn(v71, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v71,
            *((unsigned int *)v20 + 14),
            *((unsigned int *)v20 + 15),
            (unsigned int)(*((_DWORD *)v20 + 16) - *((_DWORD *)v20 + 14)),
            *((_DWORD *)v20 + 17) - *((_DWORD *)v20 + 15),
            v71,
            *((_DWORD *)v20 + 14) - *((_DWORD *)v20 + 18),
            *((_DWORD *)v20 + 15) - *((_DWORD *)v20 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd(v71, 0, 0, 0, 0);
        }
      }
LABEL_72:
      if ( *(char *)(*((_QWORD *)v31 + 5) + 16LL) >= 0
        || (v30 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v20[12], ghrgnVisNew, 4u, v30) )
      {
        v37 = (HRGN)v20[12];
        if ( v37 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v37, ghrgnVisNew, 2u, v30) )
          {
LABEL_99:
            v19 = v80;
            goto LABEL_46;
          }
        }
        else
        {
          v91 = *(__m128i *)(*(_QWORD *)(v89 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v91, &v91, v31, v89);
          SetRectRgnIndirect(ghrgnInvalid, &v91);
        }
LABEL_75:
        v19 = v80;
        if ( (v30 & 4) == 0 )
        {
          if ( (v80 & 0x20) != 0 )
          {
            v53 = 5LL;
            v54 = 0LL;
            v55 = ghrgnValidSum;
          }
          else
          {
            v53 = 2LL;
            v55 = ghrgnValidSum;
            v54 = ghrgnValidSum;
          }
          GreCombineRgn(v55, ghrgnValid, v54, v53);
          v19 &= ~0x20u;
          LODWORD(v80) = v19;
        }
        if ( (v19 & 0x20) != 0 )
        {
          if ( (v30 & 4) != 0 )
            goto LABEL_47;
          v73 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v73 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v73, 4LL) > 1 )
          goto LABEL_47;
LABEL_46:
        *(_DWORD *)(*((_QWORD *)v31 + 5) + 232LL) &= ~2u;
        v30 |= 8u;
LABEL_47:
        if ( *(char *)(*((_QWORD *)v31 + 5) + 16LL) < 0 )
        {
          v74 = *((_DWORD *)v20 + 8);
          if ( (v74 & 0x40) == 0 && (v74 & 0x87) != 7 )
          {
            Spb = FindSpb(v31);
            FreeSpb(Spb);
          }
        }
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v31)
          && (*(_BYTE *)(*((_QWORD *)v31 + 5) + 26LL) & 8) != 0
          && v20[14]
          && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, (HRGN)v20[12], 4u, v30) )
        {
          GreForceClipRgnChange(v48, *(_QWORD *)v31);
        }
        v21 = v20[12];
        if ( v21 )
        {
          GreDeleteObject(v21);
          v20[12] = 0LL;
        }
        v18 = v82;
        if ( (*(_BYTE *)(*((_QWORD *)v31 + 5) + 21LL) & 1) == 0 && (v20[4] & 0x40) != 0 )
          v18 = ++v82;
        if ( (v30 & 8) != 0 )
          goto LABEL_62;
        if ( (v30 & 5) == 4 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v86);
          xxxInternalInvalidate(v31, (HRGN)1, 0x485u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v86);
        }
        v80 = ghrgnInvalid;
        v34 = LogicalToPhysicalInPlaceRgnWorker(v31, &v80, 0LL);
        v35 = v34;
        if ( (v19 & 0x40) != 0 )
        {
          if ( !valid && !v34 )
          {
            v90 = (HRGN)ghrgnInvalid;
LABEL_61:
            v19 &= ~0x40u;
            LODWORD(v80) = v19;
LABEL_62:
            v15 = v79;
            v2 = v85;
            goto LABEL_19;
          }
          v56 = 5LL;
          v58 = 0LL;
          v57 = ghrgnInvalidSum;
        }
        else
        {
          v56 = 2LL;
          v57 = ghrgnInvalidSum;
          v58 = ghrgnInvalidSum;
        }
        v59 = v80;
        GreCombineRgn(v57, v80, v58, v56);
        if ( v35 )
          GreDeleteObject(v59);
        goto LABEL_61;
      }
      v72 = RestoreSpb(v31, ghrgnInvalid, &v85);
      if ( v72 )
      {
        if ( v72 == 2 && (v80 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v30 & 1) != 0 )
          goto LABEL_165;
      }
      else if ( (v30 & 1) != 0 )
      {
        goto LABEL_99;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_165:
      if ( (v30 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v30 |= 0x20u;
      goto LABEL_75;
    }
LABEL_22:
    if ( v84 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), v92);
    v24 = *(__int64 **)(v1 + 40);
    v25 = *(_DWORD *)(v1 + 28);
    while ( --v25 >= 0 )
    {
      v21 = *v24;
      if ( *v24 )
      {
        v22 = _HMObjectFromHandle(v21);
        if ( (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v22);
      }
      v24 += 21;
    }
    if ( (v19 & 0x40) == 0 )
    {
      if ( v18 != *(_DWORD *)(v1 + 28) || (v38 = 69, v13 == GetDesktopWindow(v13)) )
        v38 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v87);
      xxxInternalInvalidate((struct tagWND *)v13, v90, v38);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v87);
    }
    if ( gcountPWO )
      GreClientRgnDone(v21, v22, v16, v17, *(_QWORD *)v76, v77, v78);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v79;
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
