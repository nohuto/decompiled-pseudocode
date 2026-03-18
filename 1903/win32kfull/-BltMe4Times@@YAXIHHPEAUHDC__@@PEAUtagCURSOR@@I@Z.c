/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     BltIcon @ 0x1C002D3A4 (BltIcon.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

void __fastcall BltMe4Times(int a1, __int64 a2, unsigned int a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  int v6; // r15d
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // r9
  HDC v12; // r13
  HBRUSH v13; // rsi
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v19; // r12d
  LONG v20; // edi
  LONG v21; // ebx
  LONG v22; // ecx
  int v23; // edi
  unsigned int v24; // esi
  __int64 v25; // rbx
  int v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  RECT v28; // [rsp+60h] [rbp-48h] BYREF
  int v29; // [rsp+B0h] [rbp+8h]
  unsigned int v32; // [rsp+D8h] [rbp+30h]

  v29 = a1;
  v6 = a1;
  v8 = a2;
  v9 = 1;
  v12 = (HDC)PrepareHDCBITSBitmap(0LL, a2);
  if ( v12 )
  {
    v32 = a6 & 0x10;
    if ( v32 )
      v13 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v13 = *(HBRUSH *)(gpsi + 4712LL);
    v14 = v8 - a3;
    v15 = 2LL;
    v27 = 2LL;
    v16 = (unsigned int)(v14 >> 31);
    LODWORD(v16) = v14 % 2;
    v26 = v14 / 2;
    do
    {
      DpiForSystem = GetDpiForSystem(v15, v16, v10, v11);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem);
      v19 = 8913094;
      v20 = *OemBitmapInfoForDpi;
      v21 = OemBitmapInfoForDpi[1];
      v22 = v20 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v28.right = v22;
      v28.left = v20;
      v28.top = v21;
      v28.bottom = v21 + (_DWORD)OemBitmapInfoForDpi;
      FillRect(v12, &v28, v13);
      v23 = v26 + v20;
      v24 = v26 + v21;
      v25 = 2LL;
      do
      {
        BltIcon(v12, v23 + 1, v24, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v19);
        v9 ^= 1u;
        v19 = 6684742;
        --v25;
      }
      while ( v25 );
      v6 = ++v29;
      v15 = gpsi;
      if ( v32 )
        v13 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v13 = *(HBRUSH *)(gpsi + 4720LL);
      --v27;
    }
    while ( v27 );
  }
}
