/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     BltColor @ 0x1C023020C (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, int **a2)
{
  int v2; // edi
  unsigned int v5; // r15d
  char v6; // bp
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  int *v9; // r8
  __int16 *v10; // rbx
  int v11; // ecx
  int v12; // eax
  int v13; // r13d
  HSURF v14; // r14
  __int64 v15; // rbp
  bool v16; // zf
  char v17; // al
  int v18; // eax
  unsigned int v19; // eax
  char *v20; // rax
  HDC v21; // r10
  int v23; // [rsp+60h] [rbp-C8h]
  int v24; // [rsp+64h] [rbp-C4h]
  int v25; // [rsp+68h] [rbp-C0h]
  char v26[46]; // [rsp+70h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+9Eh] [rbp-8Ah]
  int v28; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  DpiForSystem = GetDpiForSystem();
  OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
  v9 = *a2;
  v10 = (__int16 *)OemBitmapInfoForDpi;
  v11 = (*a2)[19] - *((__int16 *)OemBitmapInfoForDpi + 3);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = v11;
  v13 = v12 / 2;
  if ( (v9[1] & 8) != 0 )
    v14 = (HSURF)*((_QWORD *)v9 + 3);
  else
    v14 = (HSURF)*((_QWORD *)v9 + 4);
  if ( v14 )
  {
    v15 = GreSelectBitmap(ghdcMem2, v14);
    if ( v15 )
    {
      v24 = GreSetTextColor(a1, 0);
      v25 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**a2 & 0x2000) != 0 )
        v2 = (*a2)[18] - v10[2];
      if ( (unsigned int)GreExtGetObjectW(v14, 104LL, v26) == 104 && v27 == 32 && !v28 )
      {
        LOBYTE(v23) = 0;
        HIWORD(v23) = 511;
        v16 = (GreGetLayout(a1) & 1) == 0;
        v17 = 0;
        if ( !v16 )
          v17 = 0x80;
        BYTE1(v23) = v17;
        NtGdiAlphaBlend((XLATEOBJ *)a1, v2, v13, v10[3], v10[3], ghdcMem2, 0, 0, v10[2], v10[3], v23);
      }
      else
      {
        NtGdiBitBltInternal(a1, v2, v13, v10[2], v10[3], ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v24);
      GreSetBkColor(a1, v25);
      GreSelectBitmap(ghdcMem2, v15);
    }
  }
  else if ( (v9[1] & 8) != 0 )
  {
    v18 = *v9;
    if ( (*v9 & 0x200) != 0 )
    {
      v19 = GetDpiForSystem();
      v20 = GetOemBitmapInfoForDpi(64LL, v19);
      v9 = *a2;
      v10 = (__int16 *)v20;
      v18 = **a2;
    }
    if ( (v18 & 0x2000) != 0 )
      v2 = v9[18] - v10[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 72LL) )
      v6 = 3;
    v21 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v21 )
      BltColor(a1, 0LL, v21, v2, v13, v10[2], v10[3], *v10, v10[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
