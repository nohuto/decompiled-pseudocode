/*
 * XREFs of ?CI_GetClrVal@@YAKPEAGK@Z @ 0x1C0046A3C
 * Callers:
 *     xxxODI_ColorInit @ 0x1C00467D0 (xxxODI_ColorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CI_GetClrVal(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v4; // r8
  unsigned int *v5; // r9
  int v6; // r10d
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  char v9; // dl
  unsigned int v11; // [rsp+8h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = a1;
  if ( *a1 )
  {
    v5 = &v11;
    v6 = 0;
    while ( 1 )
    {
      v7 = v2;
      if ( v2 )
      {
        v8 = v2;
        do
        {
          if ( v8 >= 0x30u )
          {
            v7 = v8;
            if ( v8 <= 0x39u )
              break;
          }
          v2 = *++v4;
          v8 = *v4;
          v7 = *v4;
        }
        while ( *v4 );
      }
      if ( !v7 )
        break;
      v9 = 0;
      if ( v7 >= 0x30u )
      {
        do
        {
          if ( v7 > 0x39u )
            break;
          ++v4;
          v9 = v7 - 48 + 10 * v9;
          v2 = *v4;
          v7 = *v4;
        }
        while ( *v4 >= 0x30u );
      }
      *(_BYTE *)v5 = v9;
      ++v6;
      v5 = (unsigned int *)((char *)v5 + 1);
      if ( v6 >= 3 )
      {
        *(_BYTE *)v5 = 0;
        return v11;
      }
    }
  }
  return a2;
}
