/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180
 * Callers:
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0021FE0 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     FindCharPosition @ 0x1C025A7FC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4DC4 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4E10 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        __int64 **a1,
        __int64 a2,
        unsigned int a3,
        HDC a4,
        __int64 *a5,
        int a6,
        unsigned int *a7)
{
  int v11; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v13; // r14d
  __int64 *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rcx
  int v27; // eax
  __int64 v28; // r10
  __int64 v29; // rcx
  unsigned int DpiForSystem; // eax
  int v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  _DWORD v33[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+30h]

  memset(v33, 0, sizeof(v33));
  v11 = a6;
  DpiDependentMetric = 0;
  v13 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v32 = 0LL;
  v31 = DpiDependentMetric;
  if ( (*(_DWORD *)(*a5 + 4) & 0x1000) != 0 )
  {
    v21 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v21 )
    {
      v32 = GreSelectFont(a4, v21);
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
  v14 = a1[2];
  if ( !v14 )
    v14 = (__int64 *)**a1;
  v16 = MNIsOwnerDrawItem(v14, a5);
  v34 = v16;
  if ( !*(_QWORD *)(*a5 + 96) )
    goto LABEL_7;
  v22 = a1[2];
  if ( !v22 )
    v22 = (__int64 *)**a1;
  if ( (unsigned int)MNIsUAHMenu(v22) && (v23 = *(_DWORD *)(*a5 + 96)) != 0 && (v23 <= 3 || v23 - 5 <= 6) )
  {
LABEL_7:
    if ( !v16 )
      goto LABEL_57;
    xxxMNGetBitmapSize(a1, a5, a2, a3, (__int64)a4);
    v17 = a1[2];
    if ( !v17 )
      v17 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a5) != -1 )
    {
      v13 = *(_DWORD *)(*a5 + 104);
      if ( v11 )
      {
        DpiDependentMetric = *(_DWORD *)(*a5 + 108);
        v13 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      else
      {
        v18 = a1[2];
        if ( !v18 )
          v18 = (__int64 *)**a1;
        if ( (unsigned int)MNIsUAHMenu(v18) )
          DpiDependentMetric = *(_DWORD *)(*a5 + 108);
      }
      v16 = v34;
      goto LABEL_17;
    }
  }
  else
  {
    v24 = *a5;
    if ( *(_QWORD *)(*a5 + 96) != -1LL )
    {
      if ( *(_DWORD *)(v24 + 104) != -1 )
        goto LABEL_49;
      if ( (*(_DWORD *)(v24 + 4) & 0x20000000) != 0 )
      {
        *(_DWORD *)(*a5 + 104) = GetDpiDependentMetric(25LL, a3);
        *(_DWORD *)(*a5 + 108) = GetDpiDependentMetric(26LL, a3);
        if ( *(_QWORD *)(*a5 + 96) == 1LL )
          *(_DWORD *)(*a5 + 104) += 2;
        goto LABEL_48;
      }
      v26 = a1[2];
      if ( !v26 )
        v26 = (__int64 *)**a1;
      if ( !(unsigned int)MNIsUAHMenu(v26) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(_QWORD *)(*a5 + 96)) )
        {
          *(_DWORD *)(*a5 + 104) = v33[1];
          v27 = v33[2];
        }
        else
        {
          *(_DWORD *)(*a5 + 104) = GetDpiDependentMetric(25LL, a3);
          v27 = GetDpiDependentMetric(26LL, a3);
        }
        *(_DWORD *)(*a5 + 108) = v27;
LABEL_48:
        v16 = v34;
LABEL_49:
        v13 = *(_DWORD *)(*a5 + 104);
        if ( *(_DWORD *)(**a1 + 72) <= v13 )
          v15 = v13;
        else
          v15 = *(unsigned int *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v15;
        DpiDependentMetric = *(_DWORD *)(*a5 + 108);
        if ( !v11 && DpiDependentMetric <= v31 )
          DpiDependentMetric = v31;
LABEL_17:
        if ( v16 )
        {
LABEL_18:
          v19 = a1[2];
          if ( !v19 )
            v19 = (__int64 *)**a1;
          if ( (unsigned int)MNGetpItemIndex(v19, a5) != -1 && (*(_DWORD *)(*a5 + 4) & 0x1000) != 0 )
          {
            if ( v32 )
              GreSelectFont(a4, v32);
            else
              GreSetTextCharacterExtra(a4);
          }
          goto LABEL_22;
        }
LABEL_57:
        v28 = a5[3];
        if ( v28 )
        {
          if ( v11 )
          {
            if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
              DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
            v28 = a5[3];
          }
          FindCharPosition(v28, 9LL);
          xxxPSMGetTextExtent(a4);
          if ( v13 )
            v13 += 2;
          else
            v13 = 0;
        }
        if ( v11 )
        {
          v29 = **a1;
          if ( (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 40LL) & 0x4000000) != 0
            || (v29 = **a1, *(int *)(*(_QWORD *)(v29 + 40) + 40LL) >= 0) )
          {
            DpiForSystem = GetDpiForSystem(v29, v15);
            v13 += *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2);
          }
          v13 += 6;
          DpiDependentMetric += 2;
        }
        goto LABEL_18;
      }
    }
    xxxMNGetBitmapSize(a1, a5, a2, a3, (__int64)a4);
    v25 = a1[2];
    if ( !v25 )
      v25 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v25, a5) != -1 )
      goto LABEL_48;
  }
LABEL_22:
  a7[1] = DpiDependentMetric;
  *a7 = v13;
  return v34;
}
