/*
 * XREFs of xxxDrawState @ 0x1C02071C8
 * Callers:
 *     xxxDrawMenuItem @ 0x1C001065C (xxxDrawMenuItem.c)
 * Callees:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000CF94 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     GreGetTextColor @ 0x1C012F9C0 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     BltColor @ 0x1C020708C (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 *     GreGetHFONT @ 0x1C026EF2C (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C028A538 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C028A580 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // r15d
  int v13; // esi
  int v14; // ebx
  HDC v15; // r14
  unsigned int Layout; // eax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // r9
  HBRUSH v32; // rcx
  HDC v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // r9d
  int v37; // eax
  unsigned int v38; // ebx
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h]
  int TextAlign; // [rsp+74h] [rbp-8Ch]
  __int64 Bitmap; // [rsp+78h] [rbp-88h]
  __int64 *v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  _QWORD v54[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v55[40]; // [rsp+B8h] [rbp-48h] BYREF
  char v56[46]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v57; // [rsp+10Eh] [rbp+Eh]
  int v58; // [rsp+110h] [rbp+10h]

  v48 = a3;
  v44 = a2;
  v49 = 0LL;
  v42 = 0LL;
  memset(v55, 0, 0x20uLL);
  v10 = a8;
  v43 = 0;
  v40 = 0;
  TextAlign = 0;
  if ( (a8 & 0x20) != 0 && (*(_WORD *)(gpsi + 6996LL) == 1 || *(_DWORD *)(gpsi + 2188LL)) )
    v10 = a8 & 0xFFFFFFCF | 0x10;
  v11 = a6;
  v12 = v10 | 0x80;
  if ( (v10 & 0x170) == 0 )
    v12 = v10;
  if ( !a6 )
    return 1LL;
  v13 = a7;
  if ( !a7 )
    return 1LL;
  v14 = v12 & 0x80;
  v45 = v14;
  if ( (v12 & 0x80) != 0 )
  {
    v15 = *(HDC *)(gpDispInfo + 72LL);
    GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v15, a6, Layout);
    v17 = gpDispInfo;
    v18 = a6 + 1;
    v19 = *(unsigned int *)(gpDispInfo + 88LL);
    if ( (int)v19 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 92LL) < a7 )
    {
      v20 = *(_DWORD *)(gpDispInfo + 92LL);
      v21 = (unsigned int)a7;
      if ( v20 > a7 )
        v21 = (unsigned int)v20;
      if ( (int)v19 <= v18 )
        v19 = (unsigned int)v18;
      Bitmap = GreCreateBitmap(v19, v21, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        v22 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), Bitmap);
        GreDeleteObject(v22);
        GreSetBitmapOwner(Bitmap, 0LL);
        v17 = gpDispInfo;
        v23 = *(_DWORD *)(gpDispInfo + 88LL);
        if ( v23 <= v18 )
          v23 = a6 + 1;
        *(_DWORD *)(gpDispInfo + 88LL) = v23;
        v24 = a7;
        if ( *(_DWORD *)(gpDispInfo + 92LL) > a7 )
          v24 = *(_DWORD *)(gpDispInfo + 92LL);
        *(_DWORD *)(gpDispInfo + 92LL) = v24;
      }
      else
      {
        v17 = gpDispInfo;
        v13 = *(_DWORD *)(gpDispInfo + 92LL);
        v11 = *(_DWORD *)(gpDispInfo + 88LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v17 + 72LL),
      0LL,
      0,
      *(_DWORD *)(*(_QWORD *)v17 + 88LL),
      *(_DWORD *)(*(_QWORD *)v17 + 92LL),
      16711778);
    GreGetTextCharacterExtra(a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 72LL));
    TextAlign = GreGetTextAlign(v15);
    v25 = GreGetTextAlign(a1);
    GreSetTextAlign(v15, TextAlign ^ ((unsigned __int16)TextAlign ^ v25) & 0x106);
    v28 = *(_QWORD *)(GetDPIServerInfo(v27, v26) + 24);
    if ( GreGetHFONT(a1) != v28 )
    {
      GreSelectFont(a1);
      GreSelectFont(a1);
      v49 = GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
      v54[0] = *(_QWORD *)(gpDispInfo + 72LL);
      v54[1] = v49;
      v40 = GrePushThreadGuardedObject(v55, v54, SelectFont);
    }
    v14 = v45;
  }
  else
  {
    v15 = a1;
    GreGetDCPoint(a1, 4LL, &v42);
    GreSetViewportOrg(a1, a4 + v42, a5 + HIDWORD(v42));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v15, 0, v12);
  if ( v40 )
    GrePopThreadGuardedObject(v55);
  v30 = 1;
  if ( !v14 )
  {
    v29 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor(v15) != v29 )
      v30 = 0;
  }
  v41 = v30;
  if ( (unsigned int)MNGetpItemIndex(*v48, v48[1]) != -1 )
  {
    v32 = *(HBRUSH *)(*(_QWORD *)v31 + 96LL);
    if ( v32 )
      v43 = (unsigned int)GreExtGetObjectW(v32, 104LL, v56) == 104 && v57 == 32 && !v58;
  }
  v33 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == v33 )
  {
    GreSetBkColor(v33, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v45 )
  {
    if ( v49 )
      GreSelectFont(v15);
    GreSetTextAlign(v15, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v50 = 0LL;
      v51 = v11;
      v52 = v13;
      v53 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 16384137, (struct _POLYPATBLT *)&v50, 1);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v35 = v44;
          BltColor(a1, v44, *(HDC *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v36 = a4 + 1;
LABEL_57:
          BltColor(a1, v35, *(HDC *)(gpDispInfo + 72LL), v36, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v43 )
          {
            GreGetDCPoint(a1, 4LL, &v42);
            GreSetViewportOrg(a1, a4 + v42, a5 + HIDWORD(v42));
            v37 = xxxRealDrawMenuItem(a1, 1, v41);
            v38 = v37 & Bitmap;
            GreSetViewportOrg(a1, v42, SHIDWORD(v42));
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v38;
        }
        v34 = v44;
LABEL_56:
        v44 = v34;
        v36 = a4;
        v35 = v34;
        goto LABEL_57;
      }
      BltColor(a1, *(_QWORD *)(gpsi + 4856LL), *(HDC *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v34 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_56;
  }
  if ( v43 )
    xxxRealDrawMenuItem(v15, 1, v30);
  GreSetViewportOrg(v15, v42, SHIDWORD(v42));
  return 1LL;
}
