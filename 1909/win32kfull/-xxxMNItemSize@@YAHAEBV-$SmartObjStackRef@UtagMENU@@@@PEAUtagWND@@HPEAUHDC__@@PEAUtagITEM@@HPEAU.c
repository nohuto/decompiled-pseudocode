/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4
 * Callers:
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00289B0 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C012A974 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetDPIServerInfoForDpi @ 0x1C012AF80 (GetDPIServerInfoForDpi.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     FindCharPosition @ 0x1C025A0BC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025C810 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4914 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4960 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, unsigned int a3, HDC a4, __int64 a5, int a6, unsigned int *a7)
{
  int v11; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  _DWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r10
  __int64 v35; // rcx
  unsigned int DpiForSystem; // eax
  int v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  _DWORD v39[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+30h]

  memset(v39, 0, sizeof(v39));
  v11 = a6;
  DpiDependentMetric = 0;
  v13 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v38 = 0LL;
  v37 = DpiDependentMetric;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v25 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v25 )
    {
      v38 = GreSelectFont(a4, v25);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi();
      GreSetTextCharacterExtra(a4);
      v11 = a6;
    }
  }
  v14 = (__int64)a1[2];
  if ( !v14 )
    v14 = **a1;
  v15 = MNIsOwnerDrawItem(v14, (_DWORD **)a5);
  v18 = v15;
  v40 = v15;
  if ( !*(_QWORD *)(*(_QWORD *)a5 + 96LL) )
    goto LABEL_7;
  v26 = (__int64)a1[2];
  if ( !v26 )
    v26 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v26) && (v27 = *(_DWORD *)(*(_QWORD *)a5 + 96LL)) != 0 && (v27 <= 3 || v27 - 5 <= 6) )
  {
LABEL_7:
    if ( !(_DWORD)v18 )
      goto LABEL_57;
    xxxMNGetBitmapSize((_DWORD)a1, a5, a2, a3, (__int64)a4);
    v21 = a1[2];
    if ( !v21 )
      v21 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v21, a5, v19, v20) != -1 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
      if ( v11 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
        v13 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      else
      {
        v22 = (__int64)a1[2];
        if ( !v22 )
          v22 = **a1;
        if ( (unsigned int)MNIsUAHMenu(v22) )
          DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
      }
      v18 = v40;
      goto LABEL_17;
    }
  }
  else
  {
    v28 = *(_DWORD **)a5;
    if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) != -1LL )
    {
      if ( v28[26] != -1 )
        goto LABEL_49;
      if ( (v28[1] & 0x20000000) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
        *(_DWORD *)(*(_QWORD *)a5 + 108LL) = GetDpiDependentMetric(26LL, a3);
        if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) == 1LL )
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v32 = (__int64)a1[2];
      if ( !v32 )
        v32 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v32) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)a5 + 96LL), 32LL, (char *)v39) )
        {
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) = v39[1];
          v33 = v39[2];
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
          v33 = GetDpiDependentMetric(26LL, a3);
        }
        *(_DWORD *)(*(_QWORD *)a5 + 108LL) = v33;
LABEL_48:
        v18 = v40;
LABEL_49:
        v13 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v13 )
          v16 = v13;
        else
          v16 = *(unsigned int *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v16;
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
        if ( !v11 && DpiDependentMetric <= v37 )
          DpiDependentMetric = v37;
LABEL_17:
        if ( (_DWORD)v18 )
        {
LABEL_18:
          v23 = a1[2];
          if ( !v23 )
            v23 = (__int64 *)**a1;
          if ( (unsigned int)MNGetpItemIndex(v23, a5, v18, v17) != -1
            && (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
          {
            if ( v38 )
              GreSelectFont(a4, v38);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v34 = *(_QWORD *)(a5 + 24);
        if ( v34 )
        {
          if ( v11 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
            v34 = *(_QWORD *)(a5 + 24);
          }
          FindCharPosition(v34, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v13 )
            v13 += 2;
          else
            v13 = 0;
        }
        if ( v11 )
        {
          v35 = **a1;
          if ( (*(_DWORD *)(*(_QWORD *)(v35 + 40) + 40LL) & 0x4000000) != 0
            || (v35 = **a1, *(int *)(*(_QWORD *)(v35 + 40) + 40LL) >= 0) )
          {
            DpiForSystem = GetDpiForSystem(v35, v16, v18);
            v13 += *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
          }
          v13 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, a5, a2, a3, (__int64)a4);
    v31 = a1[2];
    if ( !v31 )
      v31 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v31, a5, v29, v30) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v13;
  return v40;
}
