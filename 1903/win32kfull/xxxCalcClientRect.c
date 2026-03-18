/*
 * XREFs of xxxCalcClientRect @ 0x1C0092864
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C023CB00 (xxxUpdateClientRect.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C006204C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C0093074 (GetCaptionHeight.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C009327C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCD30 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // r15d
  char v11; // dl
  int v12; // r14d
  int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // esi
  unsigned int *v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  int v20; // edi
  _BOOL8 v21; // rdx
  int v22; // r14d
  int v23; // ecx
  void *v24; // rax
  __int64 v25; // rax
  int v26; // r15d
  int v27; // r14d
  int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int *v32; // rax
  int v33; // edi
  _BOOL8 v34; // rdx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  int CaptionHeight; // eax
  int v39; // r15d
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v41; // esi
  __int64 v42; // rax
  unsigned int v43; // r14d
  int v44; // eax
  int v45; // edx
  int v46; // r12d
  int v47; // r13d
  int v48; // edi
  int DpiDependentMetric; // eax
  int v50; // r14d
  int v51; // edi
  int v52; // r15d
  int v53; // esi
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // ecx
  __int64 v62; // rcx
  unsigned int v63; // eax
  __int64 v64; // rax
  unsigned int v65; // r13d
  int v66; // r12d
  int v67; // r15d
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // esi
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  struct _KTHREAD *v74; // rdi
  __int64 v75; // rbx
  __int64 *v76; // rax
  _QWORD *result; // rax
  int v78; // [rsp+30h] [rbp-39h]
  __int128 v79; // [rsp+38h] [rbp-31h]
  __int64 *v81; // [rsp+48h] [rbp-21h] BYREF
  __int64 v82; // [rsp+50h] [rbp-19h] BYREF
  __int64 v83; // [rsp+58h] [rbp-11h]
  __int64 v84; // [rsp+60h] [rbp-9h] BYREF
  __int64 v85; // [rsp+68h] [rbp-1h]
  __int64 v86; // [rsp+70h] [rbp+7h]
  char v87; // [rsp+D0h] [rbp+67h]
  int v89; // [rsp+E0h] [rbp+77h]
  int v90; // [rsp+E8h] [rbp+7Fh]

  v89 = a3;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v82 = 0LL;
  v81 = (__int64 *)gSmartObjNullRef;
  v82 = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = &v82;
  v9 = a1[5];
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v10 = *(_DWORD *)(v9 + 28);
  v11 = *(_BYTE *)(v9 + 16);
  v12 = *(_DWORD *)(v9 + 24);
  v13 = *(_DWORD *)(v9 + 232);
  *(_BYTE *)(v9 + 16) = v11 & 0xF0;
  v87 = v11 & 0xF;
  v14 = IsWindowDesktopComposed(a1);
  v15 = 1LL;
  v16 = -268435456;
  if ( !v14 )
    goto LABEL_16;
  v17 = (unsigned int *)a1[5];
  v18 = v17[7];
  v19 = v17[6];
  v20 = v17[58];
  if ( v10 != v18 )
    goto LABEL_9;
  if ( v12 != (_DWORD)v19 || v13 != v20 )
  {
    if ( v10 != v18 )
    {
LABEL_9:
      v21 = ((v10 ^ v18) & 0xB1CF0000) != 0;
      v22 = ((v10 ^ v18) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
      v15 = -((v10 ^ v18) & 0xB1CF0000);
      v20 = ((v10 ^ v18) & 0xB1CF0000) != 0 ? v18 : 0;
      goto LABEL_14;
    }
    if ( v12 != (_DWORD)v19 )
    {
      v23 = (v12 ^ v19) & 0x4E27A9;
      v21 = v23 != 0;
      v22 = v23 != 0 ? 0xFFFFFFEC : 0;
      v15 = (unsigned int)-v23;
      v20 = (_DWORD)v15 != 0 ? v19 : 0;
      goto LABEL_14;
    }
    if ( ((v13 ^ v20) & 0x2E00300) != 0 )
    {
      v21 = 1LL;
      v22 = -268435456;
LABEL_14:
      if ( v21 )
      {
        v24 = (void *)ReferenceDwmApiPort(v15, v21, v19);
        DwmAsyncChildStyleChange(v24, *a1, v22, v20);
      }
    }
  }
LABEL_16:
  v25 = a1[5];
  v26 = *(_DWORD *)(v25 + 28);
  v27 = *(_DWORD *)(v25 + 24);
  v28 = *(_DWORD *)(v25 + 232);
  *(_BYTE *)(v25 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_28;
  v32 = (unsigned int *)a1[5];
  v31 = v32[7];
  v30 = v32[6];
  v33 = v32[58];
  if ( v26 != (_DWORD)v31 )
    goto LABEL_21;
  if ( v27 == (_DWORD)v30 && v28 == v33 )
    goto LABEL_28;
  if ( v26 == (_DWORD)v31 )
  {
    if ( v27 == (_DWORD)v30 )
    {
      if ( ((v28 ^ v33) & 0x2E00300) == 0 )
        goto LABEL_28;
      v34 = 1LL;
    }
    else
    {
      v34 = ((v27 ^ (unsigned int)v30) & 0x4E27A9) != 0;
      v16 = ((v27 ^ (unsigned int)v30) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
      v29 = -((v27 ^ (unsigned int)v30) & 0x4E27A9);
      v33 = ((v27 ^ (unsigned int)v30) & 0x4E27A9) != 0 ? v30 : 0;
    }
  }
  else
  {
LABEL_21:
    v34 = ((v26 ^ (unsigned int)v31) & 0xB1CF0000) != 0;
    v16 = ((v26 ^ (unsigned int)v31) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
    v29 = -((v26 ^ (unsigned int)v31) & 0xB1CF0000);
    v33 = ((v26 ^ (unsigned int)v31) & 0xB1CF0000) != 0 ? v31 : 0;
  }
  if ( v34 )
  {
    v35 = (void *)ReferenceDwmApiPort(v29, v34, v30);
    DwmAsyncChildStyleChange(v35, *a1, v16, v33);
  }
LABEL_28:
  v36 = a1[5];
  if ( (*(_BYTE *)(v36 + 31) & 0x20) == 0 )
  {
    v37 = HIDWORD(*(_QWORD *)a2);
    v78 = v37;
    v79 = *a2;
    if ( (*(_BYTE *)(v36 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, (__int64)a1, 8u, 1);
      CaptionHeight = GetCaptionHeight(a1);
      v36 = a1[5];
      v39 = v37 + CaptionHeight;
    }
    else
    {
      v39 = HIDWORD(*(_QWORD *)a2);
    }
    v31 = 96LL;
    if ( (*(_DWORD *)(v36 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      v30 = a1[2];
      v41 = WindowDpiLastNotify;
    }
    else if ( (*(_DWORD *)(v36 + 288) & 0xF) == 0
           && (v30 = a1[2], (v42 = *(_QWORD *)(v30 + 448)) != 0)
           && (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 64LL) & 1) != 0 )
    {
      v41 = 96;
    }
    else
    {
      v30 = a1[2];
      v41 = *(unsigned __int16 *)(*(_QWORD *)(v30 + 416) + 284LL);
    }
    if ( *(_DWORD *)(v30 + 624) <= 0x9900u )
      v43 = *(_DWORD *)(v30 + 640);
    else
      v43 = 0;
    v44 = *(_DWORD *)(v36 + 24);
    v45 = *(_DWORD *)(v36 + 28);
    v90 = v45;
    if ( (v44 & 0x100) != 0 )
      v46 = 2;
    else
      v46 = (v44 & 0x20000) != 0;
    v47 = v45 & 0xC00000;
    if ( (v45 & 0xC00000) != 0 || (v44 & 1) != 0 )
      ++v46;
    if ( (v43 & 0x10000000) != 0 || (v43 & 0x20000000) != 0 )
    {
      v48 = 0;
    }
    else if ( v41 == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v48 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( v41 == (_DWORD)v31 )
    {
      v48 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(v41) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v41);
      else
        DpiDependentMetric = GetDpiDependentMetric(29LL, v41);
      v45 = v90;
      v48 = DpiDependentMetric;
    }
    if ( (v45 & 0x40000) != 0 || v48 > 0 && (v47 == 12582912 || (v45 & 0x40000) != 0) && (v43 & 0x30000000) == 0 )
      v46 += v48 + GetResizeBorderWidthForDpiWithAppCompat2(v41, v43);
    v50 = v79 + v46;
    v51 = DWORD2(v79) - v46;
    LODWORD(v79) = v79 + v46;
    v52 = v39 + v46;
    DWORD2(v79) -= v46;
    v53 = HIDWORD(v79) - v46;
    DWORD1(v79) = v52;
    HIDWORD(v79) -= v46;
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) != 0x40 )
    {
      v54 = a1[21];
      v83 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v81, v54);
      if ( v83 || (v53 = HIDWORD(v79), v51 = DWORD2(v79), v50 = v79, *v81) )
      {
        SetOrClrWF(1, (__int64)a1, 1u, 1);
        if ( !v89 )
        {
          v56 = v83;
          if ( !v83 )
            v56 = *v81;
          *(_DWORD *)(*(_QWORD *)(v56 + 40) + 40LL) |= 0x200u;
          v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v30, v31);
          v84 = *(_QWORD *)(v57 + 408);
          *(_QWORD *)(v57 + 408) = &v84;
          v85 = v56;
          HMLockObject(v56);
          v51 = DWORD2(v79);
          v50 = v79;
          v52 += xxxMenuBarCompute((unsigned int)&v81, (_DWORD)a1, v52 - v78, v46, DWORD2(v79) - (int)v79);
          DWORD1(v79) = v52;
          v58 = *(_QWORD *)(v85 + 40);
          *(_DWORD *)(v58 + 40) &= ~0x200u;
          ThreadUnlock1(v58, v59, v60);
          v53 = HIDWORD(v79);
        }
      }
    }
    v61 = 0;
    if ( v52 >= v53 )
    {
      v53 = v52;
      HIDWORD(v79) = v52;
      v61 = 1;
    }
    v36 = a1[5];
    if ( (*(_BYTE *)(v36 + 21) & 2) != 0 && v50 >= v51 )
    {
      v51 = v50;
      DWORD2(v79) = v50;
      v61 = 1;
    }
    if ( v61 )
      goto LABEL_108;
    v62 = a1[5];
    if ( (*(_BYTE *)(v36 + 25) & 2) != 0 && v51 - v50 >= 4 && v53 - v52 >= 4 )
    {
      SetOrClrWF(1, (__int64)a1, 0x410u, 1);
      v62 = a1[5];
      v50 += 2;
      v51 -= 2;
      LODWORD(v79) = v50;
      v52 += 2;
      v53 -= 2;
      *(_QWORD *)((char *)&v79 + 4) = __PAIR64__(v51, v52);
      HIDWORD(v79) = v53;
    }
    if ( (*(_BYTE *)(v62 + 30) & 0x10) == 0 )
    {
      v65 = 96;
      goto LABEL_95;
    }
    if ( (*(_DWORD *)(v62 + 232) & 0x8000000) != 0 )
    {
      v63 = GetWindowDpiLastNotify(a1);
    }
    else
    {
      if ( (*(_DWORD *)(v62 + 288) & 0xF) == 0 )
      {
        v64 = *(_QWORD *)(a1[2] + 448);
        if ( v64 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) != 0 )
          {
            v65 = 96;
            v63 = 96;
            goto LABEL_91;
          }
        }
      }
      v63 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 416) + 284LL);
    }
    v65 = 96;
LABEL_91:
    v66 = GetDpiDependentMetric(1LL, v63);
    if ( v53 - v52 > v66 )
    {
      SetOrClrWF(1, (__int64)a1, 4u, 1);
      v67 = v89;
      if ( !v89 )
        HIDWORD(v79) = v53 - v66;
      goto LABEL_96;
    }
LABEL_95:
    v67 = v89;
LABEL_96:
    v68 = a1[5];
    if ( (*(_BYTE *)(v68 + 30) & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v68 + 232) & 0x8000000) != 0 )
      {
        v65 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(v68 + 288) & 0xF) != 0
             || (v69 = *(_QWORD *)(a1[2] + 448)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v69 + 8) + 64LL) & 1) == 0 )
      {
        v65 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 416) + 284LL);
      }
      v70 = GetDpiDependentMetric(0LL, v65);
      if ( v51 - v50 >= v70 )
      {
        SetOrClrWF(1, (__int64)a1, 2u, 1);
        if ( !v67 )
        {
          v71 = a1[5];
          v72 = *(unsigned __int8 *)(v71 + 25);
          v36 = v72 ^ (unsigned int)*(unsigned __int8 *)(v71 + 26);
          if ( (((unsigned __int8)v72 ^ *(_BYTE *)(v71 + 26)) & 0x40) != 0 )
            LODWORD(v79) = v70 + v50;
          else
            DWORD2(v79) = v51 - v70;
        }
      }
    }
LABEL_108:
    *a2 = v79;
    goto LABEL_109;
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a2 + 1);
LABEL_109:
  v73 = a1[5];
  if ( v87 != (*(_BYTE *)(v73 + 16) & 0xF) && *(char *)(v73 + 23) < 0 )
    xxxWindowEvent(0x8004u, 1);
  v74 = KeGetCurrentThread();
  v75 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v73, v36, v30, v31) )
  {
    v76 = (__int64 *)PsGetThreadWin32Thread(v74);
    if ( v76 )
      v75 = *v76;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v81);
  result = *(_QWORD **)(v75 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v75 + 1472) = result;
  }
  return result;
}
