/*
 * XREFs of ?do_in@?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@MEBAHAEAU_Mbstatet@@PEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x1801747B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8_utf16<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // r11
  unsigned int v14; // edx
  int v15; // r9d
  int v16; // r11d
  int v17; // eax
  unsigned __int8 *v18; // rcx
  int v19; // esi
  unsigned int v20; // r9d
  int v21; // edx

  v8 = 0;
  *a5 = a3;
  *a8 = a6;
  v11 = *a5;
  if ( *a5 != a4 )
  {
    v12 = *a5;
    do
    {
      v13 = v11;
      v11 = v12;
      if ( *a8 == a7 )
        break;
      v14 = *v12;
      if ( *a2 > 1u )
      {
        if ( v14 - 128 > 0x3F )
          return 2LL;
        *a5 = v12 + 1;
        *(_WORD *)*a8 = *a2 | v14 & 0x3F;
        *a8 += 2LL;
        *a2 = 1;
        goto LABEL_38;
      }
      if ( v14 >= 0x80 )
      {
        if ( v14 < 0xC0 )
        {
          *a5 = v12 + 1;
          return 2LL;
        }
        if ( v14 >= 0xE0 )
        {
          if ( v14 >= 0xF0 )
          {
            if ( v14 >= 0xF8 )
            {
              v17 = 3;
              v15 = 4;
              if ( v14 >= 0xFC )
                v15 = 5;
            }
            else
            {
              v15 = 3;
              v17 = 7;
            }
            a3 = v13;
            v14 &= v17;
            v16 = 1;
            goto LABEL_20;
          }
          v14 &= 0xFu;
          v15 = 2;
        }
        else
        {
          v14 &= 0x1Fu;
          v15 = 1;
        }
      }
      else
      {
        v15 = 0;
      }
      a3 = v13;
      v16 = 0;
LABEL_20:
      if ( v15 )
      {
        if ( a4 - a3 < v15 - v16 + 1 )
          goto LABEL_41;
        v18 = a3 + 1;
        *a5 = a3 + 1;
        if ( v16 < (unsigned int)v15 )
        {
          do
          {
            v19 = *v18;
            if ( (unsigned int)(v19 - 128) > 0x3F )
              return 2LL;
            --v15;
            v14 = (v14 << 6) | v19 & 0x3F;
            *a5 = ++v18;
          }
          while ( v16 < v15 );
        }
      }
      else
      {
        v18 = a3 + 1;
        *a5 = a3 + 1;
      }
      v20 = v14 << 6;
      if ( !v16 )
        v20 = v14;
      if ( v20 > 0x10FFFF )
        return 2LL;
      if ( v20 <= 0xFFFF )
      {
        if ( v16 )
        {
          if ( v18 == a4 )
          {
            *a5 = a3;
LABEL_41:
            v11 = a3;
            break;
          }
          v21 = *v18;
          *a5 = v18 + 1;
          if ( (unsigned int)(v21 - 128) > 0x3F )
            return 2LL;
          LOWORD(v20) = v21 & 0x3F | v20;
        }
        if ( !*a2 )
          *a2 = 1;
        *(_WORD *)*a8 = v20;
        *a8 += 2LL;
      }
      else
      {
        *(_WORD *)*a8 = ((v20 >> 10) - 64) | 0xD800;
        *a8 += 2LL;
        *a2 = v20 & 0x3FF | 0xDC00;
      }
LABEL_38:
      v11 = *a5;
      v12 = *a5;
    }
    while ( *a5 != a4 );
  }
  LOBYTE(v8) = a3 == v11;
  return v8;
}
