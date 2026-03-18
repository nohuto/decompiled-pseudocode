/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C002B420 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0042BD4 (GreRedrawSpriteOverlapPresent.c)
 *     GreForceClipRgnChange @ 0x1C0044764 (GreForceClipRgnChange.c)
 *     DeleteOldRedirectionBitmap @ 0x1C0044BD0 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C0044C28 (GetOldRedirectionBitmap.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00C43B4 (PhysicalToLogicalInPlaceRgn.c)
 *     IsThreadDesktopComposed @ 0x1C00C94A0 (IsThreadDesktopComposed.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00CAE50 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00CCD6C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     UpdateSpriteArea @ 0x1C00ECAF0 (UpdateSpriteArea.c)
 *     GreHintDCWnd @ 0x1C00EEA10 (GreHintDCWnd.c)
 *     UnionRect @ 0x1C010FF60 (UnionRect.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C011D720 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C011E0B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     FindSpb @ 0x1C0208EA4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     RestoreSpb @ 0x1C02090E0 (RestoreSpb.c)
 *     SpbCheck @ 0x1C020931C (SpbCheck.c)
 *     SpbCheckRect @ 0x1C0209430 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C028289C (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C02845E0 (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r12
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  int v12; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  int v23; // r13d
  __int64 *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdi
  int v29; // ebx
  int v31; // edi
  _QWORD *v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // esi
  __int64 v35; // rdi
  __int64 RedirectionBitmap; // rax
  __int64 v37; // rdx
  int v38; // eax
  int v39; // esi
  int v40; // ecx
  HRGN v41; // rdx
  unsigned int v42; // ebx
  int v43; // r9d
  int v44; // edx
  int v45; // r10d
  int v46; // r8d
  __int64 v47; // r15
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 StyleWindow; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rbx
  int v65; // edi
  int v66; // r13d
  unsigned int v67; // r12d
  int v68; // edx
  int v69; // eax
  __m128i v70; // xmm0
  int v71; // ecx
  int v72; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v74; // r10
  HDC v75; // r12
  int v76; // eax
  _QWORD *v77; // r8
  int v78; // eax
  __int64 Spb; // rax
  unsigned int v80[2]; // [rsp+28h] [rbp-99h]
  __int64 v81; // [rsp+30h] [rbp-91h]
  __int64 *v82; // [rsp+38h] [rbp-89h]
  int v83; // [rsp+68h] [rbp-59h]
  __int64 v84; // [rsp+70h] [rbp-51h] BYREF
  int v85; // [rsp+78h] [rbp-49h]
  int v86; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v88; // [rsp+84h] [rbp-3Dh]
  HDC v89[2]; // [rsp+88h] [rbp-39h] BYREF
  __m128i v90; // [rsp+98h] [rbp-29h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-9h]
  HRGN v94; // [rsp+C0h] [rbp-1h]
  __m128i v95; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v96[2]; // [rsp+D8h] [rbp+17h] BYREF

  v91 = a1;
  v96[0] = 0LL;
  v4 = a1;
  v96[1] = 0LL;
  v5 = 0LL;
  v6 = 0;
  v89[0] = 0LL;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  valid = BltValidInit((struct tagSMWP *)v4, v7, v8, v9);
  if ( !valid )
    goto LABEL_37;
  v11 = 0LL;
  v12 = *(_DWORD *)(v4 + 28) - 1;
  v13 = *(_QWORD **)(v4 + 40);
  if ( v12 < 0 )
    goto LABEL_37;
  do
  {
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure(*v13, v10);
    v15 = v14;
    if ( v14 && *(_QWORD *)(v14 + 104) && IsStillWindowC(v13[1], v10) )
    {
      if ( v13[14] == 2LL
        && ((*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 1) == 0 || *(_QWORD *)(v15 + 104) != GetDesktopWindow(v15)) )
      {
        v13[14] = 0LL;
      }
      v16 = v13;
      if ( v11 )
        v16 = v11;
      v11 = v16;
    }
    else
    {
      *v13 = 0LL;
      *((_DWORD *)v13 + 8) = 6159;
    }
    v13 += 21;
    --v12;
  }
  while ( v12 >= 0 );
  if ( v11 )
  {
    v17 = *(_QWORD *)(_HMObjectFromHandle(*v11) + 104);
    v93 = v17;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v17, (struct tagSMWP *)v4);
    v88 = 0;
    if ( !(unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v64 = *(_QWORD *)(v4 + 40);
      v65 = *(_DWORD *)(v4 + 28);
      while ( --v65 >= 0 )
      {
        if ( *(_QWORD *)v64 && (*(_DWORD *)(v64 + 32) & 8) == 0 )
        {
          _HMObjectFromHandle(*(_QWORD *)v64);
          v68 = *(_DWORD *)(v64 + 72);
          if ( v68 || *(_DWORD *)(v64 + 76) )
          {
            v71 = -*(_DWORD *)(v64 + 76);
            v72 = -v68;
            v90 = *(__m128i *)(v64 + 56);
            v70 = v90;
            v90.m128i_i32[2] += v72;
            v90.m128i_i32[3] += v71;
            v90.m128i_i32[1] += v71;
            v95 = v70;
            v90.m128i_i32[0] = v72 + _mm_cvtsi128_si32(v70);
            UnionRect(v96, &v95, &v90);
            v18 = 1;
            v88 = 1;
          }
          else
          {
            v18 = v88;
          }
        }
        v64 += 168LL;
      }
    }
    v19 = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 480LL) >> 14) & 2;
    v83 = v19;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v17,
      (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)v96 & -(__int64)(v18 != 0));
    v22 = 0;
    v23 = 96;
    v24 = *(__int64 **)(v4 + 40);
    v25 = (unsigned int)(*(_DWORD *)(v4 + 28) - 1);
    LODWORD(v84) = 96;
    v26 = ghrgnInvalidSum;
    v94 = (HRGN)ghrgnInvalidSum;
    v86 = 0;
    v85 = v25;
    if ( (int)v25 >= 0 )
    {
      v83 = v19;
      v27 = v25;
      while ( 1 )
      {
        --valid;
        v25 = *v24;
        if ( *v24 )
          break;
LABEL_20:
        v24 += 21;
        v85 = --v27;
        if ( v27 < 0 )
        {
          v4 = v91;
          v17 = v93;
          goto LABEL_22;
        }
      }
      if ( (v24[4] & 8) != 0 )
      {
LABEL_19:
        v27 = v85;
        goto LABEL_20;
      }
      _HMObjectFromHandle(v25);
      v83 = v19 | 1;
      v33 = _HMObjectFromHandle(*v24);
      v34 = *((_DWORD *)v24 + 22);
      v35 = v33;
      if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(v33);
        v37 = *(_QWORD *)(v35 + 40);
        if ( !RedirectionBitmap && (*(_BYTE *)(v37 + 27) & 0x20) == 0 )
          goto LABEL_46;
        v40 = *(_DWORD *)(v37 + 232);
        if ( (v40 & 0x20) == 0 && (*((_DWORD *)v24 + 39) & 7) == 0 )
          goto LABEL_46;
        *(_DWORD *)(v37 + 232) = v40 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v35, ghrgnVisNew) )
        v34 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect((struct tagWND *)v35, (struct tagRECT *)(*(_QWORD *)(v35 + 40) + 88LL), 1u);
      if ( (v34 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v35 + 40) + 136LL) != 1LL )
      {
        v43 = *((_DWORD *)v24 + 16);
        v44 = *((_DWORD *)v24 + 14);
        if ( v43 > v44 )
        {
          v45 = *((_DWORD *)v24 + 17);
          v46 = *((_DWORD *)v24 + 15);
          if ( v45 > v46 )
          {
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v44 - *((_DWORD *)v24 + 18)),
              (unsigned int)(v46 - *((_DWORD *)v24 + 19)),
              (unsigned int)(v43 - *((_DWORD *)v24 + 18)),
              v45 - *((_DWORD *)v24 + 19));
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v24[12], 1LL) >= 2
              && ((v23 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v24[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v24 + 18));
              v47 = v35;
              v48 = 0LL;
              while ( 1 )
              {
                v49 = *(_QWORD *)(v47 + 40);
                v50 = *(_QWORD *)(v49 + 136);
                if ( v50 == 1 )
                  break;
                if ( v50 )
                {
                  v92 = *(_QWORD *)(v49 + 136);
                  if ( v48 )
                  {
                    v69 = PhysicalToLogicalInPlaceRgn(v48, (__int64)&v92);
                    v50 = v92;
                    v66 = v69;
                  }
                  else
                  {
                    v66 = 0;
                  }
                  v67 = GreCombineRgn(ghrgnValid, ghrgnValid, v50, 4LL);
                  if ( v66 )
                    GreDeleteObject(v50);
                  if ( v67 < 2 )
                    break;
                  v48 = v47;
                }
                v47 = *(_QWORD *)(v47 + 104);
                if ( !v47 || (*(_BYTE *)(*(_QWORD *)(v47 + 40) + 31LL) & 2) != 0 )
                {
                  v51 = v24[15];
                  if ( (!v51 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v51, 4LL) >= 2)
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
      v34 |= 4u;
LABEL_71:
      if ( (v34 & 4) == 0 && (*((_DWORD *)v24 + 18) || *((_DWORD *)v24 + 19)) )
      {
        StyleWindow = GetStyleWindow(v35, 2568);
        v54 = StyleWindow;
        if ( StyleWindow && (v55 = GetRedirectionBitmap(StyleWindow)) != 0 )
        {
          if ( v35 != v54 )
          {
            v56 = v55;
            v82 = v24 + 7;
            v81 = ghrgnValid;
            *(_QWORD *)v80 = ghdcMem;
LABEL_109:
            UpdateSpriteArea(v54, v55, v56);
            goto LABEL_72;
          }
          if ( (*((_DWORD *)v24 + 39) & 1) != 0
            || *((_DWORD *)v24 + 18) != *((_DWORD *)v24 + 4) - *((_DWORD *)v24 + 20)
            || *((_DWORD *)v24 + 19) != *((_DWORD *)v24 + 5) - *((_DWORD *)v24 + 21) )
          {
            OldRedirectionBitmap = GetOldRedirectionBitmap(v54);
            v74 = v55;
            if ( OldRedirectionBitmap )
              v74 = OldRedirectionBitmap;
            v56 = v74;
            v82 = v24 + 7;
            v81 = ghrgnValid;
            *(_QWORD *)v80 = ghdcMem2;
            goto LABEL_109;
          }
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 26LL) & 8) == 0 )
        {
          v75 = v89[0];
          if ( !v89[0] )
          {
            v75 = *(HDC *)(gpDispInfo + 56LL);
            v89[0] = v75;
          }
          GreHintDCWnd((_DWORD)v75, *(_QWORD *)v35, 0, 0, 0);
          GreSelectVisRgn(v75, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v75,
            *((_DWORD *)v24 + 14),
            *((_DWORD *)v24 + 15),
            *((_DWORD *)v24 + 16) - *((_DWORD *)v24 + 14),
            *((_DWORD *)v24 + 17) - *((_DWORD *)v24 + 15),
            v75,
            *((_DWORD *)v24 + 14) - *((_DWORD *)v24 + 18),
            *((_DWORD *)v24 + 15) - *((_DWORD *)v24 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd((_DWORD)v75, 0, 0, 0, 0);
        }
      }
LABEL_72:
      if ( *(char *)(*(_QWORD *)(v35 + 40) + 16LL) >= 0
        || (v34 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v24[12], ghrgnVisNew, 4u, v34) )
      {
        v41 = (HRGN)v24[12];
        if ( v41 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v41, ghrgnVisNew, 2u, v34) )
          {
LABEL_99:
            v23 = v84;
            goto LABEL_46;
          }
        }
        else
        {
          v95 = *(__m128i *)(*(_QWORD *)(v93 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v95, &v95, v35, v93);
          SetRectRgnIndirect(ghrgnInvalid, &v95);
        }
LABEL_75:
        v23 = v84;
        if ( (v34 & 4) == 0 )
        {
          if ( (v84 & 0x20) != 0 )
          {
            v57 = 5LL;
            v58 = 0LL;
            v59 = ghrgnValidSum;
          }
          else
          {
            v57 = 2LL;
            v59 = ghrgnValidSum;
            v58 = ghrgnValidSum;
          }
          GreCombineRgn(v59, ghrgnValid, v58, v57);
          v23 &= ~0x20u;
          LODWORD(v84) = v23;
        }
        if ( (v23 & 0x20) != 0 )
        {
          if ( (v34 & 4) != 0 )
            goto LABEL_47;
          v77 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v77 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v77, 4LL) > 1 )
          goto LABEL_47;
LABEL_46:
        *(_DWORD *)(*(_QWORD *)(v35 + 40) + 232LL) &= ~2u;
        v34 |= 8u;
LABEL_47:
        if ( *(char *)(*(_QWORD *)(v35 + 40) + 16LL) < 0 )
        {
          v78 = *((_DWORD *)v24 + 8);
          if ( (v78 & 0x40) == 0 && (v78 & 0x87) != 7 )
          {
            Spb = FindSpb(v35);
            FreeSpb(Spb);
          }
        }
        if ( (unsigned int)IsToplevelWindowDesktopComposed(v35)
          && (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 26LL) & 8) != 0
          && v24[14]
          && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, (HRGN)v24[12], 4u, v34) )
        {
          GreForceClipRgnChange(v52, *(struct PDEVOBJ **)v35);
        }
        v25 = v24[12];
        if ( v25 )
        {
          GreDeleteObject(v25);
          v24[12] = 0LL;
        }
        v22 = v86;
        if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 21LL) & 1) == 0 && (v24[4] & 0x40) != 0 )
          v22 = ++v86;
        if ( (v34 & 8) != 0 )
          goto LABEL_62;
        if ( (v34 & 5) == 4 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v90);
          xxxInternalInvalidate((struct tagWND *)v35, (HRGN)1, 0x485u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v90);
        }
        v84 = ghrgnInvalid;
        v38 = LogicalToPhysicalInPlaceRgnWorker(v35, &v84, 0LL);
        v39 = v38;
        if ( (v23 & 0x40) != 0 )
        {
          if ( !valid && !v38 )
          {
            v94 = (HRGN)ghrgnInvalid;
LABEL_61:
            v23 &= ~0x40u;
            LODWORD(v84) = v23;
LABEL_62:
            v19 = v83;
            v5 = v89[0];
            goto LABEL_19;
          }
          v60 = 5LL;
          v62 = 0LL;
          v61 = ghrgnInvalidSum;
        }
        else
        {
          v60 = 2LL;
          v61 = ghrgnInvalidSum;
          v62 = ghrgnInvalidSum;
        }
        v63 = v84;
        GreCombineRgn(v61, v84, v62, v60);
        if ( v39 )
          GreDeleteObject(v63);
        goto LABEL_61;
      }
      v76 = RestoreSpb(v35, ghrgnInvalid, v89);
      if ( v76 )
      {
        if ( v76 == 2 && (v84 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v34 & 1) != 0 )
          goto LABEL_165;
      }
      else if ( (v34 & 1) != 0 )
      {
        goto LABEL_99;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_165:
      if ( (v34 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v34 |= 0x20u;
      goto LABEL_75;
    }
LABEL_22:
    if ( v88 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), v96);
    v28 = *(__int64 **)(v4 + 40);
    v29 = *(_DWORD *)(v4 + 28);
    while ( --v29 >= 0 )
    {
      v25 = *v28;
      if ( *v28 )
      {
        v26 = _HMObjectFromHandle(v25);
        if ( (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v26);
      }
      v28 += 21;
    }
    if ( (v23 & 0x40) == 0 )
    {
      if ( v22 != *(_DWORD *)(v4 + 28) || (v42 = 69, v17 == GetDesktopWindow(v17)) )
        v42 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v91);
      xxxInternalInvalidate((struct tagWND *)v17, v94, v42);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v91);
    }
    if ( gcountPWO )
      GreClientRgnDone(v25, v26, v20, v21, *(_QWORD *)v80, v81, v82);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v5 )
    {
      GreSelectVisRgn(v5, 0LL, 1LL);
      GreGetBounds(v5, 0LL, 0LL);
    }
    v6 = v83;
  }
  else
  {
LABEL_37:
    v31 = *(_DWORD *)(v4 + 28) - 1;
    if ( v31 >= 0 )
    {
      v32 = (_QWORD *)(*(_QWORD *)(v4 + 40) + 96LL);
      do
      {
        if ( *v32 )
        {
          GreDeleteObject(*v32);
          *v32 = 0LL;
        }
        v32 += 21;
        --v31;
      }
      while ( v31 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v6;
}
