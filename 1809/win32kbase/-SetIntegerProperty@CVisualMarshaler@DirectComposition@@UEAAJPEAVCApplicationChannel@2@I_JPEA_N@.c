/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A240
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0083B70 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C017DE10 (-SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A550 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  unsigned __int8 v7; // r8
  bool v9; // dl
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  bool v15; // dl
  char v16; // al
  char v17; // cl
  int v18; // ecx
  char v19; // al
  char v20; // dl
  char v21; // r8
  char v22; // cl
  char v23; // al
  char v24; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1B )
  {
    switch ( a3 )
    {
      case '%':
        v10 = *((_BYTE *)this + 272);
        v11 = v10 & 0x10;
        if ( (_DWORD)a4 )
        {
          if ( v11 )
            return v5;
          v12 = v10 | 0x10;
        }
        else
        {
          if ( !v11 )
            return v5;
          v12 = v10 & 0xEF;
        }
        break;
      case '&':
        v7 = *((_BYTE *)this + 272);
        if ( ((v7 >> 6) & 1) == (a4 != 0) )
          return v5;
        *((_DWORD *)this + 4) |= 0x400000u;
        *((_BYTE *)this + 272) = v7 & 0xBF | (a4 != 0 ? 0x40 : 0);
LABEL_28:
        *a5 = 1;
        return v5;
      case ')':
        v23 = *((_BYTE *)this + 272);
        v24 = v23 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v24 )
            return v5;
          v12 = v23 | 0x20;
        }
        else
        {
          if ( !v24 )
            return v5;
          v12 = v23 & 0xDF;
        }
        break;
      case '*':
        if ( (unsigned int)a4 <= 2 )
        {
          if ( *((_DWORD *)this + 60) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x4000000u;
          *((_DWORD *)this + 60) = a4;
          goto LABEL_28;
        }
        return (unsigned int)-1073741811;
      case '+':
        v22 = *((_BYTE *)this + 272);
        if ( (v22 & 1) == ((_DWORD)a4 != 0) )
          return v5;
        *((_DWORD *)this + 4) |= 0x8000000u;
        *((_BYTE *)this + 272) = ((_DWORD)a4 != 0) | v22 & 0xFE;
        goto LABEL_28;
      case ',':
        if ( *((_DWORD *)this + 61) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000000u;
        *((_DWORD *)this + 61) = a4;
        goto LABEL_28;
      case '-':
        v21 = *((_BYTE *)this + 273);
        if ( ((_DWORD)a4 != 0) == (v21 & 1) )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000u;
        *((_BYTE *)this + 273) = v21 & 0xFE | ((_DWORD)a4 != 0);
        goto LABEL_28;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    goto LABEL_26;
  }
  if ( a3 == 27 )
  {
    v13 = *((_BYTE *)this + 272);
    v14 = v13 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v14 )
        return v5;
      v12 = v13 | 8;
    }
    else
    {
      if ( !v14 )
        return v5;
      v12 = v13 & 0xF7;
    }
LABEL_26:
    *((_DWORD *)this + 4) |= 0x10000u;
LABEL_27:
    *((_BYTE *)this + 272) = v12;
    goto LABEL_28;
  }
  if ( a3 > 0x11 )
  {
    switch ( a3 )
    {
      case 0x12u:
        v16 = *((_BYTE *)this + 272);
        v17 = v16 & 2;
        if ( (_DWORD)a4 )
        {
          if ( v17 )
            return v5;
          v12 = v16 | 2;
        }
        else
        {
          if ( !v17 )
            return v5;
          v12 = v16 & 0xFD;
        }
        break;
      case 0x13u:
        v19 = *((_BYTE *)this + 272);
        v20 = v19 & 4;
        if ( (_DWORD)a4 )
        {
          if ( v20 )
            return v5;
          v12 = v19 | 4;
        }
        else
        {
          if ( !v20 )
            return v5;
          v12 = v19 & 0xFB;
        }
        break;
      case 0x14u:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 58) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 58) = a4;
          goto LABEL_23;
        }
        goto LABEL_13;
      case 0x15u:
        if ( (unsigned __int64)(a4 + 1) > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 59) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 59) = a4;
          v15 = 1;
          goto LABEL_56;
        }
        goto LABEL_75;
      case 0x16u:
        if ( (unsigned __int64)(a4 + 1) > 2 && a4 != 3 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 59) == (_DWORD)a4 )
          goto LABEL_13;
        *((_DWORD *)this + 59) = a4;
        goto LABEL_23;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x40000u;
    goto LABEL_27;
  }
  switch ( a3 )
  {
    case 0x11u:
      if ( *((_DWORD *)this + 67) == a4 )
        return v5;
      *((_DWORD *)this + 67) = a4;
      goto LABEL_77;
    case 7u:
      if ( (unsigned __int64)(a4 + 1) > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 55) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 55) = a4;
        goto LABEL_23;
      }
      goto LABEL_13;
    case 8u:
      if ( (unsigned __int64)(a4 + 1) > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 54) == (_DWORD)a4 )
        goto LABEL_13;
      *((_DWORD *)this + 54) = a4;
LABEL_23:
      v9 = 1;
LABEL_14:
      *a5 = v9;
      if ( v9 )
        *((_DWORD *)this + 4) |= 0x8000u;
      return v5;
  }
  if ( a3 != 9 )
  {
    if ( a3 != 14 )
    {
      if ( a3 != 16 )
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
      if ( (unsigned __int64)a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 66) == a4 )
        return v5;
      *((_DWORD *)this + 66) = a4;
LABEL_77:
      *((_DWORD *)this + 4) |= 0x20000u;
      goto LABEL_28;
    }
    if ( (unsigned __int64)(a4 + 1) > 2 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 57) != (_DWORD)a4 )
    {
      *((_DWORD *)this + 57) = a4;
      goto LABEL_23;
    }
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  if ( a4 < -1 || a4 > 2 )
    return (unsigned int)-1073741811;
  v15 = 1;
  if ( (_DWORD)a4 == -1 )
  {
    v18 = 5;
  }
  else if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
      v18 = 2;
    else
      v18 = 4;
  }
  else
  {
    v18 = 0;
  }
  if ( *((_DWORD *)this + 56) != v18 )
  {
    *((_DWORD *)this + 56) = v18;
    goto LABEL_56;
  }
LABEL_75:
  v15 = 0;
LABEL_56:
  *a5 = v15;
  if ( v15 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}
