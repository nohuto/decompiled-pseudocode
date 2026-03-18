/*
 * XREFs of xxxDrawMenuItem @ 0x1C00AAA94
 * Callers:
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00AAC44 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00AACC4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00AB970 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     BltColor @ 0x1C023020C (BltColor.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0230CF4 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0230DAC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C029E274 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029E2B8 (GreSetTextCharacterExtra.c)
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
  __int64 v19; // rcx
  int v20; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v23; // r15d
  int v24; // esi
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // r13
  int v28; // ebx
  __int64 v29; // rdi
  int v30; // ecx
  int v31; // r10d
  unsigned int v32; // ebx
  _DWORD *v33; // rcx
  int v34; // r15d
  __int64 v35; // rcx
  int v36; // [rsp+50h] [rbp-78h]
  int v37; // [rsp+54h] [rbp-74h]
  __int64 v38; // [rsp+58h] [rbp-70h]
  _DWORD v39[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v40; // [rsp+80h] [rbp-48h]
  int v41; // [rsp+E0h] [rbp+18h]

  v36 = 0;
  v38 = 0LL;
  v7 = (__int64)a3[2];
  v41 = 0;
  if ( !v7 )
    v7 = **a3;
  v37 = MNIsOwnerDrawItem(v7, (_DWORD **)a4);
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
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48) )
    {
      v38 = GreSelectFont(a1);
      v12 = 0;
    }
    else
    {
      v41 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
      v12 = 64;
    }
    v13 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v37 )
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
        v19 = (__int64)a3[2];
        if ( !v19 )
          v19 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v19) )
        {
          v20 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem();
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v20 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v23 = OemBitmapInfoForDpi[3];
              v24 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v23 - 2) / 2;
              if ( v24 <= 0 )
                v24 = 0;
              BltColor(
                a1,
                v24 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v23,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_15:
      MNDrawInsertionBar(a1, (struct tagITEM *)a4);
      if ( v36 )
        GreSetBkMode(a1, v36);
      result = *(_DWORD **)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v38 )
        {
          return (_DWORD *)GreSelectFont(a1);
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
      v25 = gpsi;
      v26 = *(_DWORD *)(gpsi + 4684LL);
      v27 = *(_QWORD *)(gpsi + 4928LL);
LABEL_39:
      v28 = *(_DWORD *)(v25 + 4624);
      v29 = *(_QWORD *)(v25 + 4808);
      goto LABEL_42;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 )
    {
      v25 = gpsi;
      v26 = *(_DWORD *)(gpsi + 4620LL);
      v27 = *(_QWORD *)(gpsi + 4800LL);
      goto LABEL_39;
    }
  }
  else if ( v15 )
  {
    v28 = *(_DWORD *)(gpsi + 4596LL);
    v29 = *(_QWORD *)(gpsi + 4752LL);
    v26 = *(_DWORD *)(gpsi + 4688LL);
    if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
      v27 = *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL);
    else
      v27 = *(_QWORD *)(gpsi + 4936LL);
    goto LABEL_42;
  }
  v26 = *(_DWORD *)(gpsi + 4584LL);
  v27 = *(_QWORD *)(gpsi + 4728LL);
  v28 = *(_DWORD *)(gpsi + 4596LL);
  v29 = *(_QWORD *)(gpsi + 4752LL);
LABEL_42:
  v30 = *(_DWORD *)(*(_QWORD *)a4 + 4LL);
  if ( (v30 & 0x20000000) != 0 && !*(_QWORD *)(a4 + 24)
    || (v30 & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) == 0 )
  {
    goto LABEL_60;
  }
  if ( !v14 && v26 == *(_DWORD *)(gpsi + 4628LL) && !*(_DWORD *)(gpsi + 2188LL) )
  {
    if ( *(_DWORD *)(gpsi + 4632LL) != v26 || *(_DWORD *)(gpsi + 4648LL) != v26 )
    {
      v31 = ((*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0 ? 256 : 32) | v12;
LABEL_59:
      v41 = v31;
      goto LABEL_60;
    }
LABEL_58:
    v31 = v12 | 0x10;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(gpsi + 4636LL) == v26 )
    goto LABEL_58;
  v29 = *(_QWORD *)(gpsi + 4832LL);
  v28 = *(_DWORD *)(gpsi + 4636LL);
LABEL_60:
  GreSetBkColor(a1, v26);
  GreSetTextColor(a1, v28);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) || v14 || v15 )
  {
    v33 = *(_DWORD **)a4;
    v40 = v27;
    v39[0] = v33[16];
    v39[1] = v33[17];
    v39[2] = v33[18];
    v39[3] = v33[19];
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v39, 1);
    v32 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
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
    v32 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
  {
    v34 = GreSetBkMode(a1, 1);
    v36 = v34;
  }
  else
  {
    v34 = 0;
  }
  GreSelectBrush(a1, v29);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v41);
  v35 = (__int64)a3[2];
  if ( !v35 )
    v35 = **a3;
  result = (_DWORD *)MNGetpItemIndex(v35, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v32 != -2147352576 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_15;
  }
  if ( v34 )
    return (_DWORD *)GreSetBkMode(a1, v34);
  return result;
}
