/*
 * XREFs of xxxMNCompute @ 0x1C00AB240
 * Callers:
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BCB4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00A8448 (xxxSendUAHInitMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  HDC v20; // rdi
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  int v23; // r15d
  __int64 *v24; // rcx
  __int64 *v25; // r14
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  BOOL v29; // eax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _WORD *v34; // rax
  _DWORD *v35; // rcx
  int v36; // ebx
  __int64 v37; // rdi
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  _DWORD *v40; // rcx
  int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // eax
  __int64 *v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // ebx
  __int64 v48; // rcx
  __int64 *v49; // rax
  int v50; // ebx
  unsigned int v51; // edi
  int v52; // edx
  __int64 v53; // rcx
  int v54; // r9d
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rbx
  unsigned int DpiForSystem; // eax
  int v61; // edx
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // r10d
  __int64 *v65; // r9
  __int64 v66; // r8
  unsigned int v67; // [rsp+40h] [rbp-A8h]
  unsigned int v68; // [rsp+44h] [rbp-A4h]
  int v69; // [rsp+48h] [rbp-A0h]
  int v70; // [rsp+4Ch] [rbp-9Ch]
  int v71; // [rsp+50h] [rbp-98h]
  int v72; // [rsp+54h] [rbp-94h]
  HDC DCEx; // [rsp+58h] [rbp-90h]
  unsigned int v74[4]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v75; // [rsp+70h] [rbp-78h]
  __int64 v76; // [rsp+80h] [rbp-68h]
  _OWORD v77[5]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v78; // [rsp+F0h] [rbp+8h]
  unsigned int v79; // [rsp+F8h] [rbp+10h]
  unsigned int v80; // [rsp+100h] [rbp+18h]

  v67 = 0;
  v68 = 0;
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
        v12 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 456LL);
        if ( v12 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 64LL) & 1) != 0 )
            goto LABEL_6;
        }
      }
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 424LL) + 284LL);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2) & 0xF) == 0 )
    {
LABEL_6:
      WindowDpiLastNotify = 96;
      goto LABEL_7;
    }
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v48) + 284);
  }
LABEL_7:
  if ( a2 != *(_QWORD *)(**a1 + 80) )
  {
    v49 = *a1;
    *((_QWORD *)&v75 + 1) = a2;
    *(_QWORD *)&v75 = *v49 + 80;
    v77[0] = v75;
    HMAssignmentLock(v77);
  }
  if ( a7 )
    v68 = *a7;
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    return 0LL;
  v14 = **a1;
  v71 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 40LL) & 1;
  if ( v71 )
  {
    v68 = 0;
  }
  else if ( a2 )
  {
    v14 = **a1;
    *(_DWORD *)(v14 + 64) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v14, a2) & 0xF) == 2
    || a3
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 456) + 8LL)
                  + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v18 = 65539LL;
    v19 = a3;
  }
  else
  {
    v19 = 0LL;
    v18 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v19, 0LL, v18);
  v20 = DCEx;
  GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v21 = 0;
  *(_QWORD *)&v75 = GreSelectFont(DCEx);
  v69 = 0;
  v80 = 0;
  v78 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
    xxxSendUAHInitMenuMessage(a2, (__int64)a1);
  v22 = 0;
  v72 = 0;
  v70 = 0;
  v23 = a5;
  v79 = a4;
  *(_DWORD *)(**a1 + 72) = 0;
  v24 = a1[2];
  if ( !v24 )
    v24 = (__int64 *)**a1;
  v25 = (__int64 *)MNGetpItemFromIndex(v24, 0LL);
  if ( !*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
  {
LABEL_67:
    *(_DWORD *)(**a1 + 72) = 0;
    goto LABEL_68;
  }
  v26 = v71;
  while ( 1 )
  {
    if ( !v25 )
      goto LABEL_64;
    v27 = (__int64)a1[2];
    if ( !v27 )
      v27 = **a1;
    v28 = *v25;
    if ( (*(_DWORD *)*v25 & 0x800) == 0
      || (unsigned int)MNIsOwnerDrawItem(v27, (_DWORD **)v25) && *(_WORD *)(v76 + 632) >= 0x400u )
    {
      v29 = *(_QWORD *)(v28 + 96) && v25[3];
      v72 |= v29;
      v30 = xxxMNItemSize(a1, a2, WindowDpiLastNotify, v20, (__int64)v25, v26, v74);
      v31 = v70;
      if ( v30 )
        v31 = 1;
      v70 = v31;
      v32 = (__int64)a1[2];
      if ( !v32 )
        v32 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v32, (__int64)v25) == -1 )
        goto LABEL_64;
      *(_DWORD *)(*v25 + 72) = v74[0];
      *(_DWORD *)(*v25 + 76) = v74[1];
      if ( !v26 && (!*(_QWORD *)(*v25 + 96) || v25[3]) )
      {
        v33 = (__int64)a1[2];
        if ( !v33 )
          v33 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v33) )
          *(_DWORD *)(*v25 + 72) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      }
    }
    else
    {
      *(_DWORD *)(v28 + 72) = 0;
      *(_DWORD *)(*v25 + 76) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify, v28) / 2;
    }
    if ( v68 && *(_DWORD *)(*v25 + 76) < v68 )
      *(_DWORD *)(*v25 + 76) = v68;
    if ( !v22 )
      v67 = *(_DWORD *)(*v25 + 76);
    if ( v26 )
      break;
    v34 = (_WORD *)v25[3];
    if ( v34 && *v34 == 8 )
    {
      v57 = (__int64)a1[2];
      if ( !v57 )
        v57 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v57) )
        *(_DWORD *)(*v25 + 72) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
    }
    v35 = (_DWORD *)*v25;
    if ( (*(_DWORD *)*v25 & 0x60) != 0 )
      goto LABEL_119;
    v36 = v35[18];
    v37 = **a1;
    if ( v23 + v36 + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > (unsigned int)(*(_DWORD *)(v37 + 64)
                                                                                              + a5)
      && v22 )
    {
      v35 = (_DWORD *)*v25;
LABEL_119:
      v38 = v67 + v79;
      v23 = a5;
      v79 += v67;
      v67 = v35[19];
      goto LABEL_55;
    }
    v38 = v79;
LABEL_55:
    v39 = v78;
    *(_DWORD *)(*v25 + 68) = v38;
    *(_DWORD *)(*v25 + 64) = v23;
    v40 = (_DWORD *)*v25;
    v23 += *(_DWORD *)(*v25 + 72);
LABEL_56:
    v41 = v40[18];
    v42 = v67;
    if ( v69 >= v41 )
      v41 = v69;
    v69 = v41;
    v43 = v40[19];
    if ( v67 != v43 )
    {
      if ( v67 >= v43 )
        v43 = v67;
      v42 = v43;
      v67 = v43;
      if ( !v71 )
      {
        v68 = v43;
        v67 = v43;
      }
    }
    v44 = a1[2];
    v45 = v38 + v42;
    v26 = v71;
    if ( v71 )
      v45 = v39;
    ++v22;
    v78 = v45;
    if ( !v44 )
      v44 = (__int64 *)**a1;
    v20 = DCEx;
    v25 = (__int64 *)MNGetpItemFromIndex(v44, v22);
    if ( v22 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
      goto LABEL_64;
  }
  v50 = *(_DWORD *)*v25 & 0x60;
  if ( !v50 && *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v22 + 1 )
  {
LABEL_110:
    *(_DWORD *)(*v25 + 64) = v23;
    *(_DWORD *)(*v25 + 68) = v79;
    v40 = (_DWORD *)*v25;
    v38 = *(_DWORD *)(*v25 + 76) + v79;
    v39 = v38;
    v79 = v38;
    if ( v78 >= v38 )
      v39 = v78;
    goto LABEL_56;
  }
  v51 = v22 + 1;
  v52 = v69;
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v22 + 1 && *(_DWORD *)(*v25 + 72) > v69 )
    v52 = *(_DWORD *)(*v25 + 72);
  xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v80, v22 + (v50 == 0), v52, v23);
  v53 = (__int64)a1[2];
  if ( !v53 )
    v53 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v53, (__int64)v25) == -1 )
  {
    v20 = DCEx;
LABEL_64:
    v46 = v80;
    goto LABEL_65;
  }
  if ( !v50 )
    goto LABEL_108;
  if ( !v70 || !a2 || (v55 = 1, (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 21LL) & 2) != 0) )
    v55 = 4;
  v23 = v54 + v55;
  v46 = v22;
  v80 = v22;
  v79 = a4;
  v69 = *(_DWORD *)(*v25 + 72);
  if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) != v51 )
    goto LABEL_108;
  xxxMNRecalcTabStrings((_DWORD)DCEx, (_DWORD)a1, v22, v51, *(_DWORD *)(*v25 + 72), v23);
  v56 = (__int64)a1[2];
  if ( !v56 )
    v56 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v56, (__int64)v25) != -1 )
  {
LABEL_108:
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) == v51 )
      *(_DWORD *)(**a1 + 64) = v54;
    goto LABEL_110;
  }
  v20 = DCEx;
LABEL_65:
  if ( !v72 || v46 )
  {
    v21 = v78;
    goto LABEL_67;
  }
  v58 = **a1;
  if ( *(int *)(*(_QWORD *)(v58 + 40) + 40LL) < 0 )
    goto LABEL_132;
  v59 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v58 + 40) + 40LL) & 0x4000000) != 0 )
  {
    DpiForSystem = GetDpiForSystem();
    if ( *(_DWORD *)(v59 + 72) <= (unsigned int)*(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4) )
    {
      v62 = GetDpiForSystem();
      v61 = *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v62) + 4);
    }
    else
    {
      v61 = *(_DWORD *)(**a1 + 72);
    }
    *(_DWORD *)(**a1 + 72) = v61;
    v58 = **a1;
LABEL_132:
    *(_DWORD *)(v58 + 72) += 2;
  }
  else
  {
    v63 = GetDpiForSystem();
    *(_DWORD *)(v59 + 72) += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, v63) + 4) + 2;
  }
  v21 = v78;
LABEL_68:
  if ( *(_DWORD *)(**a1 + 72) )
    *(_DWORD *)(**a1 + 72) += 2;
  if ( v80 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      if ( (***(_DWORD ***)(**a1 + 88) & 0x4000) != 0 )
      {
        v64 = 0;
        v65 = *(__int64 **)(**a1 + 88);
        if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
        {
          do
          {
            ++v64;
            v66 = *v65;
            v65 += 12;
            *(_DWORD *)(v66 + 64) = *(_DWORD *)(**a1 + 64) - *(_DWORD *)(v66 + 72) - *(_DWORD *)(v66 + 64);
          }
          while ( v64 < *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) );
          v20 = DCEx;
        }
      }
    }
  }
  GreSelectFont(v20);
  _ReleaseDC(v20);
  *(_DWORD *)(**a1 + 68) = v21 - a4;
  if ( a7 )
    *a7 = v68;
  return *(unsigned int *)(**a1 + 68);
}
