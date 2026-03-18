/*
 * XREFs of xxxMNCompute @ 0x1C0013858
 * Callers:
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C0010198 (xxxSendUAHInitMenuMessage.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0204DDC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
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
  HDC v16; // rdi
  unsigned int v17; // ebx
  unsigned int v18; // r13d
  int v19; // r15d
  __int64 *v20; // rcx
  _QWORD *v21; // r14
  int v22; // ebx
  __int64 *v23; // rcx
  __int64 v24; // r8
  BOOL v25; // eax
  int v26; // eax
  int v27; // ecx
  __int64 *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rcx
  _WORD *v33; // rax
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rdi
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ebx
  unsigned int v42; // eax
  __int64 *v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  __int64 v47; // rcx
  __int64 *v48; // rax
  int DpiDependentMetric; // eax
  int v50; // ebx
  unsigned int v51; // edi
  int v52; // edx
  __int64 *v53; // rcx
  int v54; // r9d
  int v55; // eax
  __int64 *v56; // rcx
  __int64 *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rbx
  unsigned int DpiForSystem; // eax
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
  HDC DCEx; // [rsp+58h] [rbp-90h]
  _DWORD v75[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v76; // [rsp+68h] [rbp-80h]
  __int64 v77; // [rsp+70h] [rbp-78h]
  __int128 v78; // [rsp+80h] [rbp-68h]
  _OWORD v79[5]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v80; // [rsp+F0h] [rbp+8h]
  unsigned int v81; // [rsp+F8h] [rbp+10h]
  unsigned int v82; // [rsp+100h] [rbp+18h]

  v68 = 0;
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
          if ( (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
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
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v47) + 284);
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
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 52LL) & 1) != 0
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
  DCEx = (HDC)_GetDCEx(v15, 0LL, v14);
  v16 = DCEx;
  GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v17 = 0;
  v77 = GreSelectFont(DCEx);
  v70 = 0;
  v82 = 0;
  v80 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1, (__int64)DCEx);
  v18 = 0;
  v73 = 0;
  v71 = 0;
  v19 = a5;
  v81 = a4;
  *(_DWORD *)(**a1 + 72) = 0;
  v20 = a1[2];
  if ( !v20 )
    v20 = (__int64 *)**a1;
  v21 = (_QWORD *)MNGetpItemFromIndex(v20, 0LL);
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
  {
LABEL_67:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_68;
  }
  v22 = v72;
  while ( 1 )
  {
    if ( !v21 )
      goto LABEL_64;
    v23 = a1[2];
    if ( !v23 )
      v23 = (__int64 *)**a1;
    v24 = *v21;
    if ( (*(_DWORD *)*v21 & 0x800) == 0 || (unsigned int)MNIsOwnerDrawItem(v23, v21) && *(_WORD *)(v76 + 624) >= 0x400u )
    {
      v25 = *(_QWORD *)(v24 + 96) && v21[3];
      v73 |= v25;
      v26 = xxxMNItemSize(a1, a2, WindowDpiLastNotify, v16, v21, v22, v75);
      v27 = v71;
      if ( v26 )
        v27 = 1;
      v71 = v27;
      v28 = a1[2];
      if ( !v28 )
        v28 = (__int64 *)**a1;
      if ( (unsigned int)MNGetpItemIndex(v28, v21) == -1 )
        goto LABEL_64;
      *(_DWORD *)(*v21 + 72LL) = v75[0];
      *(_DWORD *)(*v21 + 76LL) = v75[1];
      if ( !v22 && (!*(_QWORD *)(*v21 + 96LL) || v21[3]) )
      {
        v32 = a1[2];
        if ( !v32 )
          v32 = (__int64 *)**a1;
        if ( !(unsigned int)MNIsUAHMenu(v32, v29, v30, v31) )
          *(_DWORD *)(*v21 + 72LL) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v24 + 72) = 0;
      DpiDependentMetric = GetDpiDependentMetric(26LL, WindowDpiLastNotify);
      v29 = (unsigned int)(DpiDependentMetric >> 31);
      LODWORD(v29) = DpiDependentMetric % 2;
      *(_DWORD *)(*v21 + 76LL) = DpiDependentMetric / 2;
    }
    if ( v69 && *(_DWORD *)(*v21 + 76LL) < v69 )
      *(_DWORD *)(*v21 + 76LL) = v69;
    if ( !v18 )
      v68 = *(_DWORD *)(*v21 + 76LL);
    if ( v22 )
      break;
    v33 = (_WORD *)v21[3];
    if ( v33 && *v33 == 8 )
    {
      v57 = a1[2];
      if ( !v57 )
        v57 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v57, v29, v30, v31) )
        *(_DWORD *)(*v21 + 72LL) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
    }
    v34 = *v21;
    if ( (*(_DWORD *)*v21 & 0x60) != 0 )
      goto LABEL_119;
    v35 = *(_DWORD *)(v34 + 72);
    v36 = **a1;
    if ( v19 + v35 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*(_DWORD *)(v36 + 64)
                                                                                              + a5)
      && v18 )
    {
      v34 = *v21;
LABEL_119:
      v37 = v68 + v81;
      v19 = a5;
      v81 += v68;
      v68 = *(_DWORD *)(v34 + 76);
      goto LABEL_55;
    }
    v37 = v81;
LABEL_55:
    v38 = v80;
    *(_DWORD *)(*v21 + 68LL) = v37;
    *(_DWORD *)(*v21 + 64LL) = v19;
    v39 = *v21;
    v19 += *(_DWORD *)(*v21 + 72LL);
LABEL_56:
    v40 = *(_DWORD *)(v39 + 72);
    v41 = v68;
    if ( v70 >= v40 )
      v40 = v70;
    v70 = v40;
    v42 = *(_DWORD *)(v39 + 76);
    if ( v68 != v42 )
    {
      if ( v68 >= v42 )
        v42 = v68;
      v41 = v42;
      v68 = v42;
      if ( !v72 )
      {
        v69 = v42;
        v68 = v42;
      }
    }
    v43 = a1[2];
    v44 = v37 + v41;
    v22 = v72;
    if ( v72 )
      v44 = v38;
    ++v18;
    v80 = v44;
    if ( !v43 )
      v43 = (__int64 *)**a1;
    v16 = DCEx;
    v21 = (_QWORD *)MNGetpItemFromIndex(v43, v18);
    if ( v18 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      goto LABEL_64;
  }
  v50 = *(_DWORD *)*v21 & 0x60;
  if ( !v50 && *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v18 + 1 )
  {
LABEL_110:
    *(_DWORD *)(*v21 + 64LL) = v19;
    *(_DWORD *)(*v21 + 68LL) = v81;
    v39 = *v21;
    v37 = *(_DWORD *)(*v21 + 76LL) + v81;
    v38 = v37;
    v81 = v37;
    if ( v80 >= v37 )
      v38 = v80;
    goto LABEL_56;
  }
  v51 = v18 + 1;
  v52 = v70;
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v18 + 1 && *(_DWORD *)(*v21 + 72LL) > v70 )
    v52 = *(_DWORD *)(*v21 + 72LL);
  xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v82, v18 + (v50 == 0), v52, v19);
  v53 = a1[2];
  if ( !v53 )
    v53 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v53, v21) == -1 )
  {
    v16 = DCEx;
LABEL_64:
    v45 = v82;
    goto LABEL_65;
  }
  if ( !v50 )
    goto LABEL_108;
  if ( !v71 || !a2 || (v55 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
    v55 = 4;
  v19 = v54 + v55;
  v45 = v18;
  v82 = v18;
  v81 = a4;
  v70 = *(_DWORD *)(*v21 + 72LL);
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v51 )
    goto LABEL_108;
  xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v18, v51, *(_DWORD *)(*v21 + 72LL), v19);
  v56 = a1[2];
  if ( !v56 )
    v56 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v56, v21) != -1 )
  {
LABEL_108:
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v51 )
      *(_DWORD *)(**a1 + 64) = v54;
    goto LABEL_110;
  }
  v16 = DCEx;
LABEL_65:
  if ( !v73 || v45 )
  {
    v17 = v80;
    goto LABEL_67;
  }
  v58 = **a1;
  if ( *(int *)(*(_QWORD *)(v58 + 40) + 40LL) < 0 )
    goto LABEL_132;
  v59 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v58 + 40) + 40LL) & 0x4000000) != 0 )
  {
    DpiForSystem = GetDpiForSystem(v58);
    v61 = (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
    if ( *(_DWORD *)(v59 + 72) <= (unsigned int)v61 )
    {
      v63 = GetDpiForSystem(v61);
      v62 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, v63) + 2);
    }
    else
    {
      v62 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v62;
    v58 = **a1;
LABEL_132:
    *(_DWORD *)(v58 + 72) += 2;
  }
  else
  {
    v64 = GetDpiForSystem(v58);
    *(_DWORD *)(v59 + 72) += *((__int16 *)GetOemBitmapInfoForDpi(63LL, v64) + 2) + 2;
  }
  v17 = v80;
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
  GreSelectFont(v16);
  _ReleaseDC(v16);
  *(_DWORD *)(**a1 + 68) = v17 - a4;
  if ( a7 )
    *a7 = v69;
  return *(unsigned int *)(**a1 + 68);
}
