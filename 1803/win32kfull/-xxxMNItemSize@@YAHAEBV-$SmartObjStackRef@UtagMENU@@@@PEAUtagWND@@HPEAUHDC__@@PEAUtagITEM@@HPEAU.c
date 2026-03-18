/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8
 * Callers:
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0013F30 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     FindCharPosition @ 0x1C022BA90 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C028A538 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C028A580 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, unsigned int a3, HDC a4, _QWORD *a5, int a6, unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  __int64 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  __int64 *v24; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 *v32; // rcx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // r10
  __int64 v37; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v39; // [rsp+30h] [rbp-58h]
  int v40; // [rsp+3Ch] [rbp-4Ch]
  int v41; // [rsp+40h] [rbp-48h]
  unsigned int v42; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v39 = 0LL;
  if ( (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi() + 48) )
    {
      v39 = GreSelectFont(a4);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi();
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (__int64 *)**a1;
  v15 = MNIsOwnerDrawItem(v14, a5);
  LODWORD(v18) = v15;
  v42 = v15;
  if ( !*(_QWORD *)(*a5 + 96LL) )
    goto LABEL_7;
  v26 = a1[2];
  if ( !v26 )
    v26 = (__int64 *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v26, v16, v15, v17)
    && (v29 = *(_DWORD *)(*a5 + 96LL)) != 0
    && (v29 <= 3 || v29 - 5 <= 6) )
  {
LABEL_7:
    if ( !(_DWORD)v18 )
      goto LABEL_57;
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v19 = a1[2];
    if ( !v19 )
      v19 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v19, a5) != -1 )
    {
      v9 = *(_DWORD *)(*a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      else
      {
        v23 = a1[2];
        if ( !v23 )
          v23 = (__int64 *)**a1;
        if ( (unsigned int)MNIsUAHMenu(v23, v20, v21, v22) )
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
      }
      LODWORD(v18) = v42;
      goto LABEL_17;
    }
  }
  else
  {
    v30 = *a5;
    if ( *(_QWORD *)(*a5 + 96LL) != -1LL )
    {
      if ( *(_DWORD *)(v30 + 104) != -1 )
      {
LABEL_49:
        v9 = *(_DWORD *)(*a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v9 )
          v34 = *(_DWORD *)(*a5 + 104LL);
        else
          v34 = *(_DWORD *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v34;
        v35 = *(_DWORD *)(*a5 + 108LL);
        if ( !v7 && v35 <= DpiDependentMetric )
          v35 = DpiDependentMetric;
        DpiDependentMetric = v35;
LABEL_17:
        if ( (_DWORD)v18 )
        {
LABEL_18:
          v24 = a1[2];
          if ( !v24 )
            v24 = (__int64 *)**a1;
          if ( (unsigned int)MNGetpItemIndex(v24, a5) != -1 && (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
          {
            if ( v39 )
              GreSelectFont(a4);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v36 = a5[3];
        if ( v36 )
        {
          if ( v7 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
            v36 = a5[3];
          }
          FindCharPosition(v36, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v9 )
            v9 += 2;
          else
            v9 = 0;
        }
        if ( v7 )
        {
          v37 = **a1;
          if ( (*(_DWORD *)(*(_QWORD *)(v37 + 40) + 40LL) & 0x4000000) != 0
            || (v37 = **a1, *(int *)(*(_QWORD *)(v37 + 40) + 40LL) >= 0) )
          {
            DpiForSystem = GetDpiForSystem(v37);
            v9 += *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
          }
          v9 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(v30 + 4) & 0x20000000) != 0 )
      {
        *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
        *(_DWORD *)(*a5 + 108LL) = GetDpiDependentMetric(26LL, a3);
        if ( *(_QWORD *)(*a5 + 96LL) == 1LL )
          *(_DWORD *)(*a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v32 = a1[2];
      if ( !v32 )
        v32 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v32, v27, v18, v28) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(_QWORD *)(*a5 + 96LL)) )
        {
          *(_DWORD *)(*a5 + 104LL) = v40;
          v33 = v41;
        }
        else
        {
          *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
          v33 = GetDpiDependentMetric(26LL, a3);
        }
        *(_DWORD *)(*a5 + 108LL) = v33;
LABEL_48:
        LODWORD(v18) = v42;
        goto LABEL_49;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v31 = a1[2];
    if ( !v31 )
      v31 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v31, a5) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v42;
}
