/*
 * XREFs of xxxDrawState @ 0x1C0248824
 * Callers:
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreGetTextColor @ 0x1C00EB0F4 (GreGetTextColor.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C012897C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     BltColor @ 0x1C02486DC (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 *     GreGetHFONT @ 0x1C0299444 (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4914 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4960 (GreSetTextCharacterExtra.c)
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
  __int64 v28; // r8
  __int64 v29; // rbx
  int v30; // ebx
  __int64 v31; // r9
  HBRUSH v32; // rbx
  BOOL v33; // ebx
  HDC v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // r9d
  int v38; // eax
  unsigned int v39; // ebx
  int v41; // [rsp+50h] [rbp-B0h]
  BOOL v42; // [rsp+50h] [rbp-B0h]
  BOOL v43; // [rsp+54h] [rbp-ACh]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  int v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A4h] [rbp-5Ch]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[32]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v58[28]; // [rsp+D0h] [rbp-30h] BYREF

  v49 = a3;
  v45 = a2;
  v50 = 0LL;
  v44 = 0LL;
  memset(v57, 0, sizeof(v57));
  v10 = a8;
  v43 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v41 = 0;
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
  v46 = v14;
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
    v29 = *(_QWORD *)(GetDPIServerInfo(v27, v26, v28) + 24);
    if ( GreGetHFONT(a1) != v29 )
    {
      GreSelectFont(a1);
      GreSelectFont(a1);
      v50 = GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
      v51 = *(_QWORD *)(gpDispInfo + 72LL);
      v52 = v50;
      v41 = GrePushThreadGuardedObject(v57, &v51, SelectFont);
    }
    v14 = v46;
  }
  else
  {
    v15 = a1;
    GreGetDCPoint(a1, 4LL, &v44);
    GreSetViewportOrg(a1, a4 + v44, a5 + HIDWORD(v44));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v15, 0, v12);
  if ( v41 )
    GrePopThreadGuardedObject(v57);
  v42 = 1;
  if ( !v14 )
  {
    v30 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor(v15) != v30 )
      v42 = 0;
  }
  if ( (unsigned int)MNGetpItemIndex(*v49, v49[1]) == -1 || (v32 = *(HBRUSH *)(*(_QWORD *)v31 + 96LL)) == 0LL )
  {
    v33 = 0;
  }
  else
  {
    memset(v58, 0, 0x68uLL);
    v33 = (unsigned int)GreExtGetObjectW(v32, 104LL, (char *)v58) == 104 && HIWORD(v58[11]) == 32 && !v58[12];
    v43 = v33;
  }
  v34 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == v34 )
  {
    GreSetBkColor(v34, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v46 )
  {
    if ( v50 )
      GreSelectFont(v15);
    GreSetTextAlign(v15, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v53 = 0LL;
      v54 = v11;
      v55 = v13;
      v56 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 16384137, (struct _POLYPATBLT *)&v53, 1);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v36 = v45;
          BltColor(a1, v45, *(HDC *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v37 = a4 + 1;
LABEL_59:
          BltColor(a1, v36, *(HDC *)(gpDispInfo + 72LL), v37, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v43 )
          {
            GreGetDCPoint(a1, 4LL, &v44);
            GreSetViewportOrg(a1, a4 + v44, a5 + HIDWORD(v44));
            v38 = xxxRealDrawMenuItem(a1, 1, v42);
            v39 = v38 & Bitmap;
            GreSetViewportOrg(a1, v44, SHIDWORD(v44));
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v39;
        }
        v35 = v45;
LABEL_58:
        v45 = v35;
        v37 = a4;
        v36 = v35;
        goto LABEL_59;
      }
      BltColor(a1, *(_QWORD *)(gpsi + 4856LL), *(HDC *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v35 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_58;
  }
  if ( v33 )
    xxxRealDrawMenuItem(v15, 1, v42);
  GreSetViewportOrg(v15, v44, SHIDWORD(v44));
  return 1LL;
}
