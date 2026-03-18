/*
 * XREFs of RecolorDeskPattern @ 0x1C01413C0
 * Callers:
 *     SetDesktopPattern @ 0x1C0108934 (SetDesktopPattern.c)
 * Callees:
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreMarkDeletableBrush @ 0x1C0108AA4 (GreMarkDeletableBrush.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 RecolorDeskPattern()
{
  unsigned int v0; // ebx
  int v2; // ecx
  char v3; // al
  int v4; // ecx
  char v5; // al
  HDC v6; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v8; // rsi
  __int64 PatternBrush; // rdi
  HBRUSH v10; // rcx
  unsigned int v11[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v12; // [rsp+84h] [rbp+13h]
  __int64 v13; // [rsp+8Ch] [rbp+1Bh]
  int v14; // [rsp+94h] [rbp+23h]
  int v15; // [rsp+98h] [rbp+27h]
  int v16; // [rsp+9Ch] [rbp+2Bh]
  char v17; // [rsp+A0h] [rbp+2Fh]
  char v18; // [rsp+A1h] [rbp+30h]
  char v19; // [rsp+A2h] [rbp+31h]
  char v20; // [rsp+A4h] [rbp+33h]
  char v21; // [rsp+A5h] [rbp+34h]
  char v22; // [rsp+A6h] [rbp+35h]

  v0 = 0;
  if ( g_hbmDesktopPattern )
  {
    GreSelectBitmap(ghdcMem);
    if ( *(_DWORD *)(gpsi + 2220LL) )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 8u, 8u, 0, 0LL, 0LL);
    }
    else
    {
      v2 = *(_DWORD *)(gpsi + 4572LL);
      v15 = 2;
      v16 = 2;
      v17 = BYTE2(v2);
      v3 = *(_BYTE *)(gpsi + 4572LL);
      v18 = BYTE1(v2);
      v4 = *(_DWORD *)(gpsi + 4600LL);
      v19 = v3;
      v20 = BYTE2(v4);
      v5 = *(_BYTE *)(gpsi + 4600LL);
      v21 = BYTE1(v4);
      v22 = v5;
      v11[0] = 40;
      v11[1] = 8;
      v11[2] = 8;
      v12 = 65537LL;
      v6 = *(HDC *)(gpDispInfo + 64LL);
      v13 = 0LL;
      v14 = 0;
      CompatibleBitmapInternal = GreCreateDIBitmapReal(v6, gpsi, 0LL, v11, 0, 0x30u, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    v8 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      GreSelectBitmap(ghdcMem2);
      GreSetTextColor(ghdcMem2, *(_DWORD *)(gpsi + 4572LL));
      GreSetBkColor(ghdcMem2, *(_DWORD *)(gpsi + 4600LL));
      NtGdiBitBltInternal(ghdcMem2, 0, 0, 8, 8, ghdcMem, 0, 0, 13369376, 0, 0);
      PatternBrush = GreCreatePatternBrush(v8);
      if ( PatternBrush )
      {
        v10 = *(HBRUSH *)(gpsi + 4704LL);
        if ( v10 )
        {
          GreMarkDeletableBrush(v10);
          GreDeleteObject(*(_QWORD *)(gpsi + 4704LL));
        }
        GreMarkUndeletableBrush(PatternBrush);
        GreSetBrushOwner(PatternBrush, 0LL);
        v0 = 1;
        *(_QWORD *)(gpsi + 4704LL) = PatternBrush;
      }
      GreSelectBitmap(ghdcMem2);
      GreDeleteObject(v8);
    }
    GreSelectBitmap(ghdcMem);
  }
  return v0;
}
