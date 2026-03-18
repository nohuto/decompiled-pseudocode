/*
 * XREFs of xxxMNCompute @ 0x1C012A0B0
 * Callers:
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00289B0 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C012941C (xxxSendUAHInitMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0245F44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 **a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  _QWORD *DPIMETRICSForDpi; // rax
  unsigned int v25; // ebx
  __int64 v26; // r8
  unsigned int v27; // r13d
  int v28; // r15d
  __int64 *v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // r14
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  BOOL v36; // eax
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  __int64 *v41; // rcx
  __int64 v42; // rcx
  _WORD *v43; // rax
  _DWORD *v44; // rcx
  int v45; // ebx
  __int64 v46; // rdi
  __int64 v47; // r8
  unsigned int v48; // r9d
  _DWORD *v49; // rcx
  int v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // eax
  __int64 *v53; // rcx
  unsigned int v54; // eax
  unsigned int v55; // ebx
  __int64 v57; // rcx
  __int64 *v58; // rax
  int v59; // ebx
  unsigned int v60; // edi
  int v61; // edx
  unsigned int v62; // eax
  __int64 v63; // r8
  __int64 *v64; // rcx
  int v65; // r9d
  int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // r8
  __int64 *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // edx
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // r10d
  __int64 *v81; // r9
  __int64 v82; // r8
  unsigned int v83; // [rsp+40h] [rbp-A8h]
  unsigned int v84; // [rsp+44h] [rbp-A4h]
  int v85; // [rsp+48h] [rbp-A0h]
  int v86; // [rsp+4Ch] [rbp-9Ch]
  int v87; // [rsp+50h] [rbp-98h]
  int v88; // [rsp+54h] [rbp-94h]
  __int64 DCEx; // [rsp+58h] [rbp-90h]
  __int64 v90; // [rsp+60h] [rbp-88h] BYREF
  __int64 v91; // [rsp+68h] [rbp-80h]
  __int64 v92; // [rsp+70h] [rbp-78h]
  __int128 v93; // [rsp+80h] [rbp-68h]
  _OWORD v94[5]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v95; // [rsp+F0h] [rbp+8h]
  unsigned int v96; // [rsp+F8h] [rbp+10h]
  unsigned int v97; // [rsp+100h] [rbp+18h]

  v83 = 0;
  v90 = 0LL;
  v84 = 0;
  v91 = gptiCurrent;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a3 + 40);
    if ( (*(_DWORD *)(v11 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 288) & 0xF) == 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 448LL);
        if ( v12 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 64LL) & 1) != 0 )
            goto LABEL_6;
        }
      }
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 416LL) + 284LL);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, 0LL) & 0xF) == 0 )
    {
LABEL_6:
      WindowDpiLastNotify = 96;
      goto LABEL_7;
    }
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v57, a2) + 284);
  }
LABEL_7:
  if ( a2 != *(_QWORD *)(**a1 + 80) )
  {
    v58 = *a1;
    *((_QWORD *)&v93 + 1) = a2;
    *(_QWORD *)&v93 = *v58 + 80;
    v94[0] = v93;
    HMAssignmentLock(v94);
  }
  if ( a7 )
    v84 = *a7;
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v14 = **a1;
  v87 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 40LL) & 1;
  if ( v87 )
  {
    v84 = 0;
  }
  else if ( a2 )
  {
    v14 = **a1;
    *(_DWORD *)(v14 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v14, a2, a3) & 0xF) == 2
    || a3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 448)
                                + 8LL)
                  + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v21 = 65539LL;
    v22 = a3;
  }
  else
  {
    v22 = 0LL;
    v21 = 3LL;
  }
  DCEx = _GetDCEx(v22, 0LL, v21);
  v23 = DCEx;
  DPIMETRICSForDpi = (_QWORD *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v25 = 0;
  v92 = GreSelectFont(DCEx, *DPIMETRICSForDpi);
  v85 = 0;
  v97 = 0;
  v95 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1);
  v27 = 0;
  v88 = 0;
  v86 = 0;
  v28 = a5;
  v96 = a4;
  *(_DWORD *)(**a1 + 72) = 0;
  v29 = a1[2];
  if ( !v29 )
    v29 = (__int64 *)**a1;
  v31 = (_QWORD *)MNGetpItemFromIndex(v29, 0LL, v26);
  v32 = **a1;
  if ( !*(_DWORD *)(*(_QWORD *)(v32 + 40) + 44LL) )
  {
LABEL_67:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_68;
  }
  v33 = v87;
  while ( 1 )
  {
    if ( !v31 )
      goto LABEL_64;
    v34 = (__int64)a1[2];
    if ( !v34 )
      v34 = **a1;
    v35 = *v31;
    if ( (*(_DWORD *)*v31 & 0x800) == 0
      || (unsigned int)MNIsOwnerDrawItem(v34, (_DWORD **)v31) && *(_WORD *)(v91 + 624) >= 0x400u )
    {
      v36 = *(_QWORD *)(v35 + 96) && v31[3];
      v88 |= v36;
      v37 = xxxMNItemSize(a1, a2, WindowDpiLastNotify, v23, v31, v33, &v90);
      v40 = v86;
      if ( v37 )
        v40 = 1;
      v86 = v40;
      v41 = a1[2];
      if ( !v41 )
        v41 = (__int64 *)**a1;
      if ( (unsigned int)MNGetpItemIndex(v41, v31, v38, v39) == -1 )
        goto LABEL_64;
      *(_QWORD *)(*v31 + 72LL) = v90;
      if ( !v33 && (!*(_QWORD *)(*v31 + 96LL) || v31[3]) )
      {
        v42 = (__int64)a1[2];
        if ( !v42 )
          v42 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v42) )
          *(_DWORD *)(*v31 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v35 + 72) = 0;
      *(_DWORD *)(*v31 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
    }
    if ( v84 && *(_DWORD *)(*v31 + 76LL) < v84 )
      *(_DWORD *)(*v31 + 76LL) = v84;
    if ( !v27 )
      v83 = *(_DWORD *)(*v31 + 76LL);
    if ( v33 )
      break;
    v43 = (_WORD *)v31[3];
    if ( v43 && *v43 == 8 )
    {
      v70 = (__int64)a1[2];
      if ( !v70 )
        v70 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v70) )
        *(_DWORD *)(*v31 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
    }
    v44 = (_DWORD *)*v31;
    if ( (*(_DWORD *)*v31 & 0x60) != 0 )
      goto LABEL_119;
    v45 = v44[18];
    v46 = **a1;
    if ( v28 + v45 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*(_DWORD *)(v46 + 64)
                                                                                              + a5)
      && v27 )
    {
      v44 = (_DWORD *)*v31;
LABEL_119:
      v47 = v83 + v96;
      v28 = a5;
      v96 += v83;
      v83 = v44[19];
      goto LABEL_55;
    }
    v47 = v96;
LABEL_55:
    v48 = v95;
    *(_DWORD *)(*v31 + 68LL) = v47;
    *(_DWORD *)(*v31 + 64LL) = v28;
    v49 = (_DWORD *)*v31;
    v28 += *(_DWORD *)(*v31 + 72LL);
LABEL_56:
    v50 = v49[18];
    v51 = v83;
    if ( v85 >= v50 )
      v50 = v85;
    v85 = v50;
    v52 = v49[19];
    if ( v83 != v52 )
    {
      if ( v83 >= v52 )
        v52 = v83;
      v51 = v52;
      v83 = v52;
      if ( !v87 )
      {
        v84 = v52;
        v83 = v52;
      }
    }
    v53 = a1[2];
    v54 = v47 + v51;
    v33 = v87;
    if ( v87 )
      v54 = v48;
    ++v27;
    v95 = v54;
    if ( !v53 )
      v53 = (__int64 *)**a1;
    v23 = DCEx;
    v31 = (_QWORD *)MNGetpItemFromIndex(v53, v27, v47);
    if ( v27 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      goto LABEL_64;
  }
  v59 = *(_DWORD *)*v31 & 0x60;
  if ( !v59 && *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v27 + 1 )
  {
LABEL_110:
    *(_DWORD *)(*v31 + 64LL) = v28;
    *(_DWORD *)(*v31 + 68LL) = v96;
    v49 = (_DWORD *)*v31;
    v47 = *(_DWORD *)(*v31 + 76LL) + v96;
    v48 = v47;
    v96 += *(_DWORD *)(*v31 + 76LL);
    if ( v95 >= (unsigned int)v47 )
      v48 = v95;
    goto LABEL_56;
  }
  v60 = v27 + 1;
  v61 = v85;
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v27 + 1 && *(_DWORD *)(*v31 + 72LL) > v85 )
    v61 = *(_DWORD *)(*v31 + 72LL);
  v62 = xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v97, v27 + (v59 == 0), v61, v28);
  v64 = a1[2];
  if ( !v64 )
    v64 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v64, v31, v63, v62) == -1 )
  {
    v23 = DCEx;
LABEL_64:
    v55 = v97;
    goto LABEL_65;
  }
  if ( !v59 )
    goto LABEL_108;
  if ( !v86 || !a2 || (v66 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
    v66 = 4;
  v28 = v66 + v65;
  v55 = v27;
  v97 = v27;
  v96 = a4;
  v85 = *(_DWORD *)(*v31 + 72LL);
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v60 )
    goto LABEL_108;
  v67 = xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v27, v60, *(_DWORD *)(*v31 + 72LL), v28);
  v69 = a1[2];
  if ( !v69 )
    v69 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v69, v31, v68, v67) != -1 )
  {
LABEL_108:
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v60 )
      *(_DWORD *)(**a1 + 64) = v65;
    goto LABEL_110;
  }
  v23 = DCEx;
LABEL_65:
  if ( !v88 || v55 )
  {
    v25 = v95;
    goto LABEL_67;
  }
  v71 = **a1;
  if ( *(int *)(*(_QWORD *)(v71 + 40) + 40LL) < 0 )
    goto LABEL_132;
  v72 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v71 + 40) + 40LL) & 0x4000000) != 0 )
  {
    DpiForSystem = GetDpiForSystem(v71, v32, v30);
    v75 = (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
    if ( *(_DWORD *)(v72 + 72) <= (unsigned int)v75 )
    {
      v78 = GetDpiForSystem(v75, v74, v76);
      v77 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, v78) + 2);
    }
    else
    {
      v77 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v77;
    v71 = **a1;
LABEL_132:
    *(_DWORD *)(v71 + 72) += 2;
  }
  else
  {
    v79 = GetDpiForSystem(v71, v32, v30);
    *(_DWORD *)(v72 + 72) += *((__int16 *)GetOemBitmapInfoForDpi(63LL, v79) + 2) + 2;
  }
  v25 = v95;
LABEL_68:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v97 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v80 = 0;
        v81 = *(__int64 **)(**a1 + 88);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
        {
          do
          {
            ++v80;
            v82 = *v81;
            v81 += 12;
            *(_DWORD *)(v82 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v82 + 72) - *(_DWORD *)(v82 + 64);
          }
          while ( v80 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) );
          v23 = DCEx;
        }
      }
    }
  }
  GreSelectFont(v23, v92);
  _ReleaseDC(v23);
  *(_DWORD *)(**a1 + 68) = v25 - a4;
  if ( a7 )
    *a7 = v84;
  return *(unsigned int *)(**a1 + 68);
}
