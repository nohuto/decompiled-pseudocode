/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C010F5A8
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BCB4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     MNInitUAHMenuItem @ 0x1C00AAE78 (MNInitUAHMenuItem.c)
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0129880 (MNUpdateUAHMaxPopupWidths.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(__int64 **a1, __int64 a2, ULONG_PTR a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int128 v18; // xmm1
  int v19; // edx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  int v22; // eax
  _QWORD v23[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v23, 0, sizeof(v23));
  v11 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 104LL) != -1 )
    return 0LL;
  v23[0] = 1LL;
  v23[1] = *(unsigned int *)(v11 + 8);
  LODWORD(v23[2]) = *(_DWORD *)(GetDPIServerInfoForDpi(a4, v9, v10) + 36);
  v13 = *(_QWORD *)a2;
  v23[3] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (*(_DWORD *)v13 & 0x100) != 0 || *(_QWORD *)(v13 + 96) == -1LL && a3 )
  {
    xxxSendMessage(a3);
    v20 = (__int64)a1[2];
    if ( !v20 )
      v20 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v20, a2) == -1 )
      return 0LL;
  }
  v14 = (__int64)a1[2];
  if ( !v14 )
    v14 = **a1;
  if ( !(unsigned int)MNIsUAHMenu(v14) || !a3 )
    goto LABEL_19;
  v15 = a1[2];
  v16 = (__int64)v15;
  if ( !v15 )
    v15 = (__int64 *)**a1;
  if ( v15 )
    v23[4] = *v15;
  else
    v23[4] = 0LL;
  v23[5] = a5;
  LODWORD(v23[6]) = *(_DWORD *)(v15[5] + 40);
  if ( !v16 )
    v16 = **a1;
  MNInitUAHMenuItem(v16, a2, (__int64)&v23[7]);
  xxxSendMessage(a3);
  v17 = (__int64)a1[2];
  if ( !v17 )
    v17 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 )
    return 0LL;
  v18 = *(_OWORD *)((char *)&v23[9] + 4);
  *(_OWORD *)(a2 + 52) = *(_OWORD *)((char *)&v23[7] + 4);
  *(_OWORD *)(a2 + 68) = v18;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) != 0 )
  {
    v21 = a1[2];
    if ( !v21 )
      v21 = (__int64 *)**a1;
    v22 = MNUpdateUAHMaxPopupWidths(v21, a2);
    v19 = v22 + HIDWORD(v23[1]);
    goto LABEL_20;
  }
LABEL_19:
  v19 = HIDWORD(v23[1]);
LABEL_20:
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)a2 + 104LL) = v19;
  *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v23[2];
  return result;
}
