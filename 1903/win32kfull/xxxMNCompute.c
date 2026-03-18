/*
 * XREFs of xxxMNCompute @ 0x1C00218EC
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00F939C (xxxSendUAHInitMenuMessage.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int WindowDpiLastNotify; // ebp
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *DPIMETRICSForDpi; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  int v20; // r15d
  __int64 *v21; // rcx
  _QWORD *v22; // r14
  __int64 v23; // rdx
  int v24; // ebx
  __int64 *v25; // rcx
  __int64 v26; // r8
  BOOL v27; // eax
  int v28; // eax
  int v29; // ecx
  __int64 *v30; // rcx
  __int64 *v31; // rcx
  _WORD *v32; // rax
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rdi
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // eax
  __int64 *v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // rax
  int v49; // ebx
  unsigned int v50; // edi
  int v51; // edx
  __int64 *v52; // rcx
  int v53; // r9d
  int v54; // eax
  __int64 *v55; // rcx
  __int64 *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // edx
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // r10d
  __int64 *v66; // r9
  __int64 v67; // r8
  unsigned int v68; // [rsp+40h] [rbp-A8h]
  unsigned int v69; // [rsp+44h] [rbp-A4h]
  int v70; // [rsp+48h] [rbp-A0h]
  int v71; // [rsp+4Ch] [rbp-9Ch]
  int v72; // [rsp+50h] [rbp-98h]
  int v73; // [rsp+54h] [rbp-94h]
  __int64 DCEx; // [rsp+58h] [rbp-90h]
  __int64 v75; // [rsp+60h] [rbp-88h] BYREF
  __int64 v76; // [rsp+68h] [rbp-80h]
  __int64 v77; // [rsp+70h] [rbp-78h]
  __int128 v78; // [rsp+80h] [rbp-68h]
  _OWORD v79[5]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+F0h] [rbp+8h]
  unsigned int v81; // [rsp+F8h] [rbp+10h]
  unsigned int v82; // [rsp+100h] [rbp+18h]

  v68 = 0;
  v75 = 0LL;
  v69 = 0;
  v76 = gptiCurrent;
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
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    {
LABEL_6:
      WindowDpiLastNotify = 96;
      goto LABEL_7;
    }
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v47, v46) + 284);
  }
LABEL_7:
  if ( a2 != *(_QWORD *)(**a1 + 80) )
  {
    v48 = *a1;
    *((_QWORD *)&v78 + 1) = a2;
    *(_QWORD *)&v78 = *v48 + 80;
    v79[0] = v78;
    HMAssignmentLock(v79);
  }
  if ( a7 )
    v69 = *a7;
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v72 = *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1;
  if ( v72 )
  {
    v69 = 0;
  }
  else if ( a2 )
  {
    *(_DWORD *)(**a1 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || a3
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v14 = 65539LL;
    v15 = a3;
  }
  else
  {
    v15 = 0LL;
    v14 = 3LL;
  }
  DCEx = _GetDCEx(v15, 0LL, v14);
  v16 = DCEx;
  DPIMETRICSForDpi = (_QWORD *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v18 = 0;
  v77 = GreSelectFont(DCEx, *DPIMETRICSForDpi);
  v70 = 0;
  v82 = 0;
  v80 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
    xxxSendUAHInitMenuMessage(a2, a1, DCEx);
  v19 = 0;
  v73 = 0;
  v71 = 0;
  v20 = a5;
  v81 = a4;
  *(_DWORD *)(**a1 + 72) = 0;
  v21 = a1[2];
  if ( !v21 )
    v21 = (__int64 *)**a1;
  v22 = (_QWORD *)MNGetpItemFromIndex(v21, 0LL);
  v23 = **a1;
  if ( !*(_DWORD *)(*(_QWORD *)(v23 + 40) + 44LL) )
  {
LABEL_67:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_68;
  }
  v24 = v72;
  while ( 1 )
  {
    if ( !v22 )
      goto LABEL_64;
    v25 = a1[2];
    if ( !v25 )
      v25 = (__int64 *)**a1;
    v26 = *v22;
    if ( (*(_DWORD *)*v22 & 0x800) == 0 || (unsigned int)MNIsOwnerDrawItem(v25, v22) && *(_WORD *)(v76 + 624) >= 0x400u )
    {
      v27 = *(_QWORD *)(v26 + 96) && v22[3];
      v73 |= v27;
      v28 = xxxMNItemSize(a1, a2, WindowDpiLastNotify, v16, v22, v24, &v75);
      v29 = v71;
      if ( v28 )
        v29 = 1;
      v71 = v29;
      v30 = a1[2];
      if ( !v30 )
        v30 = (__int64 *)**a1;
      if ( (unsigned int)MNGetpItemIndex(v30, v22) == -1 )
        goto LABEL_64;
      *(_QWORD *)(*v22 + 72LL) = v75;
      if ( !v24 && (!*(_QWORD *)(*v22 + 96LL) || v22[3]) )
      {
        v31 = a1[2];
        if ( !v31 )
          v31 = (__int64 *)**a1;
        if ( !(unsigned int)MNIsUAHMenu(v31) )
          *(_DWORD *)(*v22 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v26 + 72) = 0;
      *(_DWORD *)(*v22 + 76LL) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
    }
    if ( v69 && *(_DWORD *)(*v22 + 76LL) < v69 )
      *(_DWORD *)(*v22 + 76LL) = v69;
    if ( !v19 )
      v68 = *(_DWORD *)(*v22 + 76LL);
    if ( v24 )
      break;
    v32 = (_WORD *)v22[3];
    if ( v32 && *v32 == 8 )
    {
      v56 = a1[2];
      if ( !v56 )
        v56 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v56) )
        *(_DWORD *)(*v22 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
    }
    v33 = *v22;
    if ( (*(_DWORD *)*v22 & 0x60) != 0 )
      goto LABEL_119;
    v34 = *(_DWORD *)(v33 + 72);
    v35 = **a1;
    if ( v20 + v34 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*(_DWORD *)(v35 + 64)
                                                                                              + a5)
      && v19 )
    {
      v33 = *v22;
LABEL_119:
      v36 = v68 + v81;
      v20 = a5;
      v81 += v68;
      v68 = *(_DWORD *)(v33 + 76);
      goto LABEL_55;
    }
    v36 = v81;
LABEL_55:
    v37 = v80;
    *(_DWORD *)(*v22 + 68LL) = v36;
    *(_DWORD *)(*v22 + 64LL) = v20;
    v38 = *v22;
    v20 += *(_DWORD *)(*v22 + 72LL);
LABEL_56:
    v39 = *(_DWORD *)(v38 + 72);
    v40 = v68;
    if ( v70 >= v39 )
      v39 = v70;
    v70 = v39;
    v41 = *(_DWORD *)(v38 + 76);
    if ( v68 != v41 )
    {
      if ( v68 >= v41 )
        v41 = v68;
      v40 = v41;
      v68 = v41;
      if ( !v72 )
      {
        v69 = v41;
        v68 = v41;
      }
    }
    v42 = a1[2];
    v43 = v36 + v40;
    v24 = v72;
    if ( v72 )
      v43 = v37;
    ++v19;
    v80 = v43;
    if ( !v42 )
      v42 = (__int64 *)**a1;
    v16 = DCEx;
    v22 = (_QWORD *)MNGetpItemFromIndex(v42, v19);
    if ( v19 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      goto LABEL_64;
  }
  v49 = *(_DWORD *)*v22 & 0x60;
  if ( !v49 && *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v19 + 1 )
  {
LABEL_110:
    *(_DWORD *)(*v22 + 64LL) = v20;
    *(_DWORD *)(*v22 + 68LL) = v81;
    v38 = *v22;
    v36 = *(_DWORD *)(*v22 + 76LL) + v81;
    v37 = v36;
    v81 = v36;
    if ( v80 >= v36 )
      v37 = v80;
    goto LABEL_56;
  }
  v50 = v19 + 1;
  v51 = v70;
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v19 + 1 && *(_DWORD *)(*v22 + 72LL) > v70 )
    v51 = *(_DWORD *)(*v22 + 72LL);
  xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v82, v19 + (v49 == 0), v51, v20);
  v52 = a1[2];
  if ( !v52 )
    v52 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v52, v22) == -1 )
  {
    v16 = DCEx;
LABEL_64:
    v44 = v82;
    goto LABEL_65;
  }
  if ( !v49 )
    goto LABEL_108;
  if ( !v71 || !a2 || (v54 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
    v54 = 4;
  v20 = v54 + v53;
  v44 = v19;
  v82 = v19;
  v81 = a4;
  v70 = *(_DWORD *)(*v22 + 72LL);
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v50 )
    goto LABEL_108;
  xxxMNRecalcTabStrings(DCEx, (_DWORD)a1, v19, v50, *(_DWORD *)(*v22 + 72LL), v20);
  v55 = a1[2];
  if ( !v55 )
    v55 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v55, v22) != -1 )
  {
LABEL_108:
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v50 )
      *(_DWORD *)(**a1 + 64) = v53;
    goto LABEL_110;
  }
  v16 = DCEx;
LABEL_65:
  if ( !v73 || v44 )
  {
    v18 = v80;
    goto LABEL_67;
  }
  v57 = **a1;
  if ( *(int *)(*(_QWORD *)(v57 + 40) + 40LL) < 0 )
    goto LABEL_132;
  v58 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v57 + 40) + 40LL) & 0x4000000) != 0 )
  {
    DpiForSystem = GetDpiForSystem(v57, v23);
    v61 = (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2);
    if ( *(_DWORD *)(v58 + 72) <= (unsigned int)v61 )
    {
      v63 = GetDpiForSystem(v61, v60);
      v62 = *((__int16 *)GetOemBitmapInfoForDpi(63, v63) + 2);
    }
    else
    {
      v62 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v62;
    v57 = **a1;
LABEL_132:
    *(_DWORD *)(v57 + 72) += 2;
  }
  else
  {
    v64 = GetDpiForSystem(v57, v23);
    *(_DWORD *)(v58 + 72) += *((__int16 *)GetOemBitmapInfoForDpi(63, v64) + 2) + 2;
  }
  v18 = v80;
LABEL_68:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v82 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v65 = 0;
        v66 = *(__int64 **)(**a1 + 88);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
        {
          do
          {
            ++v65;
            v67 = *v66;
            v66 += 12;
            *(_DWORD *)(v67 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v67 + 72) - *(_DWORD *)(v67 + 64);
          }
          while ( v65 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) );
          v16 = DCEx;
        }
      }
    }
  }
  GreSelectFont(v16, v77);
  _ReleaseDC(v16);
  *(_DWORD *)(**a1 + 68) = v18 - a4;
  if ( a7 )
    *a7 = v69;
  return *(unsigned int *)(**a1 + 68);
}
