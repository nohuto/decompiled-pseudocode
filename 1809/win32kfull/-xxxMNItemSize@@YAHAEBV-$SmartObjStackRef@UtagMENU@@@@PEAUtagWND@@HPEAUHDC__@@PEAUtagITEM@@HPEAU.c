/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BCB4
 * Callers:
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C010F5A8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     FindCharPosition @ 0x1C0241A1C (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C029E274 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029E2B8 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, __int64 a3, HDC a4, __int64 a5, int a6, unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  unsigned int v11; // r15d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  _DWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  int v29; // edx
  int v30; // ecx
  __int64 v31; // r10
  unsigned int DpiForSystem; // eax
  __int64 v33; // [rsp+30h] [rbp-58h]
  char v34[4]; // [rsp+38h] [rbp-50h] BYREF
  int v35; // [rsp+3Ch] [rbp-4Ch]
  int v36; // [rsp+40h] [rbp-48h]
  unsigned int v37; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  v11 = a3;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, (unsigned int)a3, a3);
  v33 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(v11) + 48) )
    {
      v33 = GreSelectFont(a4);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(v11);
      GetDPIMETRICSForDpi(v11);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = (__int64)a1[2];
  if ( !v14 )
    v14 = **a1;
  LODWORD(v15) = MNIsOwnerDrawItem(v14, (_DWORD **)a5);
  v37 = v15;
  if ( !*(_QWORD *)(*(_QWORD *)a5 + 96LL) )
    goto LABEL_7;
  v20 = (__int64)a1[2];
  if ( !v20 )
    v20 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v20) && (v21 = *(_DWORD *)(*(_QWORD *)a5 + 96LL)) != 0 && (v21 <= 3 || v21 - 5 <= 6) )
  {
LABEL_7:
    if ( !(_DWORD)v15 )
      goto LABEL_57;
    xxxMNGetBitmapSize((_DWORD)a1, a5, a2, v11, (__int64)a4);
    v16 = (__int64)a1[2];
    if ( !v16 )
      v16 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v16, a5) != -1 )
    {
      v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 8);
      }
      else
      {
        v17 = (__int64)a1[2];
        if ( !v17 )
          v17 = **a1;
        if ( (unsigned int)MNIsUAHMenu(v17) )
          DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
      }
      LODWORD(v15) = v37;
      goto LABEL_17;
    }
  }
  else
  {
    v22 = *(_DWORD **)a5;
    if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) != -1LL )
    {
      if ( v22[26] != -1 )
      {
LABEL_49:
        v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v9 )
          v29 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
        else
          v29 = *(_DWORD *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v29;
        v30 = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
        if ( !v7 && v30 <= DpiDependentMetric )
          v30 = DpiDependentMetric;
        DpiDependentMetric = v30;
LABEL_17:
        if ( (_DWORD)v15 )
        {
LABEL_18:
          v18 = (__int64)a1[2];
          if ( !v18 )
            v18 = **a1;
          if ( (unsigned int)MNGetpItemIndex(v18, a5) != -1 && (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
          {
            if ( v33 )
              GreSelectFont(a4);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v31 = *(_QWORD *)(a5 + 24);
        if ( v31 )
        {
          if ( v7 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(v11) + 28);
            v31 = *(_QWORD *)(a5 + 24);
          }
          FindCharPosition(v31, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v9 )
            v9 += 2;
          else
            v9 = 0;
        }
        if ( v7 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x4000000) != 0
            || *(int *)(*(_QWORD *)(**a1 + 40) + 40LL) >= 0 )
          {
            DpiForSystem = GetDpiForSystem();
            v9 += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
          }
          v9 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
      if ( (v22[1] & 0x20000000) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, v11, v15);
        *(_DWORD *)(*(_QWORD *)a5 + 108LL) = GetDpiDependentMetric(26LL, v11, v23);
        if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) == 1LL )
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v25 = (__int64)a1[2];
      if ( !v25 )
        v25 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v25) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(HSURF *)(*(_QWORD *)a5 + 96LL), 32LL, v34) )
        {
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) = v35;
          v27 = v36;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, v11, v26);
          v27 = GetDpiDependentMetric(26LL, v11, v28);
        }
        *(_DWORD *)(*(_QWORD *)a5 + 108LL) = v27;
LABEL_48:
        LODWORD(v15) = v37;
        goto LABEL_49;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, a5, a2, v11, (__int64)a4);
    v24 = (__int64)a1[2];
    if ( !v24 )
      v24 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v24, a5) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v37;
}
