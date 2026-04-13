/*
 * XREFs of ?do_in@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x1800487A0
 * Callers:
 *     ?do_length@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z @ 0x1800485A0 (-do_length@-$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int v8; // ebx
  __int64 v10; // rax
  unsigned __int8 *v12; // r10
  unsigned __int8 v13; // al
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned __int8 *v16; // r10

  v8 = 0;
  v10 = a6;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  if ( *a5 != a4 )
  {
    while ( 1 )
    {
      if ( v10 == a7 )
        goto LABEL_21;
      v13 = *v12;
      if ( *v12 >= 0x80u )
        break;
      v14 = v13;
      *a5 = v12 + 1;
LABEL_17:
      if ( !*a2 )
        *a2 = 1;
      if ( v14 > 0x10FFFF )
        return 2LL;
      *(_WORD *)*a8 = v14;
      *a8 += 2LL;
      v12 = *a5;
      v10 = *a8;
      if ( *a5 == a4 )
        goto LABEL_21;
    }
    if ( v13 < 0xC0u )
    {
      *a5 = v12 + 1;
      return 2LL;
    }
    if ( v13 >= 0xE0u )
    {
      if ( v13 >= 0xF0u )
      {
        if ( v13 >= 0xF8u )
        {
          v14 = v13 & 3;
          v15 = 5 - (v13 < 0xFCu);
        }
        else
        {
          v14 = v13 & 7;
          v15 = 3;
        }
      }
      else
      {
        v14 = v13 & 0xF;
        v15 = 2;
      }
    }
    else
    {
      v14 = v13 & 0x1F;
      v15 = 1;
    }
    if ( a4 - v12 >= (unsigned int)(v15 + 1) )
    {
      v16 = v12 + 1;
      *a5 = v16;
      while ( (unsigned __int8)(*v16 + 0x80) <= 0x3Fu )
      {
        --v15;
        v14 = (v14 << 6) | *v16++ & 0x3F;
        *a5 = v16;
        if ( v15 <= 0 )
          goto LABEL_17;
      }
      return 2LL;
    }
  }
LABEL_21:
  LOBYTE(v8) = a3 == v12;
  return v8;
}
