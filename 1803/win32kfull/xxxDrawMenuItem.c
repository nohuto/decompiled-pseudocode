/*
 * XREFs of xxxDrawMenuItem @ 0x1C001065C
 * Callers:
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C01FECA4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C001080C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0010A0C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0010A38 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     BltColor @ 0x1C020708C (BltColor.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0207B14 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0207BCC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C028A538 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C028A580 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, _QWORD **a3, struct tagITEM *a4, char a5, __int64 a6)
{
  _QWORD *v7; // rcx
  int v11; // eax
  int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r12d
  BOOL v15; // r15d
  _QWORD *v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  int v23; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v26; // r15d
  int v27; // esi
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // r13
  __int64 v31; // rdi
  int v32; // ecx
  int v33; // r10d
  unsigned int v34; // ebx
  _DWORD *v35; // rcx
  int v36; // r15d
  _QWORD *v37; // rcx
  int v38; // [rsp+50h] [rbp-78h]
  int v39; // [rsp+54h] [rbp-74h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  _DWORD v41[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v42; // [rsp+80h] [rbp-48h]
  int v43; // [rsp+E0h] [rbp+18h]

  v38 = 0;
  v40 = 0LL;
  v7 = a3[2];
  v43 = 0;
  if ( !v7 )
    v7 = (_QWORD *)**a3;
  v39 = MNIsOwnerDrawItem(v7, a4);
  v11 = MNDrawHilite(a3, a4);
  v14 = v11;
  if ( v13 == -2147352576 )
  {
    if ( v11 || (v14 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v14 = 1;
    v15 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) == 0;
  }
  else
  {
    v15 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v21 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48);
    if ( v21 )
    {
      v40 = GreSelectFont(a1, v21);
      v12 = 0;
    }
    else
    {
      v43 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
      v12 = 64;
    }
    v13 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v39 )
  {
    GreSetTextColor(a1);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, (_DWORD)a4, 0, 0, a6);
    v16 = a3[2];
    if ( !v16 )
      v16 = (_QWORD *)**a3;
    result = MNGetpItemIndex(v16, a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 && *((_QWORD *)a4 + 2) )
      {
        v22 = a3[2];
        if ( !v22 )
          v22 = (_QWORD *)**a3;
        if ( !(unsigned int)MNIsUAHMenu(v22, v18, v19, v20) )
        {
          v23 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000));
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v23 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v26 = OemBitmapInfoForDpi[3];
              v27 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v26 - 2) / 2;
              if ( v27 <= 0 )
                v27 = 0;
              BltColor(
                a1,
                v27 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v26,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_13:
      MNDrawInsertionBar(a1, a4);
      if ( v38 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v40 )
        {
          return GreSelectFont(a1, v40);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
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
      v28 = gpsi;
      v29 = *(_DWORD *)(gpsi + 4684LL);
      v30 = *(_QWORD *)(gpsi + 4928LL);
LABEL_36:
      v31 = *(_QWORD *)(v28 + 4808);
      goto LABEL_39;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 )
    {
      v28 = gpsi;
      v29 = *(_DWORD *)(gpsi + 4620LL);
      v30 = *(_QWORD *)(gpsi + 4800LL);
      goto LABEL_36;
    }
  }
  else if ( v15 )
  {
    v31 = *(_QWORD *)(gpsi + 4752LL);
    v29 = *(_DWORD *)(gpsi + 4688LL);
    if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) )
      v30 = *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL);
    else
      v30 = *(_QWORD *)(gpsi + 4936LL);
    goto LABEL_39;
  }
  v29 = *(_DWORD *)(gpsi + 4584LL);
  v30 = *(_QWORD *)(gpsi + 4728LL);
  v31 = *(_QWORD *)(gpsi + 4752LL);
LABEL_39:
  v32 = *(_DWORD *)(*(_QWORD *)a4 + 4LL);
  if ( (v32 & 0x20000000) != 0 && !*((_QWORD *)a4 + 3)
    || (v32 & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) == 0 )
  {
    goto LABEL_57;
  }
  if ( !v14 && v29 == *(_DWORD *)(gpsi + 4628LL) && !*(_DWORD *)(gpsi + 2188LL) )
  {
    if ( *(_DWORD *)(gpsi + 4632LL) != v29 || *(_DWORD *)(gpsi + 4648LL) != v29 )
    {
      v33 = ((*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0 ? 256 : 32) | v12;
LABEL_56:
      v43 = v33;
      goto LABEL_57;
    }
LABEL_55:
    v33 = v12 | 0x10;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(gpsi + 4636LL) == v29 )
    goto LABEL_55;
  v31 = *(_QWORD *)(gpsi + 4832LL);
LABEL_57:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) || v14 || v15 )
  {
    v35 = *(_DWORD **)a4;
    v42 = v30;
    v41[0] = v35[16];
    v41[1] = v35[17];
    v41[2] = v35[18];
    v41[3] = v35[19];
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v41, 1u);
    v34 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
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
    v34 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) )
  {
    v36 = GreSetBkMode(a1);
    v38 = v36;
  }
  else
  {
    v36 = 0;
  }
  GreSelectBrush(a1, v31);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v43);
  v37 = a3[2];
  if ( !v37 )
    v37 = (_QWORD *)**a3;
  result = MNGetpItemIndex(v37, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v34 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, a3, a4);
    goto LABEL_13;
  }
  if ( v36 )
    return GreSetBkMode(a1);
  return result;
}
