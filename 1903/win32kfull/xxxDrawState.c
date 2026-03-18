/*
 * XREFs of xxxDrawState @ 0x1C0248F64
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 * Callees:
 *     GreGetTextColor @ 0x1C000BF94 (GreGetTextColor.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00F9D68 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 *     GreGetHFONT @ 0x1C02999F4 (GreGetHFONT.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4DC4 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4E10 (GreSetTextCharacterExtra.c)
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
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // ebx
  __int64 v29; // r9
  HBRUSH v30; // rbx
  BOOL v31; // ebx
  HDC v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // r9d
  int v36; // eax
  unsigned int v37; // ebx
  int v39; // [rsp+50h] [rbp-B0h]
  BOOL v40; // [rsp+50h] [rbp-B0h]
  BOOL v41; // [rsp+54h] [rbp-ACh]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  int TextAlign; // [rsp+6Ch] [rbp-94h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  _BYTE v55[32]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v56[28]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v43 = a2;
  v48 = 0LL;
  v42 = 0LL;
  memset(v55, 0, sizeof(v55));
  v10 = a8;
  v41 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v39 = 0;
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
  v44 = v14;
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
        v22 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL));
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
    v26 = *(_QWORD *)(GetDPIServerInfo() + 24);
    if ( GreGetHFONT(a1) != v26 )
    {
      v27 = GreSelectFont((__int64)a1, v26);
      GreSelectFont((__int64)a1, v27);
      v48 = GreSelectFont(*(_QWORD *)(gpDispInfo + 72LL), v27);
      v49 = *(_QWORD *)(gpDispInfo + 72LL);
      v50 = v48;
      v39 = GrePushThreadGuardedObject(v55, &v49, SelectFont);
    }
    v14 = v44;
  }
  else
  {
    v15 = a1;
    GreGetDCPoint(a1, 4LL, &v42);
    GreSetViewportOrg(a1, a4 + v42, a5 + HIDWORD(v42));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem(v15, 0, v12);
  if ( v39 )
    GrePopThreadGuardedObject(v55);
  v40 = 1;
  if ( !v14 )
  {
    v28 = *(_DWORD *)(gpsi + 4636LL);
    if ( (unsigned int)GreGetTextColor(v15) != v28 )
      v40 = 0;
  }
  if ( (unsigned int)MNGetpItemIndex(*v47, v47[1]) == -1 || (v30 = *(HBRUSH *)(*(_QWORD *)v29 + 96LL)) == 0LL )
  {
    v31 = 0;
  }
  else
  {
    memset(v56, 0, 0x68uLL);
    v31 = (unsigned int)GreExtGetObjectW(v30, 104LL, (char *)v56) == 104 && HIWORD(v56[11]) == 32 && !v56[12];
    v41 = v31;
  }
  v32 = *(HDC *)(gpDispInfo + 72LL);
  if ( v15 == v32 )
  {
    GreSetBkColor(v32, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  }
  if ( v44 )
  {
    if ( v48 )
      GreSelectFont((__int64)v15, v48);
    GreSetTextAlign(v15, TextAlign);
    if ( (v12 & 0x10) != 0 )
    {
      v51 = 0LL;
      v52 = v11;
      v53 = v13;
      v54 = *(_QWORD *)(gpsi + 4944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 72LL), 16384137, (struct _POLYPATBLT *)&v51, 1);
    }
    if ( (v12 & 0x100) == 0 )
    {
      if ( (v12 & 0x20) == 0 )
      {
        if ( (v12 & 0x40) != 0 )
        {
          v34 = v43;
          BltColor(a1, v43, *(HDC *)(gpDispInfo + 72LL), a4, a5, v11, v13, 0, 0, 1);
          v35 = a4 + 1;
LABEL_59:
          BltColor(a1, v34, *(HDC *)(gpDispInfo + 72LL), v35, a5, v11, v13, 0, 0, 1);
          GreSetLayout(v15, 0xFFFFFFFFLL, 0LL);
          if ( v41 )
          {
            GreGetDCPoint(a1, 4LL, &v42);
            GreSetViewportOrg(a1, a4 + v42, a5 + HIDWORD(v42));
            v36 = xxxRealDrawMenuItem(a1, 1, v40);
            v37 = v36 & Bitmap;
            GreSetViewportOrg(a1, v42, SHIDWORD(v42));
          }
          else
          {
            return (unsigned int)Bitmap;
          }
          return v37;
        }
        v33 = v43;
LABEL_58:
        v43 = v33;
        v35 = a4;
        v34 = v33;
        goto LABEL_59;
      }
      BltColor(a1, *(_QWORD *)(gpsi + 4856LL), *(HDC *)(gpDispInfo + 72LL), a4 + 1, a5 + 1, v11, v13, 0, 0, 1);
    }
    v33 = *(_QWORD *)(gpsi + 4824LL);
    goto LABEL_58;
  }
  if ( v31 )
    xxxRealDrawMenuItem(v15, 1, v40);
  GreSetViewportOrg(v15, v42, SHIDWORD(v42));
  return 1LL;
}
