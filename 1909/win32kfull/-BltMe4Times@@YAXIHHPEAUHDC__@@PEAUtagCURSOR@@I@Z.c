/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243678
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     BltIcon @ 0x1C0022AC0 (BltIcon.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 */

void __fastcall BltMe4Times(unsigned int a1, __int64 a2, __int64 a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v7; // edi
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  HDC v11; // r13
  HBRUSH v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v18; // r12d
  LONG v19; // edi
  LONG v20; // ebx
  LONG v21; // ecx
  int v22; // edi
  unsigned int v23; // esi
  __int64 v24; // rbx
  int v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  RECT v27; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+8h]
  int v29; // [rsp+C0h] [rbp+18h]
  unsigned int v31; // [rsp+D8h] [rbp+30h]

  v29 = a3;
  v28 = a1;
  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = 1;
  v11 = (HDC)PrepareHDCBITSBitmap(0LL, a2, a3);
  if ( v11 )
  {
    v31 = a6 & 0x10;
    if ( v31 )
      v12 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v12 = *(HBRUSH *)(gpsi + 4712LL);
    v13 = v8 - v7;
    v14 = 2LL;
    v26 = 2LL;
    v15 = (unsigned int)(v13 >> 31);
    LODWORD(v15) = v13 % 2;
    v25 = v13 / 2;
    do
    {
      DpiForSystem = GetDpiForSystem(v14, v15, v10);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem);
      v18 = 8913094;
      v19 = *OemBitmapInfoForDpi;
      v20 = OemBitmapInfoForDpi[1];
      v21 = v19 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v27.right = v21;
      v27.left = v19;
      v27.top = v20;
      v27.bottom = v20 + (_DWORD)OemBitmapInfoForDpi;
      FillRect(v11, &v27, v12);
      v22 = v25 + v19;
      v23 = v25 + v20;
      v24 = 2LL;
      do
      {
        BltIcon(v11, v22 + 1, v23, v29, v29, a4, (__int64)a5, (v9 ^ 1) + 1, v18);
        v9 ^= 1u;
        v18 = 6684742;
        --v24;
      }
      while ( v24 );
      v6 = ++v28;
      v14 = gpsi;
      if ( v31 )
        v12 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v12 = *(HBRUSH *)(gpsi + 4720LL);
      --v26;
    }
    while ( v26 );
  }
}
