/*
 * XREFs of xxxCalcClientRect @ 0x1C003358C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C023C4E0 (xxxUpdateClientRect.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00AC274 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 a1, __int128 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // r15d
  char v10; // dl
  int v11; // r14d
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // edi
  _BOOL8 v19; // rdx
  void *v20; // rax
  __int64 v21; // rax
  int v22; // r15d
  int v23; // r14d
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int *v27; // rax
  unsigned int v28; // r9d
  unsigned int v29; // edi
  _BOOL8 v30; // rdx
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  int CaptionHeight; // eax
  int v35; // r15d
  int v36; // r9d
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v38; // esi
  __int64 v39; // rax
  unsigned int v40; // r14d
  int v41; // eax
  int v42; // edx
  int v43; // r12d
  int v44; // r13d
  int v45; // edi
  int DpiDependentMetric; // eax
  int v47; // r14d
  int v48; // edi
  int v49; // r15d
  int v50; // esi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // ecx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rax
  unsigned int v60; // r13d
  int v61; // r12d
  int v62; // r15d
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // esi
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  struct _KTHREAD *v69; // rdi
  __int64 v70; // rbx
  __int64 *v71; // rax
  _QWORD *result; // rax
  int v73; // [rsp+30h] [rbp-39h]
  __int128 v74; // [rsp+38h] [rbp-31h]
  __int64 *v76; // [rsp+48h] [rbp-21h] BYREF
  __int64 v77; // [rsp+50h] [rbp-19h] BYREF
  __int64 v78; // [rsp+58h] [rbp-11h]
  __int64 v79; // [rsp+60h] [rbp-9h] BYREF
  __int64 v80; // [rsp+68h] [rbp-1h]
  __int64 v81; // [rsp+70h] [rbp+7h]
  char v82; // [rsp+D0h] [rbp+67h]
  int v84; // [rsp+E0h] [rbp+77h]
  int v85; // [rsp+E8h] [rbp+7Fh]

  v84 = a3;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v77 = 0LL;
  v76 = (__int64 *)gSmartObjNullRef;
  v77 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v77;
  v8 = *(_QWORD *)(a1 + 40);
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_BYTE *)(v8 + 16);
  v11 = *(_DWORD *)(v8 + 24);
  v12 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 16) = v10 & 0xF0;
  v82 = v10 & 0xF;
  v13 = IsWindowDesktopComposed(a1);
  v14 = 1LL;
  if ( !v13 )
    goto LABEL_16;
  v15 = *(unsigned int **)(a1 + 40);
  v16 = v15[7];
  v17 = v15[6];
  v18 = v15[58];
  if ( v9 != v16 )
    goto LABEL_9;
  if ( v11 != (_DWORD)v17 || v12 != v18 )
  {
    if ( v9 != v16 )
    {
LABEL_9:
      v19 = ((v9 ^ v16) & 0xB1CF0000) != 0;
      v14 = -((v9 ^ v16) & 0xB1CF0000);
      goto LABEL_14;
    }
    if ( v11 != (_DWORD)v17 )
    {
      v19 = ((v11 ^ (unsigned int)v17) & 0x4E27A9) != 0;
      v14 = -((v11 ^ (unsigned int)v17) & 0x4E27A9);
      goto LABEL_14;
    }
    if ( ((v12 ^ v18) & 0x2E00300) != 0 )
    {
      v19 = 1LL;
LABEL_14:
      if ( v19 )
      {
        v20 = (void *)ReferenceDwmApiPort(v14, v19, v17);
        DwmAsyncChildStyleChange(v20);
      }
    }
  }
LABEL_16:
  v21 = *(_QWORD *)(a1 + 40);
  v22 = *(_DWORD *)(v21 + 28);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(_DWORD *)(v21 + 232);
  *(_BYTE *)(v21 + 20) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_28;
  v27 = *(unsigned int **)(a1 + 40);
  v28 = v27[7];
  v26 = v27[6];
  v29 = v27[58];
  if ( v22 != v28 )
    goto LABEL_21;
  if ( v23 == (_DWORD)v26 && v24 == v29 )
    goto LABEL_28;
  if ( v22 == v28 )
  {
    if ( v23 == (_DWORD)v26 )
    {
      if ( ((v24 ^ v29) & 0x2E00300) == 0 )
        goto LABEL_28;
      v30 = 1LL;
    }
    else
    {
      v30 = ((v23 ^ (unsigned int)v26) & 0x4E27A9) != 0;
      v25 = -((v23 ^ (unsigned int)v26) & 0x4E27A9);
    }
  }
  else
  {
LABEL_21:
    v30 = ((v22 ^ v28) & 0xB1CF0000) != 0;
    v25 = -((v22 ^ v28) & 0xB1CF0000);
  }
  if ( v30 )
  {
    v31 = (void *)ReferenceDwmApiPort(v25, v30, v26);
    DwmAsyncChildStyleChange(v31);
  }
LABEL_28:
  v32 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v32 + 31) & 0x20) == 0 )
  {
    v33 = HIDWORD(*(_QWORD *)a2);
    v73 = v33;
    v74 = *a2;
    if ( (*(_BYTE *)(v32 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      CaptionHeight = GetCaptionHeight(a1);
      v32 = *(_QWORD *)(a1 + 40);
      v35 = v33 + CaptionHeight;
    }
    else
    {
      v35 = HIDWORD(*(_QWORD *)a2);
    }
    v36 = 96;
    if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1, v32, v26);
      v26 = *(_QWORD *)(a1 + 16);
      v38 = WindowDpiLastNotify;
    }
    else if ( (*(_DWORD *)(v32 + 288) & 0xF) == 0
           && (v26 = *(_QWORD *)(a1 + 16), (v39 = *(_QWORD *)(v26 + 448)) != 0)
           && (*(_DWORD *)(**(_QWORD **)(v39 + 8) + 64LL) & 1) != 0 )
    {
      v38 = 96;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 16);
      v38 = *(unsigned __int16 *)(*(_QWORD *)(v26 + 416) + 284LL);
    }
    if ( *(_DWORD *)(v26 + 624) <= 0x9900u )
      v40 = *(_DWORD *)(v26 + 640);
    else
      v40 = 0;
    v41 = *(_DWORD *)(v32 + 24);
    v42 = *(_DWORD *)(v32 + 28);
    v85 = v42;
    if ( (v41 & 0x100) != 0 )
      v43 = 2;
    else
      v43 = (v41 & 0x20000) != 0;
    v44 = v42 & 0xC00000;
    if ( (v42 & 0xC00000) != 0 || (v41 & 1) != 0 )
      ++v43;
    if ( (v40 & 0x10000000) != 0 || (v40 & 0x20000000) != 0 )
    {
      v45 = 0;
    }
    else if ( v38 == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v45 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( v38 == v36 )
    {
      v45 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(v38) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, v38);
      else
        DpiDependentMetric = GetDpiDependentMetric(29LL, v38);
      v42 = v85;
      v45 = DpiDependentMetric;
    }
    if ( (v42 & 0x40000) != 0 || v45 > 0 && (v44 == 12582912 || (v42 & 0x40000) != 0) && (v40 & 0x30000000) == 0 )
      v43 += v45 + GetResizeBorderWidthForDpiWithAppCompat2(v38, v40);
    v47 = v74 + v43;
    v48 = DWORD2(v74) - v43;
    LODWORD(v74) = v74 + v43;
    v49 = v35 + v43;
    DWORD2(v74) -= v43;
    v50 = HIDWORD(v74) - v43;
    DWORD1(v74) = v49;
    HIDWORD(v74) -= v43;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      v78 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v76);
      if ( v78 || (v50 = HIDWORD(v74), v48 = DWORD2(v74), v47 = v74, *v76) )
      {
        SetOrClrWF(1LL, a1, 1LL, 1LL);
        if ( !v84 )
        {
          v51 = v78;
          if ( !v78 )
            v51 = *v76;
          *(_DWORD *)(*(_QWORD *)(v51 + 40) + 40LL) |= 0x200u;
          v52 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v79 = *(_QWORD *)(v52 + 408);
          *(_QWORD *)(v52 + 408) = &v79;
          v80 = v51;
          HMLockObject(v51);
          v48 = DWORD2(v74);
          v47 = v74;
          v49 += xxxMenuBarCompute((unsigned int)&v76, a1, v49 - v73, v43, DWORD2(v74) - (int)v74);
          DWORD1(v74) = v49;
          v53 = *(_QWORD *)(v80 + 40);
          *(_DWORD *)(v53 + 40) &= ~0x200u;
          ThreadUnlock1(v53, v54, v55);
          v50 = HIDWORD(v74);
        }
      }
    }
    v56 = 0;
    if ( v49 >= v50 )
    {
      v50 = v49;
      HIDWORD(v74) = v49;
      v56 = 1;
    }
    v32 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v32 + 21) & 2) != 0 && v47 >= v48 )
    {
      v48 = v47;
      DWORD2(v74) = v47;
      v56 = 1;
    }
    if ( v56 )
      goto LABEL_108;
    v57 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v32 + 25) & 2) != 0 && v48 - v47 >= 4 && v50 - v49 >= 4 )
    {
      SetOrClrWF(1LL, a1, 1040LL, 1LL);
      v57 = *(_QWORD *)(a1 + 40);
      v47 += 2;
      v48 -= 2;
      LODWORD(v74) = v47;
      v49 += 2;
      v50 -= 2;
      *(_QWORD *)((char *)&v74 + 4) = __PAIR64__(v48, v49);
      HIDWORD(v74) = v50;
    }
    if ( (*(_BYTE *)(v57 + 30) & 0x10) == 0 )
    {
      v60 = 96;
      goto LABEL_95;
    }
    if ( (*(_DWORD *)(v57 + 232) & 0x8000000) != 0 )
    {
      v58 = GetWindowDpiLastNotify(a1, v32, v26);
    }
    else
    {
      if ( (*(_DWORD *)(v57 + 288) & 0xF) == 0 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL);
        if ( v59 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 64LL) & 1) != 0 )
          {
            v60 = 96;
            v58 = 96;
            goto LABEL_91;
          }
        }
      }
      v58 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v60 = 96;
LABEL_91:
    v61 = GetDpiDependentMetric(1LL, v58);
    if ( v50 - v49 > v61 )
    {
      SetOrClrWF(1LL, a1, 4LL, 1LL);
      v62 = v84;
      if ( !v84 )
        HIDWORD(v74) = v50 - v61;
      goto LABEL_96;
    }
LABEL_95:
    v62 = v84;
LABEL_96:
    v63 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v63 + 30) & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v63 + 232) & 0x8000000) != 0 )
      {
        v60 = GetWindowDpiLastNotify(a1, v32, v26);
      }
      else if ( (*(_DWORD *)(v63 + 288) & 0xF) != 0
             || (v64 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) == 0
             || (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) == 0 )
      {
        v60 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
      }
      v65 = GetDpiDependentMetric(0LL, v60);
      if ( v48 - v47 >= v65 )
      {
        SetOrClrWF(1LL, a1, 2LL, 1LL);
        if ( !v62 )
        {
          v66 = *(_QWORD *)(a1 + 40);
          v67 = *(unsigned __int8 *)(v66 + 25);
          v32 = v67 ^ (unsigned int)*(unsigned __int8 *)(v66 + 26);
          if ( (((unsigned __int8)v67 ^ *(_BYTE *)(v66 + 26)) & 0x40) != 0 )
            LODWORD(v74) = v65 + v47;
          else
            DWORD2(v74) = v48 - v65;
        }
      }
    }
LABEL_108:
    *a2 = v74;
    goto LABEL_109;
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a2 + 1);
LABEL_109:
  v68 = *(_QWORD *)(a1 + 40);
  if ( v82 != (*(_BYTE *)(v68 + 16) & 0xF) && *(char *)(v68 + 23) < 0 )
    xxxWindowEvent(0x8004u, 1);
  v69 = KeGetCurrentThread();
  v70 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v68, v32, v26) )
  {
    v71 = (__int64 *)PsGetThreadWin32Thread(v69);
    if ( v71 )
      v70 = *v71;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v76);
  result = *(_QWORD **)(v70 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v70 + 1472) = result;
  }
  return result;
}
