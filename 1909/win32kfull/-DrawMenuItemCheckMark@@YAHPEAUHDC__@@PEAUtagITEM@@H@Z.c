/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     BltColor @ 0x1C02486DC (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2, __int64 a3)
{
  int v3; // edi
  unsigned int v6; // r15d
  char v7; // bp
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v10; // r8
  __int16 *v11; // rbx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rcx
  HBRUSH v17; // r14
  __int64 v18; // rbp
  bool v19; // zf
  char v20; // al
  int v21; // eax
  unsigned int v22; // eax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  HDC v26; // r10
  int v28; // [rsp+60h] [rbp-C8h]
  int v29; // [rsp+64h] [rbp-C4h]
  int v30; // [rsp+68h] [rbp-C0h]
  _DWORD v31[28]; // [rsp+70h] [rbp-B8h] BYREF

  v3 = 2;
  v6 = 1;
  v7 = 1;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2, a3);
  OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
  v10 = *(_QWORD *)a2;
  v11 = (__int16 *)OemBitmapInfoForDpi;
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *((__int16 *)OemBitmapInfoForDpi + 3);
  v13 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  v14 = (unsigned int)(v13 >> 31);
  LODWORD(v14) = v13 % 2;
  v15 = v13 / 2;
  v16 = *(_DWORD *)(v10 + 4) & 8;
  if ( (*(_DWORD *)(v10 + 4) & 8) != 0 )
    v17 = *(HBRUSH *)(v10 + 24);
  else
    v17 = *(HBRUSH *)(v10 + 32);
  if ( v17 )
  {
    v18 = GreSelectBitmap(ghdcMem2, v17);
    if ( v18 )
    {
      memset(v31, 0, 0x68uLL);
      v29 = GreSetTextColor(a1, 0);
      v30 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v3 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v11[2];
      if ( (unsigned int)GreExtGetObjectW(v17, 104LL, (char *)v31) == 104 && HIWORD(v31[11]) == 32 && !v31[12] )
      {
        LOBYTE(v28) = 0;
        HIWORD(v28) = 511;
        v19 = (GreGetLayout(a1) & 1) == 0;
        v20 = 0;
        if ( !v19 )
          v20 = 0x80;
        BYTE1(v28) = v20;
        NtGdiAlphaBlend(a1, v3, v15, v11[3], v11[3], ghdcMem2, 0, 0, v11[2], v11[3], v28);
      }
      else
      {
        NtGdiBitBltInternal(a1, v3, v15, v11[2], v11[3], ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v29);
      GreSetBkColor(a1, v30);
      GreSelectBitmap(ghdcMem2, v18);
    }
  }
  else if ( (_DWORD)v16 )
  {
    v21 = *(_DWORD *)v10;
    if ( (*(_DWORD *)v10 & 0x200) != 0 )
    {
      v22 = GetDpiForSystem(v16, v14, v10);
      v23 = GetOemBitmapInfoForDpi(64LL, v22);
      v10 = *(_QWORD *)a2;
      v11 = (__int16 *)v23;
      v21 = **(_DWORD **)a2;
    }
    if ( (v21 & 0x2000) != 0 )
      v3 = *(_DWORD *)(v10 + 72) - v11[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 72LL) )
      v7 = 3;
    v26 = (HDC)PrepareHDCBITSBitmap(0LL, v24, v25);
    if ( v26 )
      BltColor(a1, 0LL, v26, v3, v15, v11[2], v11[3], *v11, v11[1], v7);
  }
  else
  {
    return 0;
  }
  return v6;
}
