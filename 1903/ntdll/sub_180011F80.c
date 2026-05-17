/*
 * XREFs of sub_180011F80 @ 0x180011F80
 * Callers:
 *     sub_180011C80 @ 0x180011C80 (sub_180011C80.c)
 * Callees:
 *     sub_180087874 @ 0x180087874 (sub_180087874.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 */

char __fastcall sub_180011F80(__int64 a1, char *a2)
{
  char v4; // cl
  char v5; // bl
  int v6; // ebp
  unsigned __int8 *v7; // rsi
  char v8; // dl
  char v9; // r8
  char v10; // cl
  int v11; // r12d
  int v12; // r14d
  int v13; // r13d
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cl
  char v17; // al
  int v18; // r8d
  int v19; // ecx
  int v20; // r8d
  int v21; // [rsp+20h] [rbp-48h]

  if ( (unsigned __int8)*a2 > 8u || *a2 == 4 )
    return 0;
  v4 = a2[1];
  v5 = 0;
  if ( (v4 & 0x10) != 0 )
  {
    v6 = *((_DWORD *)a2 + 1);
    v7 = (unsigned __int8 *)(a1 + 8);
    v8 = v4 & 2;
    v9 = v4 & 1;
    v10 = v4 & 8;
    v11 = 0;
    if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
    {
      v12 = v8 != 0 ? v6 : 0;
      v13 = v9 != 0 ? v6 : 0;
      if ( v10 )
        v6 = 0;
      do
      {
        v21 = v12;
        if ( *v7 > 8u )
          goto LABEL_15;
        if ( *v7 == 4 )
          goto LABEL_15;
        v14 = v7[1];
        if ( (v14 & 0x10) == 0 )
          goto LABEL_15;
        v15 = *a2;
        if ( *v7 >= 5u )
        {
          if ( (unsigned __int8)(v15 - 5) > 3u )
            goto LABEL_15;
          v17 = sub_180087874(v7, a2, 0LL, 0LL);
        }
        else
        {
          if ( (unsigned __int8)(v15 - 5) <= 3u
            || byte_180126B68[v15] != byte_180126B68[*v7]
            || byte_180126B68[v15 + 16] && (((unsigned __int8)a2[1] ^ v14) & 0xC0) != 0
            || *((_WORD *)a2 + 4) != *((_WORD *)v7 + 4)
            || memcmp(a2 + 8, v7 + 8, 4LL * (unsigned __int8)a2[9] + 8) )
          {
            goto LABEL_15;
          }
          v17 = 1;
        }
        if ( v17 )
        {
          v18 = ~*((_DWORD *)v7 + 1);
          v12 &= v18;
          if ( (v7[1] & 2) == 0 )
            v12 = v21;
          v19 = v13 & ~*((_DWORD *)v7 + 1);
          if ( (v7[1] & 1) == 0 )
            v19 = v13;
          v20 = v6 & v18;
          v13 = v19;
          if ( (v7[1] & 8) != 0 )
            v20 = v6;
          v6 = v20;
          if ( !(v12 | v19 | v20) )
            return 1;
        }
LABEL_15:
        ++v11;
        v7 += *((unsigned __int16 *)v7 + 1);
      }
      while ( v11 < *(unsigned __int16 *)(a1 + 4) - 1 );
    }
  }
  return v5;
}
