/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0026F74 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0027084 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C002AE38 (PhysicalToLogicalInPlaceRgn.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C007A128 (GreRedrawSpriteOverlapPresent.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007B908 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008C360 (GreHintDCWnd.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C4BEC (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x1C00C4C44 (GetOldRedirectionBitmap.c)
 *     UpdateSpriteArea @ 0x1C00E7B80 (UpdateSpriteArea.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00F99C4 (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FC95C (LogicalToPhysicalInPlaceRgn.c)
 *     GreForceClipRgnChange @ 0x1C010781C (GreForceClipRgnChange.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01CE610 (FindSpb.c)
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
 *     RestoreSpb @ 0x1C01CE808 (RestoreSpb.c)
 *     SpbCheck @ 0x1C01CEA10 (SpbCheck.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 *     GreUnlockDisplayArea @ 0x1C0256700 (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x1C02586CC (GreClientRgnDone.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzBltValidBits(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
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
  int v15; // r14d
  int v16; // r13d
  __int64 *v17; // rbx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  int v22; // ebx
  __int64 v23; // r8
  int v25; // edi
  _QWORD *v26; // rbx
  unsigned int v27; // esi
  struct tagWND *v28; // rdi
  __int64 RedirectionBitmap; // rax
  __int64 v30; // rdx
  int v31; // ecx
  HRGN v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // esi
  unsigned int v36; // ebx
  int v37; // r9d
  int v38; // edx
  int v39; // r10d
  int v40; // r8d
  int v41; // eax
  struct tagWND *v42; // r15
  struct tagWND *v43; // r8
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r8
  _QWORD *v47; // r8
  __int64 StyleWindow; // rax
  struct tagWND *v49; // r14
  __int64 v50; // r15
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rcx
  int v59; // edi
  __int64 v60; // rbx
  int v61; // edx
  int v62; // r13d
  unsigned int v63; // r12d
  __int64 v64; // r10
  __int64 v65; // r8
  int v66; // eax
  __m128i v67; // xmm0
  int v68; // ecx
  int v69; // edx
  __int64 OldRedirectionBitmap; // rax
  __int64 v71; // r10
  __int64 v72; // r12
  int v73; // eax
  int v74; // eax
  __int64 Spb; // rax
  unsigned int v76[2]; // [rsp+28h] [rbp-99h]
  __int64 v77; // [rsp+30h] [rbp-91h]
  __int64 *v78; // [rsp+38h] [rbp-89h]
  int v79; // [rsp+40h] [rbp-81h]
  int v80; // [rsp+48h] [rbp-79h]
  int v81; // [rsp+50h] [rbp-71h]
  int v82; // [rsp+58h] [rbp-69h]
  int v83; // [rsp+68h] [rbp-59h]
  __int64 v84; // [rsp+70h] [rbp-51h] BYREF
  int v85; // [rsp+78h] [rbp-49h]
  int v86; // [rsp+7Ch] [rbp-45h]
  int valid; // [rsp+80h] [rbp-41h]
  int v88; // [rsp+84h] [rbp-3Dh]
  __int64 v89; // [rsp+88h] [rbp-39h] BYREF
  __m128i v90; // [rsp+98h] [rbp-29h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-9h]
  HRGN v94; // [rsp+C0h] [rbp-1h]
  __m128i v95; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v96[2]; // [rsp+D8h] [rbp+17h] BYREF

  v1 = a1;
  v91 = a1;
  v2 = 0LL;
  v89 = 0LL;
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
    v93 = v12;
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheck();
    zzzChangeStates((struct tagWND *)v12, (struct tagSMWP *)v1);
    v96[0] = 0LL;
    v96[1] = 0LL;
    v88 = 0;
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
              v61 = *(_DWORD *)(v60 + 72);
              if ( v61 || *(_DWORD *)(v60 + 76) )
              {
                v68 = -*(_DWORD *)(v60 + 76);
                v69 = -v61;
                v90 = *(__m128i *)(v60 + 56);
                v67 = v90;
                v90.m128i_i32[2] += v69;
                v90.m128i_i32[3] += v68;
                v90.m128i_i32[1] += v68;
                v95 = v67;
                v90.m128i_i32[0] = v69 + _mm_cvtsi128_si32(v67);
                UnionRect(v96, &v95, &v90);
                v13 = 1;
              }
            }
          }
          v60 += 168LL;
          --v59;
        }
        while ( v59 >= 0 );
        v88 = v13;
      }
    }
    v14 = ~(unsigned __int8)(*(_DWORD *)(gptiCurrent + 480LL) >> 14) & 2;
    v83 = v14;
    zzzLockDisplayAreaAndInvalidateDCCache(
      v12,
      (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 31LL) & 2) != 0 ? 28 : 26,
      (unsigned __int64)v96 & -(__int64)(v13 != 0));
    v15 = 0;
    v16 = 96;
    v17 = *(__int64 **)(v1 + 40);
    v18 = *(_DWORD *)(v1 + 28) - 1;
    LODWORD(v84) = 96;
    v94 = (HRGN)ghrgnInvalidSum;
    v86 = 0;
    v85 = v18;
    if ( v18 >= 0 )
    {
      v83 = v14;
      v19 = v18;
      while ( 1 )
      {
        --valid;
        v20 = *v17;
        if ( *v17 )
          break;
LABEL_20:
        v17 += 21;
        v85 = --v19;
        if ( v19 < 0 )
        {
          v1 = v91;
          v12 = v93;
          goto LABEL_22;
        }
      }
      if ( (v17[4] & 8) != 0 )
      {
LABEL_19:
        v19 = v85;
        goto LABEL_20;
      }
      v27 = *((_DWORD *)v17 + 22);
      v83 = v14 | 1;
      v28 = *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v20);
      if ( (*(_BYTE *)(*((_QWORD *)v28 + 5) + 26LL) & 8) != 0 )
      {
        RedirectionBitmap = GetRedirectionBitmap(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v20));
        v30 = *((_QWORD *)v28 + 5);
        if ( !RedirectionBitmap && (*(_BYTE *)(v30 + 27) & 0x20) == 0 )
          goto LABEL_96;
        v31 = *(_DWORD *)(v30 + 232);
        if ( (v31 & 0x20) == 0 && (*((_DWORD *)v17 + 39) & 7) == 0 )
          goto LABEL_96;
        *(_DWORD *)(v30 + 232) = v31 | 2;
      }
      if ( !(unsigned int)SwpCalcVisRgn(v28, ghrgnVisNew) )
        v27 |= 1u;
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckRect(v28, (struct tagRECT *)(*((_QWORD *)v28 + 5) + 88LL), 1u);
      if ( (v27 & 3) == 0 && *(_QWORD *)(*((_QWORD *)v28 + 5) + 136LL) != 1LL )
      {
        v37 = *((_DWORD *)v17 + 16);
        v38 = *((_DWORD *)v17 + 14);
        if ( v37 > v38 )
        {
          v39 = *((_DWORD *)v17 + 17);
          v40 = *((_DWORD *)v17 + 15);
          if ( v39 > v40 )
          {
            v41 = *((_DWORD *)v17 + 19);
            v76[0] = v39 - v41;
            GreSetRectRgn(
              ghrgnSWP1,
              (unsigned int)(v38 - *((_DWORD *)v17 + 18)),
              (unsigned int)(v40 - v41),
              (unsigned int)(v37 - *((_DWORD *)v17 + 18)),
              *(_QWORD *)v76,
              v77,
              v78,
              v79,
              v80,
              v81,
              v82);
            if ( (unsigned int)GreCombineRgn(ghrgnValid, ghrgnSWP1, v17[12], 1LL) >= 2
              && ((v16 & 0x20) != 0 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnValidSum, 4LL) > 1) )
            {
              if ( v17[9] )
                GreOffsetRgn(ghrgnValid, *((unsigned int *)v17 + 18), *((unsigned int *)v17 + 19));
              v42 = v28;
              v43 = 0LL;
              while ( 1 )
              {
                v44 = *((_QWORD *)v42 + 5);
                v45 = *(_QWORD *)(v44 + 136);
                if ( v45 == 1 )
                  break;
                if ( v45 )
                {
                  v92 = *(_QWORD *)(v44 + 136);
                  if ( v43 )
                  {
                    v66 = PhysicalToLogicalInPlaceRgn(v43, &v92);
                    v45 = v92;
                    v62 = v66;
                  }
                  else
                  {
                    v62 = 0;
                  }
                  v63 = GreCombineRgn(ghrgnValid, ghrgnValid, v45, 4LL);
                  if ( v62 )
                    GreDeleteObject(v45);
                  if ( v63 < 2 )
                    break;
                  v43 = v42;
                }
                v42 = (struct tagWND *)*((_QWORD *)v42 + 10);
                if ( !v42 || (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 2) != 0 )
                {
                  v46 = v17[15];
                  if ( (!v46 || (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, v46, 4LL) >= 2)
                    && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnVisNew, 1LL) > 1 )
                  {
                    goto LABEL_54;
                  }
                  break;
                }
              }
            }
          }
        }
      }
      v27 |= 4u;
LABEL_54:
      if ( (v27 & 4) == 0 && (*((_DWORD *)v17 + 18) || *((_DWORD *)v17 + 19)) )
      {
        StyleWindow = GetStyleWindow((__int64)v28, 2568);
        v49 = (struct tagWND *)StyleWindow;
        if ( StyleWindow )
        {
          v50 = GetRedirectionBitmap(StyleWindow);
          if ( v50 )
          {
            if ( v28 == v49 )
            {
              if ( (*((_DWORD *)v17 + 39) & 1) == 0
                && *((_DWORD *)v17 + 18) == *((_DWORD *)v17 + 4) - *((_DWORD *)v17 + 20)
                && *((_DWORD *)v17 + 19) == *((_DWORD *)v17 + 5) - *((_DWORD *)v17 + 21) )
              {
                goto LABEL_55;
              }
              OldRedirectionBitmap = GetOldRedirectionBitmap(v49);
              v71 = v50;
              if ( OldRedirectionBitmap )
                v71 = OldRedirectionBitmap;
              v82 = *((_DWORD *)v17 + 21);
              v81 = *((_DWORD *)v17 + 20);
              v80 = -*((_DWORD *)v17 + 19);
              v65 = v71;
              v79 = -*((_DWORD *)v17 + 18);
              v78 = v17 + 7;
              v77 = ghrgnValid;
              *(_QWORD *)v76 = ghdcMem2;
            }
            else
            {
              v64 = *((_QWORD *)v49 + 5);
              v82 = *(_DWORD *)(v64 + 92);
              v81 = *(_DWORD *)(v64 + 88);
              v80 = -*((_DWORD *)v17 + 19);
              v65 = v50;
              v79 = -*((_DWORD *)v17 + 18);
              v78 = v17 + 7;
              v77 = ghrgnValid;
              *(_QWORD *)v76 = ghdcMem;
            }
            UpdateSpriteArea(v49, v50, v65);
            goto LABEL_55;
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)v28 + 5) + 26LL) & 8) == 0 )
        {
          v72 = v89;
          if ( !v89 )
          {
            v72 = *(_QWORD *)(gpDispInfo + 56LL);
            v89 = v72;
          }
          GreHintDCWnd(v72, *(_QWORD *)v28, 0, 0, 0);
          GreSelectVisRgn(v72, ghrgnValid, 2LL);
          NtGdiBitBltInternal(
            v72,
            *((unsigned int *)v17 + 14),
            *((unsigned int *)v17 + 15),
            (unsigned int)(*((_DWORD *)v17 + 16) - *((_DWORD *)v17 + 14)),
            *((_DWORD *)v17 + 17) - *((_DWORD *)v17 + 15),
            v72,
            *((_DWORD *)v17 + 14) - *((_DWORD *)v17 + 18),
            *((_DWORD *)v17 + 15) - *((_DWORD *)v17 + 19),
            13369376,
            0,
            1);
          GreHintDCWnd(v72, 0, 0, 0, 0);
        }
      }
LABEL_55:
      if ( *(char *)(*((_QWORD *)v28 + 5) + 16LL) >= 0
        || (v27 & 2) != 0
        || !(unsigned int)CombineOldNewVis(ghrgnInvalid, (HRGN)v17[12], ghrgnVisNew, 4u, v27) )
      {
        v32 = (HRGN)v17[12];
        if ( v32 )
        {
          if ( !(unsigned int)CombineOldNewVis(ghrgnInvalid, v32, ghrgnVisNew, 2u, v27) )
          {
LABEL_95:
            v16 = v84;
            goto LABEL_96;
          }
        }
        else
        {
          v95 = *(__m128i *)(*(_QWORD *)(v93 + 40) + 88LL);
          TransformRectBetweenCoordinateSpaces(&v95, &v95, v28, v93, *(_QWORD *)v76);
          SetRectRgnIndirect(ghrgnInvalid, &v95);
        }
LABEL_58:
        v16 = v84;
        if ( (v27 & 4) == 0 )
        {
          if ( (v84 & 0x20) != 0 )
          {
            v51 = 5LL;
            v52 = 0LL;
            v53 = ghrgnValidSum;
          }
          else
          {
            v51 = 2LL;
            v53 = ghrgnValidSum;
            v52 = ghrgnValidSum;
          }
          GreCombineRgn(v53, ghrgnValid, v52, v51);
          v16 &= ~0x20u;
          LODWORD(v84) = v16;
        }
        if ( (v16 & 0x20) != 0 )
        {
          if ( (v27 & 4) != 0 )
          {
LABEL_61:
            if ( *(char *)(*((_QWORD *)v28 + 5) + 16LL) < 0 )
            {
              v74 = *((_DWORD *)v17 + 8);
              if ( (v74 & 0x40) == 0 && (v74 & 0x87) != 7 )
              {
                Spb = FindSpb(v28);
                FreeSpb(Spb);
              }
            }
            if ( (unsigned int)IsToplevelWindowDesktopComposed(v28)
              && (*(_BYTE *)(*((_QWORD *)v28 + 5) + 26LL) & 8) != 0
              && v17[14]
              && !(unsigned int)CombineOldNewVis(ghrgnSWP1, ghrgnVisNew, (HRGN)v17[12], 4u, v27) )
            {
              GreForceClipRgnChange(v58, *(_QWORD *)v28);
            }
            v33 = v17[12];
            if ( v33 )
            {
              GreDeleteObject(v33);
              v17[12] = 0LL;
            }
            v15 = v86;
            if ( (*(_BYTE *)(*((_QWORD *)v28 + 5) + 21LL) & 1) == 0 && (v17[4] & 0x40) != 0 )
              v15 = ++v86;
            if ( (v27 & 8) != 0 )
              goto LABEL_76;
            if ( (v27 & 5) == 4 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v90);
              xxxInternalInvalidate(v28, (HRGN)1, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v90);
            }
            v84 = ghrgnInvalid;
            v34 = LogicalToPhysicalInPlaceRgn(v28, &v84);
            v35 = v34;
            if ( (v16 & 0x40) != 0 )
            {
              if ( !valid && !v34 )
              {
                v94 = (HRGN)ghrgnInvalid;
LABEL_75:
                v16 &= ~0x40u;
                LODWORD(v84) = v16;
LABEL_76:
                v14 = v83;
                v2 = v89;
                goto LABEL_19;
              }
              v54 = 5LL;
              v56 = 0LL;
              v55 = ghrgnInvalidSum;
            }
            else
            {
              v54 = 2LL;
              v55 = ghrgnInvalidSum;
              v56 = ghrgnInvalidSum;
            }
            v57 = v84;
            GreCombineRgn(v55, v84, v56, v54);
            if ( v35 )
              GreDeleteObject(v57);
            goto LABEL_75;
          }
          v47 = (_QWORD *)ghrgnValid;
        }
        else
        {
          v47 = (_QWORD *)ghrgnValidSum;
        }
        if ( (unsigned int)GreCombineRgn(ghrgnInvalid, ghrgnInvalid, *v47, 4LL) > 1 )
          goto LABEL_61;
LABEL_96:
        *(_DWORD *)(*((_QWORD *)v28 + 5) + 232LL) &= ~2u;
        v27 |= 8u;
        goto LABEL_61;
      }
      v73 = RestoreSpb(v28, ghrgnInvalid, &v89);
      if ( v73 )
      {
        if ( v73 == 2 && (v84 & 0x20) == 0 )
          GreCombineRgn(ghrgnValidSum, ghrgnValidSum, ghrgnInvalid, 4LL);
        if ( (v27 & 1) != 0 )
          goto LABEL_164;
      }
      else if ( (v27 & 1) != 0 )
      {
        goto LABEL_95;
      }
      GreCombineRgn(ghrgnInvalid, ghrgnInvalid, ghrgnVisNew, 2LL);
LABEL_164:
      if ( (v27 & 0x20) == 0 && (unsigned int)GreCombineRgn(ghrgnValid, ghrgnValid, ghrgnInvalid, 4LL) <= 1 )
        v27 |= 0x20u;
      goto LABEL_58;
    }
LABEL_22:
    if ( v88 )
      GreUnlockDisplayArea(*(_QWORD *)(gpDispInfo + 40LL), v96);
    v21 = *(_QWORD **)(v1 + 40);
    v22 = *(_DWORD *)(v1 + 28);
    while ( --v22 >= 0 )
    {
      if ( *v21 )
      {
        v23 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*v21);
        if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap(v23);
      }
      v21 += 21;
    }
    if ( (v16 & 0x40) == 0 )
    {
      if ( v15 != *(_DWORD *)(v1 + 28) || (v36 = 69, v12 == GetDesktopWindow(v12)) )
        v36 = 133;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v91);
      xxxInternalInvalidate((struct tagWND *)v12, v94, v36);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v91);
    }
    if ( gcountPWO )
      GreClientRgnDone();
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(gpDispInfo + 40LL));
    if ( v2 )
    {
      GreSelectVisRgn(v2, 0LL, 1LL);
      GreGetBounds(v2, 0LL, 0LL);
    }
    v3 = v83;
  }
  else
  {
LABEL_37:
    v25 = *(_DWORD *)(v1 + 28) - 1;
    if ( v25 >= 0 )
    {
      v26 = (_QWORD *)(*(_QWORD *)(v1 + 40) + 96LL);
      do
      {
        if ( *v26 )
        {
          GreDeleteObject(*v26);
          *v26 = 0LL;
        }
        v26 += 21;
        --v25;
      }
      while ( v25 >= 0 );
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return v3;
}
