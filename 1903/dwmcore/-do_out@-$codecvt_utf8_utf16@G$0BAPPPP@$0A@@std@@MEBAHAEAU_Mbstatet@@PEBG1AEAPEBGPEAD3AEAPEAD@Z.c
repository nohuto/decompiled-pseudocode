/*
 * XREFs of ?do_out@?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@MEBAHAEAU_Mbstatet@@PEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x180176240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8_utf16<unsigned short,1114111,0>::do_out(
        __int64 a1,
        _WORD *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // r10d
  unsigned __int16 *v12; // rax
  char v13; // si
  unsigned __int16 v14; // cx
  unsigned int v15; // r8d
  char v16; // dl
  unsigned int v17; // r11d
  int v18; // r9d
  int v19; // ecx
  unsigned int v20; // r8d

  v8 = 0;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  if ( *a5 != a4 )
  {
    while ( 1 )
    {
      if ( *a8 == a7 )
        goto LABEL_27;
      v13 = 0;
      v14 = *v12;
      if ( *a2 <= 1u )
      {
        v15 = v14;
        if ( (unsigned __int16)(v14 + 10240) <= 0x3FFu )
        {
          v13 = 1;
          v15 = (v14 << 10) - 56557568;
        }
      }
      else
      {
        if ( (unsigned __int16)(v14 + 9216) > 0x3FFu )
          return 2LL;
        v15 = (v14 - 56320) | ((unsigned __int16)*a2 << 10);
      }
      if ( v15 < 0x80 )
        break;
      if ( v15 < 0x800 )
      {
        v17 = 1;
        v16 = (v15 >> 6) | 0xC0;
        goto LABEL_14;
      }
      if ( v15 < 0x10000 )
      {
        v17 = 2;
        v16 = (v15 >> 12) | 0xE0;
        goto LABEL_14;
      }
      v16 = (v15 >> 18) | 0xF0;
      v17 = 3;
      v18 = v13 != 0 ? 1 : 3;
LABEL_16:
      if ( a7 - *a8 >= (unsigned int)v18 )
      {
        ++*a5;
        if ( v13 || v17 < 3 )
        {
          *(_BYTE *)(*a8)++ = v16;
          --v18;
        }
        if ( v18 > 0 )
        {
          v19 = 6 * v17;
          do
          {
            v19 -= 6;
            --v18;
            *(_BYTE *)(*a8)++ = (v15 >> v19) & 0x3F | 0x80;
          }
          while ( v18 > 0 );
        }
        if ( v13 )
          v20 = v15 >> 10;
        else
          LOWORD(v20) = 1;
        *a2 = v20;
        v12 = *a5;
        if ( *a5 != a4 )
          continue;
      }
      goto LABEL_27;
    }
    v16 = v15;
    v17 = 0;
LABEL_14:
    v18 = v17 + 1;
    goto LABEL_16;
  }
LABEL_27:
  LOBYTE(v8) = a3 == *a5;
  return v8;
}
