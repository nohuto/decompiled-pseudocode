/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00824D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // dl
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  char v14; // cl
  char v15; // dl
  char v16; // cl
  char v18; // cl
  char v19; // cl
  char v20; // cl
  char v21; // dl
  char v22; // cl
  char v23; // cl
  char v24; // cl

  v5 = 0;
  v7 = a4 != 0;
  v8 = a3 - 5;
  if ( !v8 )
  {
    v24 = *((_BYTE *)this + 316);
    if ( ((v24 & 2) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 316) = v24 & 0xFD | (2 * v7);
    *a5 = 1;
    goto LABEL_13;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v14 = *((_BYTE *)this + 316);
    if ( ((v14 & 4) != 0) == v7 )
      return v5;
    v15 = 4 * v7;
    v16 = v14 & 0xFB;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = *((_BYTE *)this + 316);
    if ( ((v18 & 8) != 0) == v7 )
      return v5;
    v15 = 8 * v7;
    v16 = v18 & 0xF7;
LABEL_12:
    *((_BYTE *)this + 316) = v16 | v15;
    *a5 = 1;
LABEL_13:
    *((_DWORD *)this + 4) |= 0x200u;
    return v5;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v23 = *((_BYTE *)this + 316);
    if ( ((v23 & 0x10) != 0) == v7 )
      return v5;
    v21 = 16 * v7;
    v22 = v23 & 0xEF;
    goto LABEL_24;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v20 = *((_BYTE *)this + 316);
    if ( ((v20 & 0x20) != 0) == v7 )
      return v5;
    v21 = 32 * v7;
    v22 = v20 & 0xDF;
LABEL_24:
    *((_BYTE *)this + 316) = v22 | v21;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x800u;
    return v5;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 2 )
    {
      if ( *((_DWORD *)this + 78) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 78) = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x200u;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v19 = *((_BYTE *)this + 316);
    if ( ((v19 & 0x40) != 0) != v7 )
    {
      *((_BYTE *)this + 316) = v19 & 0xBF | (v7 << 6);
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
  }
  return v5;
}
