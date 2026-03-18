/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0021FE0
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 *     MNInitUAHMenuItem @ 0x1C00F9AF0 (MNInitUAHMenuItem.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C00FC8C0 (MNUpdateUAHMaxPopupWidths.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(_QWORD **a1, __int64 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // r9
  _QWORD *v15; // rcx
  __int128 v16; // xmm1
  int v17; // edx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  int v20; // eax
  _QWORD v21[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v21, 0, sizeof(v21));
  v9 = *a2;
  if ( *(_DWORD *)(*a2 + 104) != -1 )
    return 0LL;
  v21[0] = 1LL;
  v21[1] = *(unsigned int *)(v9 + 8);
  LODWORD(v21[2]) = *(_DWORD *)(GetDPIServerInfoForDpi(a4) + 36);
  v11 = *a2;
  v21[3] = *(_QWORD *)(*a2 + 56);
  if ( (*(_DWORD *)v11 & 0x100) != 0 || *(_QWORD *)(v11 + 96) == -1LL && a3 )
  {
    xxxSendMessage(a3, 44LL, 0LL, v21);
    v18 = a1[2];
    if ( !v18 )
      v18 = (_QWORD *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v18, a2) == -1 )
      return 0LL;
  }
  v12 = a1[2];
  if ( !v12 )
    v12 = (_QWORD *)**a1;
  if ( !(unsigned int)MNIsUAHMenu(v12) || !a3 )
    goto LABEL_19;
  v13 = a1[2];
  v14 = v13;
  if ( !v13 )
    v13 = (_QWORD *)**a1;
  if ( v13 )
    v21[4] = *v13;
  else
    v21[4] = 0LL;
  v21[5] = a5;
  LODWORD(v21[6]) = *(_DWORD *)(v13[5] + 40LL);
  if ( !v14 )
    v14 = (_QWORD *)**a1;
  MNInitUAHMenuItem(v14, a2, &v21[7]);
  xxxSendMessage(a3, 148LL, 0LL, v21);
  v15 = a1[2];
  if ( !v15 )
    v15 = (_QWORD *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v15, a2) == -1 )
    return 0LL;
  v16 = *(_OWORD *)((char *)&v21[9] + 4);
  *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)&v21[7] + 4);
  *(_OWORD *)((char *)a2 + 68) = v16;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 1) != 0 )
  {
    v19 = a1[2];
    if ( !v19 )
      v19 = (_QWORD *)**a1;
    v20 = MNUpdateUAHMaxPopupWidths(v19, a2);
    v17 = v20 + HIDWORD(v21[1]);
    goto LABEL_20;
  }
LABEL_19:
  v17 = HIDWORD(v21[1]);
LABEL_20:
  result = 1LL;
  *(_DWORD *)(*a2 + 104) = v17;
  *(_DWORD *)(*a2 + 108) = v21[2];
  return result;
}
