/*
 * XREFs of xxxDrawMenuItem @ 0x1C00F96F4
 * Callers:
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00F98A4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00F9924 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00F9CC0 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0249934 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02499EC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4DC4 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4E10 (GreSetTextCharacterExtra.c)
 */

_DWORD *__fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 **a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v7; // rcx
  int v11; // eax
  int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r12d
  BOOL v15; // r15d
  int v16; // edx
  __int64 v17; // rcx
  _DWORD *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v28; // rdx
  __int16 *OemBitmapInfoForDpi; // rbx
  int v30; // r15d
  int v31; // esi
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // r13
  int v35; // ebx
  __int64 v36; // rdi
  int v37; // ecx
  int v38; // r10d
  unsigned int v39; // ebx
  _DWORD *v40; // rcx
  int v41; // r15d
  __int64 v42; // rcx
  int v43; // [rsp+50h] [rbp-78h]
  int v44; // [rsp+54h] [rbp-74h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  _DWORD v46[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v47; // [rsp+80h] [rbp-48h]
  int v48; // [rsp+E0h] [rbp+18h]

  v43 = 0;
  v45 = 0LL;
  v7 = (__int64)a3[2];
  v48 = 0;
  if ( !v7 )
    v7 = **a3;
  v44 = MNIsOwnerDrawItem(v7, (_DWORD **)a4);
  v11 = MNDrawHilite(a3, a4);
  v14 = v11;
  if ( v13 == -2147352576 )
  {
    if ( v11 || (v14 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v14 = 1;
    v15 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) == 0;
  }
  else
  {
    v15 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v19 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v19 )
    {
      v45 = GreSelectFont((__int64)a1, v19);
      v12 = 0;
    }
    else
    {
      v48 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2, v20, v21);
      GetDPIMETRICSForDpi();
      GreSetTextCharacterExtra(a1);
      v12 = 64;
    }
    v13 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v44 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4596LL));
    if ( v15 )
      v16 = *(_DWORD *)(gpsi + 4688LL);
    else
      v16 = *(_DWORD *)(gpsi + 4584LL);
    GreSetBkColor(a1, v16);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, a4, 0, 0, a6);
    v17 = (__int64)a3[2];
    if ( !v17 )
      v17 = **a3;
    result = (_DWORD *)MNGetpItemIndex(v17, a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 && *(_QWORD *)(a4 + 16) )
      {
        v22 = (__int64)a3[2];
        if ( !v22 )
          v22 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v22) )
        {
          v26 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000), v23, v24, v25);
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v26 + 62, DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL, v28) )
            {
              v30 = OemBitmapInfoForDpi[3];
              v31 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v30 - 2) / 2;
              if ( v31 <= 0 )
                v31 = 0;
              BltColor(
                a1,
                v31 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v30,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_15:
      MNDrawInsertionBar(a1, (struct tagITEM *)a4);
      if ( v43 )
        GreSetBkMode(a1, v43);
      result = *(_DWORD **)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v45 )
        {
          return (_DWORD *)GreSelectFont((__int64)a1, v45);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return (_DWORD *)GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v14 )
  {
    if ( v13 == -2147352576 )
    {
      v32 = gpsi;
      v33 = *(_DWORD *)(gpsi + 4684LL);
      v34 = *(_QWORD *)(gpsi + 4928LL);
LABEL_39:
      v35 = *(_DWORD *)(v32 + 4624);
      v36 = *(_QWORD *)(v32 + 4808);
      goto LABEL_42;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 )
    {
      v32 = gpsi;
      v33 = *(_DWORD *)(gpsi + 4620LL);
      v34 = *(_QWORD *)(gpsi + 4800LL);
      goto LABEL_39;
    }
  }
  else if ( v15 )
  {
    v35 = *(_DWORD *)(gpsi + 4596LL);
    v36 = *(_QWORD *)(gpsi + 4752LL);
    v33 = *(_DWORD *)(gpsi + 4688LL);
    if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
      v34 = *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL);
    else
      v34 = *(_QWORD *)(gpsi + 4936LL);
    goto LABEL_42;
  }
  v33 = *(_DWORD *)(gpsi + 4584LL);
  v34 = *(_QWORD *)(gpsi + 4728LL);
  v35 = *(_DWORD *)(gpsi + 4596LL);
  v36 = *(_QWORD *)(gpsi + 4752LL);
LABEL_42:
  v37 = *(_DWORD *)(*(_QWORD *)a4 + 4LL);
  if ( (v37 & 0x20000000) != 0 && !*(_QWORD *)(a4 + 24)
    || (v37 & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) == 0 )
  {
    goto LABEL_60;
  }
  if ( !v14 && v33 == *(_DWORD *)(gpsi + 4628LL) && !*(_DWORD *)(gpsi + 2188LL) )
  {
    if ( *(_DWORD *)(gpsi + 4632LL) != v33 || *(_DWORD *)(gpsi + 4648LL) != v33 )
    {
      v38 = ((*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0 ? 256 : 32) | v12;
LABEL_59:
      v48 = v38;
      goto LABEL_60;
    }
LABEL_58:
    v38 = v12 | 0x10;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(gpsi + 4636LL) == v33 )
    goto LABEL_58;
  v36 = *(_QWORD *)(gpsi + 4832LL);
  v35 = *(_DWORD *)(gpsi + 4636LL);
LABEL_60:
  GreSetBkColor(a1, v33);
  GreSetTextColor(a1, v35);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) || v14 || v15 )
  {
    v40 = *(_DWORD **)a4;
    v47 = v34;
    v46[0] = v40[16];
    v46[1] = v40[17];
    v46[2] = v40[18];
    v46[3] = v40[19];
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v46, 1);
    v39 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v14 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(gpsi + 4800LL));
  }
  else
  {
    v39 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
  {
    v41 = GreSetBkMode(a1, 1);
    v43 = v41;
  }
  else
  {
    v41 = 0;
  }
  GreSelectBrush(a1, v36);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v48);
  v42 = (__int64)a3[2];
  if ( !v42 )
    v42 = **a3;
  result = (_DWORD *)MNGetpItemIndex(v42, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v39 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, a3, a4);
    goto LABEL_15;
  }
  if ( v41 )
    return (_DWORD *)GreSetBkMode(a1, v41);
  return result;
}
