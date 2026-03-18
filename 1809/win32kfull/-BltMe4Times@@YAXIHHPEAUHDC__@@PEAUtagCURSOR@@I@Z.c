/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     BltIcon @ 0x1C006DB60 (BltIcon.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 */

void __fastcall BltMe4Times(unsigned int a1, int a2, int a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v9; // r14d
  XLATEOBJ *v10; // r13
  HBRUSH v11; // rsi
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v14; // r12d
  LONG v15; // edi
  LONG v16; // ebx
  LONG v17; // ecx
  int v18; // edi
  int v19; // esi
  __int64 v20; // rbx
  int v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  RECT v23; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+8h]
  unsigned int v27; // [rsp+D8h] [rbp+30h]

  v24 = a1;
  v6 = a1;
  v9 = 1;
  v10 = (XLATEOBJ *)PrepareHDCBITSBitmap(0LL);
  if ( v10 )
  {
    v27 = a6 & 0x10;
    if ( v27 )
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v11 = *(HBRUSH *)(gpsi + 4712LL);
    v22 = 2LL;
    v21 = (a2 - a3) / 2;
    do
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem);
      v14 = 8913094;
      v15 = *OemBitmapInfoForDpi;
      v16 = OemBitmapInfoForDpi[1];
      v17 = v15 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v23.right = v17;
      v23.left = v15;
      v23.top = v16;
      v23.bottom = v16 + (_DWORD)OemBitmapInfoForDpi;
      FillRect((HDC)v10, &v23, v11);
      v18 = v21 + v15;
      v19 = v21 + v16;
      v20 = 2LL;
      do
      {
        BltIcon(v10, v18 + 1, v19, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v14);
        v9 ^= 1u;
        v14 = 6684742;
        --v20;
      }
      while ( v20 );
      v6 = ++v24;
      if ( v27 )
        v11 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v11 = *(HBRUSH *)(gpsi + 4720LL);
      --v22;
    }
    while ( v22 );
  }
}
