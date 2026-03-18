/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0013F30
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0013DB8 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0006CC0 (MNUpdateUAHMaxPopupWidths.c)
 *     MNInitUAHMenuItem @ 0x1C0010BE4 (MNInitUAHMenuItem.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(__int64 **a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int128 v19; // xmm1
  int v20; // edx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  _QWORD v24[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v24, 0, sizeof(v24));
  v9 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 104LL) != -1 )
    return 0LL;
  v24[0] = 1LL;
  v24[1] = *(unsigned int *)(v9 + 8);
  LODWORD(v24[2]) = *(_DWORD *)(GetDPIServerInfoForDpi(a4) + 36);
  v14 = *(_QWORD *)a2;
  v24[3] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (*(_DWORD *)v14 & 0x100) != 0 || *(_QWORD *)(v14 + 96) == -1LL && a3 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))xxxSendMessage)(a3, 44LL, 0LL, v24);
    v21 = a1[2];
    if ( !v21 )
      v21 = (__int64 *)**a1;
    if ( (unsigned int)MNGetpItemIndex(v21, a2) == -1 )
      return 0LL;
  }
  v15 = a1[2];
  if ( !v15 )
    v15 = (__int64 *)**a1;
  if ( !(unsigned int)MNIsUAHMenu(v15, v11, v12, v13) || !a3 )
    goto LABEL_19;
  v16 = a1[2];
  v17 = (__int64)v16;
  if ( !v16 )
    v16 = (__int64 *)**a1;
  if ( v16 )
    v24[4] = *v16;
  else
    v24[4] = 0LL;
  v24[5] = a5;
  LODWORD(v24[6]) = *(_DWORD *)(v16[5] + 40);
  if ( !v17 )
    v17 = **a1;
  MNInitUAHMenuItem(v17, a2, (__int64)&v24[7]);
  ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))xxxSendMessage)(a3, 148LL, 0LL, v24);
  v18 = a1[2];
  if ( !v18 )
    v18 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v18, a2) == -1 )
    return 0LL;
  v19 = *(_OWORD *)((char *)&v24[9] + 4);
  *(_OWORD *)(a2 + 52) = *(_OWORD *)((char *)&v24[7] + 4);
  *(_OWORD *)(a2 + 68) = v19;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) != 0 )
  {
    v22 = (__int64)a1[2];
    if ( !v22 )
      v22 = **a1;
    v23 = MNUpdateUAHMaxPopupWidths(v22, a2);
    v20 = v23 + HIDWORD(v24[1]);
    goto LABEL_20;
  }
LABEL_19:
  v20 = HIDWORD(v24[1]);
LABEL_20:
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)a2 + 104LL) = v20;
  *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v24[2];
  return result;
}
