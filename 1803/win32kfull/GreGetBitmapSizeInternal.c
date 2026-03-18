/*
 * XREFs of GreGetBitmapSizeInternal @ 0x1C00A5C80
 * Callers:
 *     bCaptureBitmapInfo @ 0x1C00169D0 (bCaptureBitmapInfo.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00A0450 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00A57D0 (NtGdiGetDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01D2C54 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  int v5; // r9d
  int v6; // r8d
  int v7; // ebx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v3 = a3;
  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 != 12 )
  {
    if ( a3 < 0x28 )
      return 0LL;
    v6 = *(_DWORD *)(a1 + 16);
    v7 = 4;
    v8 = *(_DWORD *)(a1 + 32);
    v9 = *(unsigned __int16 *)(a1 + 14);
    switch ( v6 )
    {
      case 3:
        v12 = 0;
        if ( a2 != 1 )
          v12 = a2;
        a2 = v12;
        if ( v9 == 32 || v9 == 16 )
        {
          v8 = 3;
          if ( v3 > 0x28 )
            v8 = 0;
          LODWORD(result) = v8;
          goto LABEL_12;
        }
        return 0LL;
      case 0:
        goto LABEL_6;
      case 10:
        v13 = v9 - 1;
        if ( !v13 )
          goto LABEL_33;
        v14 = v13 - 3;
        if ( !v14 )
          goto LABEL_40;
        v15 = v14 - 4;
        if ( !v15 )
          goto LABEL_38;
        if ( v15 == 24 )
          goto LABEL_53;
        break;
      default:
        if ( v6 != 2 )
        {
          if ( v6 == 1 )
            goto LABEL_37;
          if ( v6 != 12 )
          {
            if ( v6 == 11 )
            {
LABEL_37:
              if ( v9 == 8 )
                goto LABEL_38;
              return 0LL;
            }
            if ( (unsigned int)(v6 - 4) > 1 )
              return 0LL;
LABEL_53:
            LODWORD(result) = 0;
            goto LABEL_12;
          }
        }
        if ( v9 == 4 )
          goto LABEL_40;
        break;
    }
    return 0LL;
  }
  v9 = *(unsigned __int16 *)(a1 + 10);
  v7 = 3;
  v8 = 0;
  v3 = 12;
LABEL_6:
  switch ( v9 )
  {
    case 1:
LABEL_33:
      LODWORD(result) = 2;
LABEL_12:
      if ( v8 )
      {
        if ( v8 > (unsigned int)result )
          v8 = result;
      }
      else
      {
        v8 = result;
      }
      if ( a2 != 1 )
      {
        if ( a2 == 2 )
          v7 = 0;
        v5 = v7;
      }
      result = (v5 * v8 + v3 + 3) & 0xFFFFFFFC;
      if ( (unsigned int)result < v3 )
        return 0LL;
      return result;
    case 4:
LABEL_40:
      LODWORD(result) = 16;
      goto LABEL_12;
    case 8:
LABEL_38:
      LODWORD(result) = 256;
      goto LABEL_12;
  }
  v10 = 0;
  if ( a2 != 1 )
    v10 = a2;
  a2 = v10;
  result = 0LL;
  if ( v9 == 32 || v9 == 24 || v9 == 16 )
    goto LABEL_12;
  return result;
}
