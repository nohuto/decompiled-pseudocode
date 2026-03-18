/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // r15d
  char v8; // bp
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v11; // r8
  __int16 *v12; // rbx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r13d
  __int64 v17; // rcx
  HBRUSH v18; // r14
  bool v19; // zf
  char v20; // al
  int v21; // eax
  unsigned int v22; // eax
  char *v23; // rax
  __int64 v24; // rdx
  HDC v25; // r10
  int v27; // [rsp+60h] [rbp-C8h]
  int v28; // [rsp+64h] [rbp-C4h]
  int v29; // [rsp+68h] [rbp-C0h]
  _DWORD v30[28]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = 2;
  v7 = 1;
  v8 = 1;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2, a3, a4);
  OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63, DpiForSystem);
  v11 = *(_QWORD *)a2;
  v12 = (__int16 *)OemBitmapInfoForDpi;
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *((__int16 *)OemBitmapInfoForDpi + 3);
  v14 = 0;
  if ( v13 >= 0 )
    v14 = v13;
  v15 = (unsigned int)(v14 >> 31);
  LODWORD(v15) = v14 % 2;
  v16 = v14 / 2;
  v17 = *(_DWORD *)(v11 + 4) & 8;
  if ( (*(_DWORD *)(v11 + 4) & 8) != 0 )
    v18 = *(HBRUSH *)(v11 + 24);
  else
    v18 = *(HBRUSH *)(v11 + 32);
  if ( v18 )
  {
    if ( GreSelectBitmap(ghdcMem2) )
    {
      memset(v30, 0, 0x68uLL);
      v28 = GreSetTextColor(a1, 0);
      v29 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v4 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v12[2];
      if ( (unsigned int)GreExtGetObjectW(v18, 104LL, (char *)v30) == 104 && HIWORD(v30[11]) == 32 && !v30[12] )
      {
        LOBYTE(v27) = 0;
        HIWORD(v27) = 511;
        v19 = (GreGetLayout(a1) & 1) == 0;
        v20 = 0;
        if ( !v19 )
          v20 = 0x80;
        BYTE1(v27) = v20;
        NtGdiAlphaBlend(a1, v4, v16, v12[3], v12[3], ghdcMem2, 0, 0, v12[2], v12[3], v27);
      }
      else
      {
        NtGdiBitBltInternal(a1, v4, v16, v12[2], v12[3], ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v28);
      GreSetBkColor(a1, v29);
      GreSelectBitmap(ghdcMem2);
    }
  }
  else if ( (_DWORD)v17 )
  {
    v21 = *(_DWORD *)v11;
    if ( (*(_DWORD *)v11 & 0x200) != 0 )
    {
      v22 = GetDpiForSystem(v17, v15, v11, 0LL);
      v23 = GetOemBitmapInfoForDpi(64, v22);
      v11 = *(_QWORD *)a2;
      v12 = (__int16 *)v23;
      v21 = **(_DWORD **)a2;
    }
    if ( (v21 & 0x2000) != 0 )
      v4 = *(_DWORD *)(v11 + 72) - v12[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 72LL) )
      v8 = 3;
    v25 = (HDC)PrepareHDCBITSBitmap(0LL, v24);
    if ( v25 )
      BltColor(a1, 0LL, v25, v4, v16, v12[2], v12[3], *v12, v12[1], v8);
  }
  else
  {
    return 0;
  }
  return v7;
}
